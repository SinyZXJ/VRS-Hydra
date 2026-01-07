#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hydra_ros::hydra_ros" for configuration "Release"
set_property(TARGET hydra_ros::hydra_ros APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hydra_ros::hydra_ros PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "pcl_common;pcl_kdtree;pcl_octree;Boost::system;Boost::filesystem;Boost::iostreams;Boost::serialization;flann::flann_cpp;cv_bridge::cv_bridge"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhydra_ros.so"
  IMPORTED_SONAME_RELEASE "libhydra_ros.so"
  )

list(APPEND _cmake_import_check_targets hydra_ros::hydra_ros )
list(APPEND _cmake_import_check_files_for_hydra_ros::hydra_ros "${_IMPORT_PREFIX}/lib/libhydra_ros.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
