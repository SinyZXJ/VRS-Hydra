#!/usr/bin/env python3
"""
Extract unique colors from semantic segmentation images.
Run this while playing the bag to discover the actual color palette.

Usage:
    python3 extract_seg_colors.py
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import numpy as np
from collections import Counter

class ColorExtractor(Node):
    def __init__(self):
        super().__init__('seg_color_extractor')
        
        self.sub = self.create_subscription(
            Image, 
            '/tesse/seg_cam/rgb/image_raw',
            self.listener_callback, 
            10)
        
        self.bridge = CvBridge()
        self.unique_colors = Counter()
        self.frame_count = 0
        self.get_logger().info("Color Extractor Started! Waiting for images...")
        
    def listener_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            
            # Reshape to list of pixels and get unique colors
            pixels = cv_image.reshape(-1, 3)
            unique, counts = np.unique(pixels, axis=0, return_counts=True)
            
            for color, count in zip(unique, counts):
                # Store as (B,G,R) tuple
                color_tuple = tuple(color.tolist())
                self.unique_colors[color_tuple] += count
            
            self.frame_count += 1
            
            if self.frame_count % 50 == 0:
                self.print_top_colors()
                
        except Exception as e:
            self.get_logger().error(f'Error: {e}')
    
    def print_top_colors(self):
        self.get_logger().info(f"\n=== Frame {self.frame_count}: Top 30 Colors (BGR format) ===")
        for i, (color, count) in enumerate(self.unique_colors.most_common(30)):
            # Convert BGR to RGB for display
            b, g, r = color
            self.get_logger().info(f"  {i+1}. BGR{color} -> RGB({r},{g},{b}): {count} pixels")
        self.get_logger().info("=" * 60)


def main(args=None):
    rclpy.init(args=args)
    node = ColorExtractor()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("\n\n=== FINAL RESULTS ===")
        node.print_top_colors()
        
        # Generate Python dict format for easy copy-paste
        node.get_logger().info("\n=== Python Dict Format (for color map) ===")
        for color, count in node.unique_colors.most_common(30):
            node.get_logger().info(f"    {color}: 0,  # TODO: assign label ID, {count} pixels")
    
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
