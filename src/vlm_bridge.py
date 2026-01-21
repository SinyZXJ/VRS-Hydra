#!/usr/bin/env python3
import argparse
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy
import cv2
import numpy as np
import torch
import clip
from PIL import Image as PILImage
from sensor_msgs.msg import Image as ImageMsg, CameraInfo
from cv_bridge import CvBridge
from hydra_msgs.msg import LabelUpdateRequest, NodeLabelUpdate, PlaceNodeArray
from tf2_ros import Buffer, TransformListener, LookupException, ConnectivityException, ExtrapolationException
from scipy.spatial.transform import Rotation

# Dataset-specific room label configurations
DATASET_CONFIGS = {
    "office": {
        "labels": ["office", "living room", "kitchen", "corridor"],
        "room_ids": {
            "office": 10,
            "living room": 11,
            "kitchen": 12,
            "corridor": 13
        },
        "room_colors": {
            10: (0, 255, 0),    # office - green
            11: (255, 0, 0),    # living room - blue
            12: (0, 0, 255),    # kitchen - red
            13: (255, 255, 0),  # corridor - cyan
        }
    },
    "apartment": {
        "labels": ["bedroom", "bathroom", "kitchen", "living room", "corridor"],
        "room_ids": {
            "bedroom": 20,
            "bathroom": 21,
            "kitchen": 22,
            "living room": 23,
            "corridor": 24
        },
        "room_colors": {
            20: (255, 100, 100),  # bedroom - light red
            21: (100, 100, 255),  # bathroom - light blue
            22: (0, 0, 255),      # kitchen - red
            23: (255, 0, 0),      # living room - blue
            24: (255, 255, 0),    # corridor - cyan
        }
    }
}

