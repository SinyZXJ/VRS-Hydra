from launch import LaunchDescription
from launch.actions import ExecuteProcess, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
import os

def generate_launch_description():
    # 这里填你 bag 包的绝对路径
    bag_path = os.path.expanduser('~/bags/12_08_acl_jackal2_ros2')

    return LaunchDescription([
        # 1. 播放 Bag (带 --clock)
        ExecuteProcess(
            cmd=['ros2', 'bag', 'play', bag_path, '--clock'],
            output='screen'
        ),

        # 2. 静态 TF: Odom -> Base (修复缺失的里程计变换)
        # 假设机器人起点在原点，这能把树连起来
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='fake_odom_publisher',
            arguments=['0', '0', '0', '0', '0', '0', '1', 'acl_jackal2/odom', 'acl_jackal2/base_link']
        ),

        # 3. 静态 TF: Base -> Camera (修复缺失的相机外参)
        # 对应之前的 Plan B
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='fake_camera_publisher',
            arguments=['0', '0', '0', '-0.5', '0.5', '-0.5', '0.5', 'acl_jackal2/base_link', 'acl_jackal2/forward_color_optical_frame']
        )
    ])