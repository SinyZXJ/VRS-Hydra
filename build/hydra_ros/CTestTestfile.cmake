# CMake generated Testfile for 
# Source directory: /home/siny/hydra_ws/src/hydra_ros/hydra_ros
# Build directory: /home/siny/hydra_ws/build/hydra_ros
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_hydra_ros]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/siny/hydra_ws/build/hydra_ros/test_results/hydra_ros/test_hydra_ros.gtest.xml" "--package-name" "hydra_ros" "--output-file" "/home/siny/hydra_ws/build/hydra_ros/ament_cmake_gtest/test_hydra_ros.txt" "--command" "/home/siny/hydra_ws/build/hydra_ros/test_hydra_ros" "--gtest_output=xml:/home/siny/hydra_ws/build/hydra_ros/test_results/hydra_ros/test_hydra_ros.gtest.xml")
set_tests_properties([=[test_hydra_ros]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/siny/hydra_ws/build/hydra_ros/test_hydra_ros" TIMEOUT "60" WORKING_DIRECTORY "/home/siny/hydra_ws/build/hydra_ros" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/siny/hydra_ws/src/hydra_ros/hydra_ros/CMakeLists.txt;101;ament_add_gtest;/home/siny/hydra_ws/src/hydra_ros/hydra_ros/CMakeLists.txt;0;")
subdirs("gtest")
