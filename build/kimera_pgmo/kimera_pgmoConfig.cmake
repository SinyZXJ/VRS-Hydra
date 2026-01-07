
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was kimera_pgmoConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################
include(CMakeFindDependencyMacro)

get_filename_component(kimera_pgmo_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

find_dependency(config_utilities REQUIRED)
find_dependency(Eigen3 REQUIRED)
find_dependency(GTSAM REQUIRED)
find_dependency(kimera_rpgo REQUIRED)
find_dependency(pose_graph_tools REQUIRED)
find_dependency(spatial_hash REQUIRED)

set(CLEAR_WARNING_SUPPRESSION OFF)
if(NOT DEFINED CMAKE_SUPPRESS_DEVELOPER_WARNINGS)
  set(CLEAR_WARNING_SUPPRESSION ON)
  set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS 1 CACHE INTERNAL "No dev warnings")
endif()

find_dependency(PCL REQUIRED COMPATIBILITY common geometry kdtree octree)

if (CLEAR_WARNING_SUPPRESSION)
  unset(CMAKE_SUPPRESS_DEVELOPER_WARNINGS)
endif()

if(NOT TARGET kimera_pgmo::kimera_pgmo)
  include("${kimera_pgmo_CMAKE_DIR}/kimera_pgmoTargets.cmake")
endif()

set(kimera_pgmo_LIBRARIES kimera_pgmo::kimera_pgmo)
check_required_components(kimera_pgmo)
