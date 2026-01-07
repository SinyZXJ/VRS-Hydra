#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "config_utilities::config_utilities" for configuration "Release"
set_property(TARGET config_utilities::config_utilities APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(config_utilities::config_utilities PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Boost::filesystem;Boost::system"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libconfig_utilities.so"
  IMPORTED_SONAME_RELEASE "libconfig_utilities.so"
  )

list(APPEND _cmake_import_check_targets config_utilities::config_utilities )
list(APPEND _cmake_import_check_files_for_config_utilities::config_utilities "${_IMPORT_PREFIX}/lib/libconfig_utilities.so" )

# Import target "config_utilities::composite-configs" for configuration "Release"
set_property(TARGET config_utilities::composite-configs APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(config_utilities::composite-configs PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/composite-configs"
  )

list(APPEND _cmake_import_check_targets config_utilities::composite-configs )
list(APPEND _cmake_import_check_files_for_config_utilities::composite-configs "${_IMPORT_PREFIX}/bin/composite-configs" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
