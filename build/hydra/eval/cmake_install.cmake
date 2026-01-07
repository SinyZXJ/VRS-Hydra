# Install script for directory: /home/siny/hydra_ws/src/hydra/eval

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/siny/hydra_ws/install/hydra")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libhydra_eval.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libhydra_eval.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libhydra_eval.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/siny/hydra_ws/build/hydra/eval/libhydra_eval.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libhydra_eval.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libhydra_eval.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libhydra_eval.so"
         OLD_RPATH "/home/siny/hydra_ws/build/hydra:/home/siny/hydra_ws/install/kimera_pgmo/lib:/home/siny/hydra_ws/install/config_utilities/lib:/home/siny/hydra_ws/install/kimera_rpgo/lib:/opt/ros/jazzy/lib/aarch64-linux-gnu:/home/siny/hydra_ws/install/pose_graph_tools/lib:/home/siny/hydra_ws/install/spark_dsg/lib:/home/siny/hydra_ws/install/teaserpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libhydra_eval.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compress_graph" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compress_graph")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compress_graph"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hydra" TYPE EXECUTABLE FILES "/home/siny/hydra_ws/build/hydra/eval/compress_graph")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compress_graph" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compress_graph")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compress_graph"
         OLD_RPATH "/home/siny/hydra_ws/build/hydra/eval:/home/siny/hydra_ws/build/hydra:/home/siny/hydra_ws/install/kimera_pgmo/lib:/home/siny/hydra_ws/install/config_utilities/lib:/home/siny/hydra_ws/install/kimera_rpgo/lib:/opt/ros/jazzy/lib/aarch64-linux-gnu:/home/siny/hydra_ws/install/pose_graph_tools/lib:/home/siny/hydra_ws/install/spark_dsg/lib:/home/siny/hydra_ws/install/teaserpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compress_graph")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compute_filtrations" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compute_filtrations")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compute_filtrations"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hydra" TYPE EXECUTABLE FILES "/home/siny/hydra_ws/build/hydra/eval/compute_filtrations")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compute_filtrations" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compute_filtrations")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compute_filtrations"
         OLD_RPATH "/home/siny/hydra_ws/build/hydra/eval:/home/siny/hydra_ws/build/hydra:/home/siny/hydra_ws/install/kimera_pgmo/lib:/home/siny/hydra_ws/install/config_utilities/lib:/home/siny/hydra_ws/install/kimera_rpgo/lib:/opt/ros/jazzy/lib/aarch64-linux-gnu:/home/siny/hydra_ws/install/pose_graph_tools/lib:/home/siny/hydra_ws/install/spark_dsg/lib:/home/siny/hydra_ws/install/teaserpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/compute_filtrations")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_places" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_places")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_places"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hydra" TYPE EXECUTABLE FILES "/home/siny/hydra_ws/build/hydra/eval/evaluate_places")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_places" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_places")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_places"
         OLD_RPATH "/home/siny/hydra_ws/build/hydra/eval:/home/siny/hydra_ws/build/hydra:/home/siny/hydra_ws/install/kimera_pgmo/lib:/home/siny/hydra_ws/install/config_utilities/lib:/home/siny/hydra_ws/install/kimera_rpgo/lib:/opt/ros/jazzy/lib/aarch64-linux-gnu:/home/siny/hydra_ws/install/pose_graph_tools/lib:/home/siny/hydra_ws/install/spark_dsg/lib:/home/siny/hydra_ws/install/teaserpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_places")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_rooms" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_rooms")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_rooms"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hydra" TYPE EXECUTABLE FILES "/home/siny/hydra_ws/build/hydra/eval/evaluate_rooms")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_rooms" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_rooms")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_rooms"
         OLD_RPATH "/home/siny/hydra_ws/build/hydra/eval:/home/siny/hydra_ws/build/hydra:/home/siny/hydra_ws/install/kimera_pgmo/lib:/home/siny/hydra_ws/install/config_utilities/lib:/home/siny/hydra_ws/install/kimera_rpgo/lib:/opt/ros/jazzy/lib/aarch64-linux-gnu:/home/siny/hydra_ws/install/pose_graph_tools/lib:/home/siny/hydra_ws/install/spark_dsg/lib:/home/siny/hydra_ws/install/teaserpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/evaluate_rooms")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/gt_trajectory_optimizer" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/gt_trajectory_optimizer")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/gt_trajectory_optimizer"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hydra" TYPE EXECUTABLE FILES "/home/siny/hydra_ws/build/hydra/eval/gt_trajectory_optimizer")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/gt_trajectory_optimizer" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/gt_trajectory_optimizer")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/gt_trajectory_optimizer"
         OLD_RPATH "/home/siny/hydra_ws/build/hydra/eval:/home/siny/hydra_ws/build/hydra:/home/siny/hydra_ws/install/kimera_pgmo/lib:/home/siny/hydra_ws/install/kimera_rpgo/lib:/opt/ros/jazzy/lib/aarch64-linux-gnu:/home/siny/hydra_ws/install/config_utilities/lib:/home/siny/hydra_ws/install/pose_graph_tools/lib:/home/siny/hydra_ws/install/spark_dsg/lib:/home/siny/hydra_ws/install/teaserpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/gt_trajectory_optimizer")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/merge_graphs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/merge_graphs")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/merge_graphs"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hydra" TYPE EXECUTABLE FILES "/home/siny/hydra_ws/build/hydra/eval/merge_graphs")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/merge_graphs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/merge_graphs")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/merge_graphs"
         OLD_RPATH "/home/siny/hydra_ws/build/hydra/eval:/home/siny/hydra_ws/build/hydra:/home/siny/hydra_ws/install/kimera_pgmo/lib:/home/siny/hydra_ws/install/config_utilities/lib:/home/siny/hydra_ws/install/kimera_rpgo/lib:/opt/ros/jazzy/lib/aarch64-linux-gnu:/home/siny/hydra_ws/install/pose_graph_tools/lib:/home/siny/hydra_ws/install/spark_dsg/lib:/home/siny/hydra_ws/install/teaserpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/merge_graphs")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/optimize_graph" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/optimize_graph")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/optimize_graph"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hydra" TYPE EXECUTABLE FILES "/home/siny/hydra_ws/build/hydra/eval/optimize_graph")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/optimize_graph" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/optimize_graph")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/optimize_graph"
         OLD_RPATH "/home/siny/hydra_ws/build/hydra/eval:/home/siny/hydra_ws/build/hydra:/home/siny/hydra_ws/install/kimera_pgmo/lib:/home/siny/hydra_ws/install/config_utilities/lib:/home/siny/hydra_ws/install/kimera_rpgo/lib:/opt/ros/jazzy/lib/aarch64-linux-gnu:/home/siny/hydra_ws/install/pose_graph_tools/lib:/home/siny/hydra_ws/install/spark_dsg/lib:/home/siny/hydra_ws/install/teaserpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hydra/optimize_graph")
    endif()
  endif()
endif()

