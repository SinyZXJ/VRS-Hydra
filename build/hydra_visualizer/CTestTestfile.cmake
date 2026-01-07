# CMake generated Testfile for 
# Source directory: /home/siny/hydra_ws/src/hydra_ros/hydra_visualizer
# Build directory: /home/siny/hydra_ws/build/hydra_visualizer
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_hydra_visualizer]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/siny/hydra_ws/build/hydra_visualizer/test_results/hydra_visualizer/test_hydra_visualizer.gtest.xml" "--package-name" "hydra_visualizer" "--output-file" "/home/siny/hydra_ws/build/hydra_visualizer/ament_cmake_gtest/test_hydra_visualizer.txt" "--command" "/home/siny/hydra_ws/build/hydra_visualizer/test_hydra_visualizer" "--gtest_output=xml:/home/siny/hydra_ws/build/hydra_visualizer/test_results/hydra_visualizer/test_hydra_visualizer.gtest.xml")
set_tests_properties([=[test_hydra_visualizer]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/siny/hydra_ws/build/hydra_visualizer/test_hydra_visualizer" TIMEOUT "60" WORKING_DIRECTORY "/home/siny/hydra_ws/build/hydra_visualizer" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/siny/hydra_ws/src/hydra_ros/hydra_visualizer/CMakeLists.txt;90;ament_add_gtest;/home/siny/hydra_ws/src/hydra_ros/hydra_visualizer/CMakeLists.txt;0;")
subdirs("gtest")
