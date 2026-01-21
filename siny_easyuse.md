terminal1
ros2 launch hydra_ros uhumans2.launch.yaml
source install/setup.bash
colcon build --packages-select hydra_ros --symlink-install

terminal2
source install/setup.bash
ros2 bag play /home/siny/bags/office --clock --qos-profile-overrides-path ~/.tf_overrides.yaml

terminal3
source install/setup.bash
python3 vlm_bridge.py --ros-args -p use_sim_time:=true

others
ros2 topic hz /tesse/left_cam/rgb/image_raw

~/hydra_docker/src