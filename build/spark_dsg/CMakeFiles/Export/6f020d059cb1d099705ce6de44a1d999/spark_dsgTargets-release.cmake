#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "spark_dsg::spark_dsg" for configuration "Release"
set_property(TARGET spark_dsg::spark_dsg APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spark_dsg::spark_dsg PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libspark_dsg.so"
  IMPORTED_SONAME_RELEASE "libspark_dsg.so"
  )

list(APPEND _cmake_import_check_targets spark_dsg::spark_dsg )
list(APPEND _cmake_import_check_files_for_spark_dsg::spark_dsg "${_IMPORT_PREFIX}/lib/libspark_dsg.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
