#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "semantic_inference::semantic_inference" for configuration "Release"
set_property(TARGET semantic_inference::semantic_inference APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(semantic_inference::semantic_inference PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsemantic_inference.so"
  IMPORTED_SONAME_RELEASE "libsemantic_inference.so"
  )

list(APPEND _cmake_import_check_targets semantic_inference::semantic_inference )
list(APPEND _cmake_import_check_files_for_semantic_inference::semantic_inference "${_IMPORT_PREFIX}/lib/libsemantic_inference.so" )

# Import target "semantic_inference::demo_segmentation" for configuration "Release"
set_property(TARGET semantic_inference::demo_segmentation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(semantic_inference::demo_segmentation PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/demo_segmentation"
  )

list(APPEND _cmake_import_check_targets semantic_inference::demo_segmentation )
list(APPEND _cmake_import_check_files_for_semantic_inference::demo_segmentation "${_IMPORT_PREFIX}/bin/demo_segmentation" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
