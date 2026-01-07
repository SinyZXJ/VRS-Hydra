#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
import torch
import clip
from PIL import Image as PILImage

class VlmBridgeNode(Node):
    def __init__(self):
        super().__init__('vlm_bridge_node')

        # =========================================================
        # 1. 配置参数
        # =========================================================
        # 降频策略：每隔多少帧做一次 CLIP 推理？
        # 设为 5 或 10 可以显著节省计算资源，同时保持实时性
        self.inference_interval = 5 
        
        # 空间掩码策略：只保留图像底部多少比例的区域？(0.0 - 1.0)
        # 0.4 表示只取底部 40% 的像素（通常是地面），避免把墙壁和天花板染错色
        self.floor_mask_ratio = 0.4 

        # 置信度阈值：如果 CLIP 觉得都不像，就当作未知
        self.conf_threshold = 0.6

        # =========================================================
        # 2. 语义定义 (CLIP Prompt & Hydra IDs)
        # =========================================================
        # 房间类型 (Prompt)
        self.room_labels = ["office", "living room", "kitchen", "corridor"]
        
        # 对应的 Hydra ID (必须与 yaml 配置一致)
        self.room_ids = {
            "office": 10,
            "living room": 11,
            "kitchen": 12,
            "corridor": 13
        }
        
        # 状态记忆
        self.frame_count = 0
        self.current_room = "corridor" # 初始默认
        self.current_conf = 0.0

        # =========================================================
        # 3. 初始化 CLIP 模型
        # =========================================================
        self.device = "cuda" if torch.cuda.is_available() else "cpu"
        self.get_logger().info(f"Loading CLIP model on {self.device}...")
        
        # 加载 ViT-B/32 (速度与精度的平衡)
        self.model, self.preprocess = clip.load("ViT-B/32", device=self.device)
        
        # 预计算文本特征 (Pre-compute Text Features)
        # 这样不用每一帧都去编码文本，极大提升速度
        self.get_logger().info("Pre-computing text features...")
        text_prompts = [f"a photo of a {label}" for label in self.room_labels]
        text_inputs = clip.tokenize(text_prompts).to(self.device)
        
        with torch.no_grad():
            self.text_features = self.model.encode_text(text_inputs)
            self.text_features /= self.text_features.norm(dim=-1, keepdim=True)

        # =========================================================
        # 4. ROS 通讯配置
        # =========================================================
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        self.rgb_topic = '/tesse/left_cam/rgb/image_raw'
        # 这里的 Topic 已经修改为 Hydra 默认监听的那个，配合 launch file
        self.sem_topic = '/tesse/left_cam/semantic/image_raw'
        self.debug_topic = '/vlm_bridge/debug_image'

        self.bridge = CvBridge()
        self.sub = self.create_subscription(Image, self.rgb_topic, self.image_callback, qos_profile)
        self.pub_sem = self.create_publisher(Image, self.sem_topic, 10)
        self.pub_debug = self.create_publisher(Image, self.debug_topic, 10)
        
        self.get_logger().info("VLM Bridge (CLIP Edition) Started!")
        self.get_logger().info(f"Strategy: Keyframe every {self.inference_interval} frames | Floor Mask {self.floor_mask_ratio*100}%")

    def image_callback(self, msg):
        try:
            # 转换图像
            cv_img = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            h, w = cv_img.shape[:2]

            # =========================================================
            # Step 1: 关键帧推理 (Time Efficiency)
            # =========================================================
            # 只有在特定帧数时才运行昂贵的 CLIP，其他时候复用上次结果
            if self.frame_count % self.inference_interval == 0:
                self.run_clip_inference(cv_img)
            
            self.frame_count += 1

            # =========================================================
            # Step 2: 生成地面掩码 (Space Efficiency / Floor Masking)
            # =========================================================
            # 创建全黑掩码 (默认 ID 0 或 13-走廊)
            # 建议默认用 0 (Unknown)，这样 Hydra 不会更新其他地方，只更新地面
            semantic_mask = np.zeros((h, w), dtype=np.uint8)
            
            # 计算地面区域的起始行 (比如只取下面 40%)
            floor_start_row = int(h * (1.0 - self.floor_mask_ratio))
            
            # 获取当前房间 ID
            room_id = self.room_ids.get(self.current_room, 13)
            
            # 核心改进：只填充图像下半部分！
            # 这样墙壁、天花板保持为 0，Hydra 不会将它们错误染色
            semantic_mask[floor_start_row:, :] = room_id

            # =========================================================
            # Step 3: 发布消息
            # =========================================================
            # 发布语义掩码
            out_msg = self.bridge.cv2_to_imgmsg(semantic_mask, encoding="mono8")
            out_msg.header = msg.header
            self.pub_sem.publish(out_msg)

            # =========================================================
            # Step 4: 发布 Debug 图像 (可视化)
            # =========================================================
            if self.pub_debug.get_subscription_count() > 0:
                debug_img = cv_img.copy()
                
                # 画出“地面掩码”的界线，让你直观看到哪部分参与了建图
                cv2.line(debug_img, (0, floor_start_row), (w, floor_start_row), (0, 255, 255), 2)
                cv2.putText(debug_img, "Floor Mask Area", (10, floor_start_row + 20), 
                           cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 255), 2)
                
                # 显示当前的推理结果
                text = f"CLIP: {self.current_room} ({self.current_conf:.2f})"
                color = (0, 255, 0) if self.current_room != "corridor" else (0, 0, 255)
                cv2.putText(debug_img, text, (10, 30), 
                           cv2.FONT_HERSHEY_SIMPLEX, 1.0, color, 2)
                
                debug_msg = self.bridge.cv2_to_imgmsg(debug_img, encoding="bgr8")
                debug_msg.header = msg.header
                self.pub_debug.publish(debug_msg)

        except Exception as e:
            self.get_logger().error(f"Error in callback: {e}")

    def run_clip_inference(self, cv_img):
        """运行 CLIP 模型进行图像分类"""
        # OpenCV (BGR) -> RGB -> PIL
        rgb_img = cv2.cvtColor(cv_img, cv2.COLOR_BGR2RGB)
        pil_img = PILImage.fromarray(rgb_img)
        
        # 预处理并增加 Batch 维度
        image_input = self.preprocess(pil_img).unsqueeze(0).to(self.device)
        
        with torch.no_grad():
            # 提取图像特征
            image_features = self.model.encode_image(image_input)
            image_features /= image_features.norm(dim=-1, keepdim=True)
            
            # 计算相似度 (Cosine Similarity)
            # image_features: [1, 512], text_features: [4, 512] -> similarity: [1, 4]
            similarity = (100.0 * image_features @ self.text_features.T).softmax(dim=-1)
            values, indices = similarity[0].topk(1)
            
            conf = values.item()
            idx = indices.item()
            
            # 结果判定
            if conf > self.conf_threshold:
                self.current_room = self.room_labels[idx]
            else:
                self.current_room = "corridor" # 置信度太低，退化为走廊或未知
                
            self.current_conf = conf
            
            # 打印日志 (可选，防止刷屏只打印变化的)
            # self.get_logger().info(f"CLIP Inference: {self.current_room} ({conf:.2f})")

def main(args=None):
    rclpy.init(args=args)
    node = VlmBridgeNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        try:
            node.destroy_node()
            rclpy.shutdown()
        except:
            pass

if __name__ == '__main__':
    main()