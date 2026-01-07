#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "config_utilities_ros::config_utilities_ros" for configuration "Release"
set_property(TARGET config_utilities_ros::config_utilities_ros APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(config_utilities_ros::config_utilities_ros PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libconfig_utilities_ros.so"
  IMPORTED_SONAME_RELEASE "libconfig_utilities_ros.so"
  )

list(APPEND _cmake_import_check_targets config_utilities_ros::config_utilities_ros )
list(APPEND _cmake_import_check_files_for_config_utilities_ros::config_utilities_ros "${_IMPORT_PREFIX}/lib/libconfig_utilities_ros.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
