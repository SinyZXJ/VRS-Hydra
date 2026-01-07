
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was config_utilitiesConfig.cmake.in                            ########

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

get_filename_component(config_utilities_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
include(CMakeFindDependencyMacro)

find_dependency(yaml-cpp REQUIRED)

if (1)  # expanded from Eigen3_FOUND during build time
  find_dependency(Eigen3)
endif()

if (1)  # expanded from glog_FOUND during build time
  find_dependency(glog)
endif()

if(NOT ON)  # expanded from BUILD_SHARED_LIBS during build time
  find_dependency(Boost COMPONENTS dll filesystem system)
endif()

if(NOT TARGET config_utilities::config_utilities)
  include("${config_utilities_CMAKE_DIR}/config_utilitiesTargets.cmake")
endif()

set(config_utilities_LIBRARIES config_utilities::config_utilities)

check_required_components(config_utilities)
