#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hydra::hydra" for configuration "Release"
set_property(TARGET hydra::hydra APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hydra::hydra PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "pcl_common;pcl_kdtree;pcl_octree;Boost::system;Boost::filesystem;Boost::iostreams;Boost::serialization;flann::flann_cpp"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhydra.so"
  IMPORTED_SONAME_RELEASE "libhydra.so"
  )

list(APPEND _cmake_import_check_targets hydra::hydra )
list(APPEND _cmake_import_check_files_for_hydra::hydra "${_IMPORT_PREFIX}/lib/libhydra.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
