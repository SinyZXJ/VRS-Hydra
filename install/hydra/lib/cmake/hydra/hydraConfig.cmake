
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was hydraConfig.cmake.in                            ########

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

get_filename_component(hydra_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

find_dependency(config_utilities REQUIRED)
find_dependency(Eigen3 REQUIRED)
find_dependency(GTSAM REQUIRED)
find_dependency(kimera_pgmo REQUIRED)
find_dependency(spatial_hash REQUIRED)
find_dependency(spark_dsg REQUIRED)
find_dependency(teaserpp REQUIRED)
find_dependency(OpenCV REQUIRED COMPONENTS core imgproc)

if(NOT TARGET hydra::hydra)
  include("${hydra_CMAKE_DIR}/hydraTargets.cmake")
endif()

set(hydra_LIBRARIES hydra::hydra)
check_required_components(hydra)
