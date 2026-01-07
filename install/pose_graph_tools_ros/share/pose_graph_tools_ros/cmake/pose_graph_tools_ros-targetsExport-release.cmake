#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pose_graph_tools_ros::pose_graph_tools_ros" for configuration "Release"
set_property(TARGET pose_graph_tools_ros::pose_graph_tools_ros APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(pose_graph_tools_ros::pose_graph_tools_ros PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libpose_graph_tools_ros.so"
  IMPORTED_SONAME_RELEASE "libpose_graph_tools_ros.so"
  )

list(APPEND _cmake_import_check_targets pose_graph_tools_ros::pose_graph_tools_ros )
list(APPEND _cmake_import_check_files_for_pose_graph_tools_ros::pose_graph_tools_ros "${_IMPORT_PREFIX}/lib/libpose_graph_tools_ros.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
