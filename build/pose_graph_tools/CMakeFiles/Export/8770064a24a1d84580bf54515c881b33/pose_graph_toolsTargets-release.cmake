#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pose_graph_tools::pose_graph_tools" for configuration "Release"
set_property(TARGET pose_graph_tools::pose_graph_tools APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(pose_graph_tools::pose_graph_tools PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libpose_graph_tools.so"
  IMPORTED_SONAME_RELEASE "libpose_graph_tools.so"
  )

list(APPEND _cmake_import_check_targets pose_graph_tools::pose_graph_tools )
list(APPEND _cmake_import_check_files_for_pose_graph_tools::pose_graph_tools "${_IMPORT_PREFIX}/lib/libpose_graph_tools.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
