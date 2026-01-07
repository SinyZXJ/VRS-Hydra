#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "semantic_inference_ros::semantic_inference_ros" for configuration "Release"
set_property(TARGET semantic_inference_ros::semantic_inference_ros APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(semantic_inference_ros::semantic_inference_ros PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "cv_bridge::cv_bridge;ianvs::ianvs;image_geometry::image_geometry;message_filters::message_filters;tf2_ros::tf2_ros"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsemantic_inference_ros.so"
  IMPORTED_SONAME_RELEASE "libsemantic_inference_ros.so"
  )

list(APPEND _cmake_import_check_targets semantic_inference_ros::semantic_inference_ros )
list(APPEND _cmake_import_check_files_for_semantic_inference_ros::semantic_inference_ros "${_IMPORT_PREFIX}/lib/libsemantic_inference_ros.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
