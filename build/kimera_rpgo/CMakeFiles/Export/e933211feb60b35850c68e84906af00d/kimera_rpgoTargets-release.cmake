#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kimera_rpgo::kimera_rpgo" for configuration "Release"
set_property(TARGET kimera_rpgo::kimera_rpgo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kimera_rpgo::kimera_rpgo PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libkimera_rpgo.so"
  IMPORTED_SONAME_RELEASE "libkimera_rpgo.so"
  )

list(APPEND _cmake_import_check_targets kimera_rpgo::kimera_rpgo )
list(APPEND _cmake_import_check_files_for_kimera_rpgo::kimera_rpgo "${_IMPORT_PREFIX}/lib/libkimera_rpgo.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
