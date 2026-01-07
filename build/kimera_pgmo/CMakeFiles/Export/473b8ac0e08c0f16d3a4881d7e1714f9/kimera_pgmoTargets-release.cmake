#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kimera_pgmo::kimera_pgmo" for configuration "Release"
set_property(TARGET kimera_pgmo::kimera_pgmo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kimera_pgmo::kimera_pgmo PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libkimera_pgmo.so"
  IMPORTED_SONAME_RELEASE "libkimera_pgmo.so"
  )

list(APPEND _cmake_import_check_targets kimera_pgmo::kimera_pgmo )
list(APPEND _cmake_import_check_files_for_kimera_pgmo::kimera_pgmo "${_IMPORT_PREFIX}/lib/libkimera_pgmo.so" )

# Import target "kimera_pgmo::mesh_trajectory_deformer" for configuration "Release"
set_property(TARGET kimera_pgmo::mesh_trajectory_deformer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kimera_pgmo::mesh_trajectory_deformer PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/mesh_trajectory_deformer"
  )

list(APPEND _cmake_import_check_targets kimera_pgmo::mesh_trajectory_deformer )
list(APPEND _cmake_import_check_files_for_kimera_pgmo::mesh_trajectory_deformer "${_IMPORT_PREFIX}/bin/mesh_trajectory_deformer" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
