import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np

class ColorToIdConverter(Node):
    def __init__(self):
        super().__init__('seg_color_converter')
        
        # 1. 订阅你的原始 RGB 分割图
        self.sub = self.create_subscription(
            Image, 
            '/tesse/segmentation/image_raw',  # 你的原始 topic
            self.listener_callback, 
            10)
        
        # 2. 发布 Hydra 喜欢的单通道 ID 图
        self.pub = self.create_publisher(
            Image, 
            '/tesse/segmentation/converted_id', # 新 topic
            10)
        
        self.bridge = CvBridge()
        self.get_logger().info("RGB -> ID Converter Started!")

        # 3. 颜色映射表 (基于你提供的 CSV 数据)
        # 格式: (B, G, R): ID  <-- 注意 OpenCV 是 BGR 顺序！
        self.color_map = {
            (141, 133, 124): 3,   # Floor (CSV: 124,133,141)
            (169, 169, 169): 3,   # Carpet
            (127, 20, 255): 1,    # Wall/Airventilation (CSV: 255,20,127)
            (71, 103, 2): 19,     # Elevator/Wall
            (204, 0, 102): 4,     # Ceiling
            (0, 255, 102): 5,     # Chair
            (65, 144, 39): 7,     # Couch
            (239, 176, 54): 16,   # Table
            (10, 23, 255): 10,    # Office Objects (PC, etc.) RGB(255,23,23) -> BGR(23,23,255)? CSV implies R=255
            # 注意：CSV中 PC 是 255,23,23。OpenCV读入是 BGR，所以是 (23,23,255)
            (23, 23, 255): 10,
            (206, 229, 154): 9,   # Cabinet/Door
            (32, 32, 32): 0,      # Background/Valid but ignore
            (255, 255, 255): 0    # Invalid
        }

    def listener_callback(self, msg):
        try:
            # 转成 OpenCV 图像 (BGR)
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            
            # 创建一个空的 ID 图 (单通道)
            id_image = np.zeros((cv_image.shape[0], cv_image.shape[1]), dtype=np.uint8)

            # --- 核心转换逻辑 ---
            # 这种方法虽然不是最快，但最容易理解和调试
            # 如果想要更高性能，可以使用 numpy mask 操作
            for color, label_id in self.color_map.items():
                # 找到图像中所有等于这个颜色的像素
                # 这里的 color 是 (B, G, R)
                mask = (cv_image == color).all(axis=2)
                id_image[mask] = label_id
            
            # 剩下的黑色/未定义区域默认为 0 (Unknown)

            # 转回 ROS 消息 (Encoding 必须是 mono8)
            out_msg = self.bridge.cv2_to_imgmsg(id_image, encoding='mono8')
            out_msg.header = msg.header
            self.pub.publish(out_msg)

        except Exception as e:
            self.get_logger().error(f'Conversion error: {e}')

def main(args=None):
    rclpy.init(args=args)
    node = ColorToIdConverter()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()