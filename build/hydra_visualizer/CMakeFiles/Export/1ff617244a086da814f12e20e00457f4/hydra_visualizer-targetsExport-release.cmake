#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hydra_visualizer::hydra_visualizer" for configuration "Release"
set_property(TARGET hydra_visualizer::hydra_visualizer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hydra_visualizer::hydra_visualizer PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "glog::glog"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhydra_visualizer.so"
  IMPORTED_SONAME_RELEASE "libhydra_visualizer.so"
  )

list(APPEND _cmake_import_check_targets hydra_visualizer::hydra_visualizer )
list(APPEND _cmake_import_check_files_for_hydra_visualizer::hydra_visualizer "${_IMPORT_PREFIX}/lib/libhydra_visualizer.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
