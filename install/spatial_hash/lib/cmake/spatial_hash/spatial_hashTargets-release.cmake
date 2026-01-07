#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "spatial_hash::spatial_hash" for configuration "Release"
set_property(TARGET spatial_hash::spatial_hash APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spatial_hash::spatial_hash PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libspatial_hash.a"
  )

list(APPEND _cmake_import_check_targets spatial_hash::spatial_hash )
list(APPEND _cmake_import_check_files_for_spatial_hash::spatial_hash "${_IMPORT_PREFIX}/lib/libspatial_hash.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
