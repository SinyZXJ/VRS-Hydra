#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kimera_pgmo_ros::kimera_pgmo_ros" for configuration "Release"
set_property(TARGET kimera_pgmo_ros::kimera_pgmo_ros APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kimera_pgmo_ros::kimera_pgmo_ros PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "config_utilities::config_utilities"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libkimera_pgmo_ros.so"
  IMPORTED_SONAME_RELEASE "libkimera_pgmo_ros.so"
  )

list(APPEND _cmake_import_check_targets kimera_pgmo_ros::kimera_pgmo_ros )
list(APPEND _cmake_import_check_files_for_kimera_pgmo_ros::kimera_pgmo_ros "${_IMPORT_PREFIX}/lib/libkimera_pgmo_ros.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