class VLMBridge(Node):
    def __init__(self, dataset: str = "office"):
        super().__init__('vlm_bridge_node')
        
        # Validate dataset
        if dataset not in DATASET_CONFIGS:
            self.get_logger().error(f"Unknown dataset '{dataset}'. Available: {list(DATASET_CONFIGS.keys())}")
            raise ValueError(f"Unknown dataset: {dataset}")
        
        config = DATASET_CONFIGS[dataset]
        self.get_logger().info(f"Using dataset config: {dataset}")
        
        # Parameters
        self.declare_parameter('inference_interval', 1.0) # Seconds
        self.declare_parameter('conf_threshold', 0.2)
        self.declare_parameter('place_nodes_topic', '/hydra/backend/place_nodes')
        self.declare_parameter('num_crops', 5)  # Number of crops for multi-crop inference
        
        # Bayesian filter parameters
        self.declare_parameter('depth_weight_alpha', 0.1)  # Penalizes distant observations
        self.declare_parameter('fov_weight_sigma', 200.0)  # Gaussian falloff from image center (pixels)
        
        self.inference_interval = self.get_parameter('inference_interval').value
        self.conf_th = self.get_parameter('conf_threshold').value
        self.place_nodes_topic = self.get_parameter('place_nodes_topic').value
        self.num_crops = self.get_parameter('num_crops').value
        self.depth_alpha = self.get_parameter('depth_weight_alpha').value
        self.fov_sigma = self.get_parameter('fov_weight_sigma').value


        # VLM Setup (CLIP) - Using ViT-L/14@336px for better zero-shot classification
        self.device = "cuda" if torch.cuda.is_available() else "cpu"
        self.model, self.preprocess = clip.load("ViT-L/14@336px", device=self.device)
        self.get_logger().info(f"Loaded CLIP ViT-L/14@336px on {self.device}")
        
        # Load labels from dataset config
        self.labels = config["labels"]
        self.text_inputs = torch.cat([clip.tokenize(f"a photo of a {c}") for c in self.labels]).to(self.device)
        self.room_ids = config["room_ids"]
        self.room_colors = config["room_colors"]
        
        self.get_logger().info(f"Room labels: {self.labels}")
        self.get_logger().info(f"Room IDs: {self.room_ids}")

        # ROS Setup
        self.bridge = CvBridge()
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        # State
        self.place_nodes = {} # {node_id: np.array([x, y, z])}
        self.node_priors = {}  # {node_id: np.ndarray} - probability distribution over labels
        self.node_labels = {} # {node_id: current_winning_label_id}
        self.camera_info = None
        self.latest_rgb = None
        self.latest_depth = None
        
        # Numerical stability
        self.num_labels = len(self.labels)
        self.eps = 1e-10

        # QoS for rosbag compatibility - use BEST_EFFORT to match typical sensor streams
        sensor_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
            durability=DurabilityPolicy.VOLATILE
        )

        # Subscribers
        self.info_sub = self.create_subscription(CameraInfo, '/tesse/left_cam/camera_info', self.info_callback, 10)
        self.place_nodes_sub = self.create_subscription(PlaceNodeArray, self.place_nodes_topic, self.place_nodes_callback, 10)
        self.rgb_sub = self.create_subscription(ImageMsg, '/tesse/left_cam/rgb/image_raw', self.rgb_callback, sensor_qos)
        # Use raw depth topic directly from sensor/bag (not Hydra's republished topic)
        self.depth_sub = self.create_subscription(ImageMsg, '/tesse/depth_cam/mono/image_raw', self.depth_callback, sensor_qos)

        # Publishers
        self.label_pub = self.create_publisher(LabelUpdateRequest, '/hydra/input/label_updates', 10)
        self.debug_img_pub = self.create_publisher(ImageMsg, '/vlm_bridge/debug_image', 10)
        
        # Processing timer
        self.create_timer(self.inference_interval, self.process_callback)
        
        self.get_logger().info("VLM Bridge Initialized")
        self.get_logger().info(f"Using QoS: BEST_EFFORT for image topics")

    def info_callback(self, msg):
        self.camera_info = msg
        self.get_logger().info("Received Camera Info")
        self.destroy_subscription(self.info_sub)

    def place_nodes_callback(self, msg):
        # IMPORTANT: Only use nodes from the latest message, don't accumulate!
        # Backend may have merged or deleted old nodes, so cached IDs become stale.
        old_count = len(self.place_nodes)
        self.place_nodes.clear()
        for node in msg.nodes:
            self.place_nodes[node.node_id] = np.array([node.position.x, node.position.y, node.position.z])
        
        self.get_logger().info(f"Updated Place nodes: {len(self.place_nodes)} (was {old_count})")

    def rgb_callback(self, msg):
        self.latest_rgb = msg
        self.get_logger().debug("Received RGB image")

    def depth_callback(self, msg):
        self.latest_depth = msg
        self.get_logger().debug("Received Depth image")

    def _get_multi_crops(self, pil_img):
        """Generate multiple crops (center + 4 corners) for robust classification."""
        w, h = pil_img.size
        crop_size = min(w, h) // 2
        
        crops = [pil_img]  # Full image
        
        if self.num_crops >= 5:
            # Center crop
            cx, cy = w // 2, h // 2
            center = pil_img.crop((cx - crop_size//2, cy - crop_size//2, 
                                   cx + crop_size//2, cy + crop_size//2))
            crops.append(center)
            
            # Four corner crops
            margin = 10
            corners = [
                (margin, margin, margin + crop_size, margin + crop_size),  # top-left
                (w - margin - crop_size, margin, w - margin, margin + crop_size),  # top-right
                (margin, h - margin - crop_size, margin + crop_size, h - margin),  # bottom-left
                (w - margin - crop_size, h - margin - crop_size, w - margin, h - margin),  # bottom-right
            ]
            for box in corners[:self.num_crops - 2]:
                crops.append(pil_img.crop(box))
        
        return crops

    def _compute_depth_weight(self, depth: float) -> float:
        """Depth weight: closer observations are more reliable.
        
        w_depth = 1 / (1 + alpha * d^2)
        At 3m with alpha=0.1: w ≈ 0.53
        At 5m with alpha=0.1: w ≈ 0.29
        """
        return 1.0 / (1.0 + self.depth_alpha * (depth ** 2))

    def _compute_fov_weight(self, u: int, v: int, img_width: int, img_height: int) -> float:
        """FoV weight: center pixels are more reliable than periphery.
        
        w_fov = exp(-r^2 / 2*sigma^2)
        With sigma=200 for 480x640: center ~1.0, corners ~0.3
        """
        cx, cy = img_width / 2.0, img_height / 2.0
        r_sq = (u - cx) ** 2 + (v - cy) ** 2
        return np.exp(-r_sq / (2.0 * self.fov_sigma ** 2))

    def process_callback(self):
        if self.camera_info is None:
            self.get_logger().warn("Waiting for camera info...")
            return
            
        if self.latest_rgb is None:
            self.get_logger().warn("Waiting for RGB image...")
            return
            
        if self.latest_depth is None:
            self.get_logger().warn("Waiting for depth image...")
            return

        rgb_msg = self.latest_rgb
        depth_msg = self.latest_depth

        # 1. Run VLM (CLIP) Inference on full image
        cv_image = self.bridge.imgmsg_to_cv2(rgb_msg, desired_encoding='bgr8')
        pil_img = PILImage.fromarray(cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB))
        
        image_input = self.preprocess(pil_img).unsqueeze(0).to(self.device)
        
        with torch.no_grad():
            image_features = self.model.encode_image(image_input)
            text_features = self.model.encode_text(self.text_inputs)
            
            image_features /= image_features.norm(dim=-1, keepdim=True)
            text_features /= text_features.norm(dim=-1, keepdim=True)
            
            # Get full probability distribution over all labels (not just topk)
            similarity = (100.0 * image_features @ text_features.T).softmax(dim=-1)
            prob_obs = similarity[0].cpu().numpy()  # Shape: (num_labels,)
            
        # For debug display, get top prediction
        label_idx = int(np.argmax(prob_obs))
        conf = prob_obs[label_idx]
        label_str = self.labels[label_idx]
        current_room_id = self.room_ids.get(label_str, 0)
        
        # 2. Create and publish debug image (ALWAYS, regardless of place_nodes)
        debug_img = cv_image.copy()
        color = self.room_colors.get(current_room_id, (255, 255, 255))
        cv2.putText(debug_img, f"Inferred: {label_str} ({conf:.2f})", (20, 40), 
                    cv2.FONT_HERSHEY_SIMPLEX, 1.0, color, 2)
        
        # Show place nodes status on debug image
        nodes_status = f"Place nodes: {len(self.place_nodes)}"
        cv2.putText(debug_img, nodes_status, (20, 80), 
                    cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 255, 255), 2)
        
        # 3. Check conditions for skipping label update (but still publish debug)
        skip_update = False
        skip_reason = ""
        
        if conf < self.conf_th or current_room_id == 0:
            skip_update = True
            skip_reason = "Low confidence"
        elif not self.place_nodes:
            skip_update = True
            skip_reason = "No place nodes yet"
        
        if skip_update:
            if skip_reason:
                cv2.putText(debug_img, f"[{skip_reason}]", (20, 120), 
                            cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 165, 255), 2)
            debug_msg = self.bridge.cv2_to_imgmsg(debug_img, encoding='bgr8')
            debug_msg.header = rgb_msg.header
            self.debug_img_pub.publish(debug_msg)
            return

        # 4. Get Transform (only needed for projection)
        try:
            target_frame = rgb_msg.header.frame_id
            source_frame = 'world'  # uhumans2 uses 'world' instead of 'map'
            trans = self.tf_buffer.lookup_transform(
                target_frame,
                source_frame, 
                rclpy.time.Time(),  # Use latest available transform
                rclpy.duration.Duration(seconds=0.5)
            )
        except (LookupException, ConnectivityException, ExtrapolationException) as e:
            self.get_logger().warn(f"TF Lookup failed: {e}")
            cv2.putText(debug_img, "[TF Failed]", (20, 120), 
                        cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 0, 255), 2)
            debug_msg = self.bridge.cv2_to_imgmsg(debug_img, encoding='bgr8')
            debug_msg.header = rgb_msg.header
            self.debug_img_pub.publish(debug_msg)
            return

        # 3. Inverse Projection & Occlusion Check
        q = [trans.transform.rotation.x, trans.transform.rotation.y, trans.transform.rotation.z, trans.transform.rotation.w]
        t_vec = np.array([trans.transform.translation.x, trans.transform.translation.y, trans.transform.translation.z])
        R = Rotation.from_quat(q).as_matrix()
        
        K = np.array(self.camera_info.k).reshape(3, 3)
        fx, fy = K[0, 0], K[1, 1]
        cx, cy = K[0, 2], K[1, 2]
        
        cv_depth = self.bridge.imgmsg_to_cv2(depth_msg, desired_encoding='passthrough')
        if depth_msg.encoding == '16UC1':
            cv_depth = cv_depth.astype(np.float32) / 1000.0
        
        request = LabelUpdateRequest()
        request.header.stamp = self.get_clock().now().to_msg()
        request.header.frame_id = 'map'
        
        update_list = []
        
        for node_id, pos_w in self.place_nodes.items():
            p_c = R @ pos_w + t_vec
            
            if p_c[2] <= 0.1:
                continue
                
            u = int(fx * p_c[0] / p_c[2] + cx)
            v = int(fy * p_c[1] / p_c[2] + cy)
            
            if u < 0 or u >= cv_image.shape[1] or v < 0 or v >= cv_image.shape[0]:
                continue
                
            measured_depth = cv_depth[v, u]
            
            if measured_depth <= 0.1 or np.isnan(measured_depth):
                continue
                
            node_depth = p_c[2]
            
            if node_depth > measured_depth + 0.3:
                continue
            
            # Draw visible node on debug image
            cv2.circle(debug_img, (u, v), 5, color, -1)
            
            # --- WEIGHTED RECURSIVE BAYESIAN FILTER ---
            
            # Initialize prior with uniform distribution if new node
            if node_id not in self.node_priors:
                self.node_priors[node_id] = np.ones(self.num_labels) / self.num_labels
            
            # Calculate reliability weight: W = w_depth * w_fov
            w_depth = self._compute_depth_weight(node_depth)
            w_fov = self._compute_fov_weight(u, v, cv_image.shape[1], cv_image.shape[0])
            W = w_depth * w_fov
            
            # Weighted Bayesian update: P_new ∝ P_old * (P_obs)^W
            prior = self.node_priors[node_id]
            likelihood = np.power(prob_obs + self.eps, W)  # Dampen low-confidence/peripheral updates
            posterior = prior * likelihood
            
            # Normalize with numerical stability
            posterior_sum = np.sum(posterior)
            if posterior_sum > self.eps and not np.isnan(posterior_sum):
                posterior = posterior / posterior_sum
            else:
                self.get_logger().warn(f"Node {node_id}: numerical instability, resetting prior")
                posterior = np.ones(self.num_labels) / self.num_labels
            
            self.node_priors[node_id] = posterior
            
            # Determine winning label from distribution
            winner_idx = int(np.argmax(posterior))
            winner_label_str = self.labels[winner_idx]
            winner_room_id = self.room_ids[winner_label_str]
            
            # Only publish if winner changed from last sent
            if self.node_labels.get(node_id) != winner_room_id:
                update = NodeLabelUpdate()
                update.node_id = node_id
                update.label = winner_room_id
                update_list.append(update)
                self.node_labels[node_id] = winner_room_id
            
        if update_list:
            request.updates = update_list
            self.label_pub.publish(request)
            
            # DEBUG: Log sample node's probability distribution
            sample_ids = [u.node_id for u in update_list[:3]]
            self.get_logger().info(f"[VLM] Inferred={label_str} ({conf:.2f}). Publishing {len(update_list)} label changes.")
            
        # Debug: entropy logging for first node with priors
        if len(self.node_priors) > 0:
            sample_node_id = list(self.node_priors.keys())[0]
            p = self.node_priors[sample_node_id]
            entropy = -np.sum(p * np.log(p + self.eps))
            top_probs = sorted(zip(self.labels, p), key=lambda x: -x[1])[:3]
            top_str = ", ".join([f"{lbl}:{prob:.2f}" for lbl, prob in top_probs])
            self.get_logger().info(f"[BAYESIAN] Node {sample_node_id}: H={entropy:.3f}, top=[{top_str}]")
        
        # Always publish debug image
        debug_msg = self.bridge.cv2_to_imgmsg(debug_img, encoding='bgr8')
        debug_msg.header = rgb_msg.header
        self.debug_img_pub.publish(debug_msg)

def main(args=None):
    # Parse CLI arguments
    parser = argparse.ArgumentParser(description='VLM Bridge for semantic room labeling')
    parser.add_argument('--dataset', type=str, default='office',
                        choices=list(DATASET_CONFIGS.keys()),
                        help='Dataset type (office or apartment)')
    
    # Parse known args to allow ROS2 args to pass through
    parsed_args, remaining = parser.parse_known_args()
    
    rclpy.init(args=remaining)
    node = VLMBridge(dataset=parsed_args.dataset)
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()