# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_config_utilities_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED config_utilities_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(config_utilities_FOUND FALSE)
  elseif(NOT config_utilities_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(config_utilities_FOUND FALSE)
  endif()
  return()
endif()
set(_config_utilities_CONFIG_INCLUDED TRUE)

# output package information
if(NOT config_utilities_FIND_QUIETLY)
  message(STATUS "Found config_utilities: 2.0.0 (${config_utilities_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'config_utilities' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT config_utilities_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(config_utilities_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${config_utilities_DIR}/${_extra}")
endforeach()
