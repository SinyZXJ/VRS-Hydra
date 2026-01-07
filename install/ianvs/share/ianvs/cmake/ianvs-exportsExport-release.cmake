#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ianvs::ianvs" for configuration "Release"
set_property(TARGET ianvs::ianvs APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ianvs::ianvs PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libianvs.so"
  IMPORTED_SONAME_RELEASE "libianvs.so"
  )

list(APPEND _cmake_import_check_targets ianvs::ianvs )
list(APPEND _cmake_import_check_files_for_ianvs::ianvs "${_IMPORT_PREFIX}/lib/libianvs.so" )

# Import target "ianvs::ianvs_plugins" for configuration "Release"
set_property(TARGET ianvs::ianvs_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ianvs::ianvs_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libianvs_plugins.so"
  IMPORTED_SONAME_RELEASE "libianvs_plugins.so"
  )

list(APPEND _cmake_import_check_targets ianvs::ianvs_plugins )
list(APPEND _cmake_import_check_files_for_ianvs::ianvs_plugins "${_IMPORT_PREFIX}/lib/libianvs_plugins.so" )

# Import target "ianvs::ianvs_rosbag" for configuration "Release"
set_property(TARGET ianvs::ianvs_rosbag APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ianvs::ianvs_rosbag PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libianvs_rosbag.so"
  IMPORTED_SONAME_RELEASE "libianvs_rosbag.so"
  )

list(APPEND _cmake_import_check_targets ianvs::ianvs_rosbag )
list(APPEND _cmake_import_check_files_for_ianvs::ianvs_rosbag "${_IMPORT_PREFIX}/lib/libianvs_rosbag.so" )

# Import target "ianvs::play_rosbag" for configuration "Release"
set_property(TARGET ianvs::play_rosbag APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ianvs::play_rosbag PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ianvs/play_rosbag"
  )

list(APPEND _cmake_import_check_targets ianvs::play_rosbag )
list(APPEND _cmake_import_check_files_for_ianvs::play_rosbag "${_IMPORT_PREFIX}/lib/ianvs/play_rosbag" )

# Import target "ianvs::merge_rosbags" for configuration "Release"
set_property(TARGET ianvs::merge_rosbags APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ianvs::merge_rosbags PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ianvs/merge_rosbags"
  )

list(APPEND _cmake_import_check_targets ianvs::merge_rosbags )
list(APPEND _cmake_import_check_files_for_ianvs::merge_rosbags "${_IMPORT_PREFIX}/lib/ianvs/merge_rosbags" )

# Import target "ianvs::transform_file_broadcaster" for configuration "Release"
set_property(TARGET ianvs::transform_file_broadcaster APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ianvs::transform_file_broadcaster PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ianvs/transform_file_broadcaster"
  )

list(APPEND _cmake_import_check_targets ianvs::transform_file_broadcaster )
list(APPEND _cmake_import_check_files_for_ianvs::transform_file_broadcaster "${_IMPORT_PREFIX}/lib/ianvs/transform_file_broadcaster" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
