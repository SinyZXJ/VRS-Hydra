#!/usr/bin/env python3
"""
Semantic segmentation RGB to ID converter for uHumans2 datasets.
Converts RGB-encoded segmentation images to single-channel label IDs.

Usage:
    python3 seg_converter_uhumans2.py [--scene office|apartment]
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
import argparse

# Color maps for different scenes
# Format: (B, G, R): ID  <-- OpenCV uses BGR order!

OFFICE_COLOR_MAP = {
    (141, 133, 124): 3,   # Floor (CSV: 124,133,141)
    (169, 169, 169): 3,   # Carpet
    (127, 20, 255): 1,    # Wall/Airventilation (CSV: 255,20,127)
    (71, 103, 2): 19,     # Elevator/Wall
    (204, 0, 102): 4,     # Ceiling
    (0, 255, 102): 5,     # Chair
    (65, 144, 39): 7,     # Couch
    (239, 176, 54): 16,   # Table
    (23, 23, 255): 10,    # Office Objects (PC, etc.)
    (206, 229, 154): 9,   # Cabinet/Door
    (32, 32, 32): 0,      # Background/Valid but ignore
    (255, 255, 255): 0,   # Invalid
    (35, 100, 35): 6,     # Bench
    (211, 146, 62): 11,   # Lamp
    (6, 188, 246): 12,    # Painting
    (233, 112, 38): 13,   # Plant
    (91, 38, 154): 18,    # Trashcan
}

# Apartment color map - needs to be filled based on the actual bag data
# For now, copy office as starting point
APARTMENT_COLOR_MAP = {
    # Top colors from extract_seg_colors.py in BGR format
    # Floor (ID 3)
    (141, 133, 124): 3,   # Standard floor gray (BGR)
    (173, 87, 128): 3,    # Extracted Color 1 (PURPLE) BGR(173, 87, 128) -> Floor
    (179, 9, 126): 3,     # Extracted Color 5 (DARK PURPLE) BGR(126, 9, 179) - Maybe floor shadow? 
                          # Wait, extractor log said BGR(126, 9, 179). Python dict needs (126, 9, 179)
    (126, 9, 179): 3,     # Corrected BGR

    # Wall (ID 1 / 19)
    (81, 239, 5): 19,     # Extracted Color 3 (GREEN) BGR(81, 239, 5) -> Wall
    (202, 42, 29): 1,     # Extracted Color 2 (DARK BLUE) BGR(202, 42, 29) -> Wall
    (197, 25, 162): 19,   # Extracted Color 4 (MAGENTA) BGR(197, 25, 162) -> Wall
    
    # Ceiling (ID 4)
    (43, 225, 245): 4,    # Extracted Color 8 (YELLOW) BGR(43, 225, 245) -> Ceiling
    
    # Other Valid Objects (ID 10 for generic object or specific IDs)
    (0, 62, 88): 10,      # Extracted Color 6 BGR(0, 62, 88)
    (25, 163, 103): 10,   # Extracted Color 7 BGR(25, 163, 103)
    
    # Standard mappings (Legacy - keep if any match)
    (141, 133, 124): 3,   
    (169, 169, 169): 3,   
    (127, 20, 255): 1,    
    (71, 103, 2): 19,     
    (204, 0, 102): 4,     
    (32, 32, 32): 0,      # Background
    (255, 255, 255): 0,   # Invalid
}


class ColorToIdConverter(Node):
    def __init__(self, scene='office'):
        super().__init__('seg_color_converter')
        
        self.scene = scene
        self.color_map = OFFICE_COLOR_MAP if scene == 'office' else APARTMENT_COLOR_MAP
        
        # Subscribe to RGB segmentation image
        self.sub = self.create_subscription(
            Image, 
            '/tesse/seg_cam/rgb/image_raw',
            self.listener_callback, 
            10)
        
        # Publish single-channel ID image
        self.pub = self.create_publisher(
            Image, 
            '/tesse/seg_cam/converted/image_raw',
            10)
        
        self.bridge = CvBridge()
        self.get_logger().info(f"RGB -> ID Converter Started for {scene} scene!")
        self.get_logger().info(f"Loaded {len(self.color_map)} color mappings")

    def listener_callback(self, msg):
        try:
            # Convert to OpenCV image (BGR)
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            
            # Create ID image (single channel, 16-bit)
            # Initialize with 25 (Background) to ensure valid mesh generation even for unknown colors
            id_image = np.full((cv_image.shape[0], cv_image.shape[1]), 25, dtype=np.uint16)

            # Core conversion logic
            for color, label_id in self.color_map.items():
                mask = (cv_image == color).all(axis=2)
                id_image[mask] = label_id
            
            # Convert to ROS message (mono16 for label IDs)
            out_msg = self.bridge.cv2_to_imgmsg(id_image, encoding='mono16')
            out_msg.header = msg.header
            self.pub.publish(out_msg)

        except Exception as e:
            self.get_logger().error(f'Conversion error: {e}')


def main(args=None):
    parser = argparse.ArgumentParser(description='RGB to ID segmentation converter')
    parser.add_argument('--scene', type=str, default='office', 
                        choices=['office', 'apartment'],
                        help='Scene type for color mapping')
    
    # Parse known args to handle ROS remapping arguments
    known_args, _ = parser.parse_known_args()
    
    rclpy.init(args=args)
    node = ColorToIdConverter(scene=known_args.scene)
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
