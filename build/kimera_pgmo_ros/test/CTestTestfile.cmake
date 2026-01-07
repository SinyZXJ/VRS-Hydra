# CMake generated Testfile for 
# Source directory: /home/siny/hydra_ws/src/kimera_pgmo/kimera_pgmo_ros/test
# Build directory: /home/siny/hydra_ws/build/kimera_pgmo_ros/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[kimera_pgmo_ros-test]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/siny/hydra_ws/build/kimera_pgmo_ros/test_results/kimera_pgmo_ros/kimera_pgmo_ros-test.gtest.xml" "--package-name" "kimera_pgmo_ros" "--output-file" "/home/siny/hydra_ws/build/kimera_pgmo_ros/ament_cmake_gtest/kimera_pgmo_ros-test.txt" "--command" "/home/siny/hydra_ws/build/kimera_pgmo_ros/test/kimera_pgmo_ros-test" "--gtest_output=xml:/home/siny/hydra_ws/build/kimera_pgmo_ros/test_results/kimera_pgmo_ros/kimera_pgmo_ros-test.gtest.xml")
set_tests_properties([=[kimera_pgmo_ros-test]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/siny/hydra_ws/build/kimera_pgmo_ros/test/kimera_pgmo_ros-test" TIMEOUT "60" WORKING_DIRECTORY "/home/siny/hydra_ws/build/kimera_pgmo_ros/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/siny/hydra_ws/src/kimera_pgmo/kimera_pgmo_ros/test/CMakeLists.txt;3;ament_add_gtest;/home/siny/hydra_ws/src/kimera_pgmo/kimera_pgmo_ros/test/CMakeLists.txt;0;")
subdirs("../gtest")
