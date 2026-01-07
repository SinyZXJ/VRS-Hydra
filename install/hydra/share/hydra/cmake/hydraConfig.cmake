# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_hydra_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED hydra_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(hydra_FOUND FALSE)
  elseif(NOT hydra_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(hydra_FOUND FALSE)
  endif()
  return()
endif()
set(_hydra_CONFIG_INCLUDED TRUE)

# output package information
if(NOT hydra_FIND_QUIETLY)
  message(STATUS "Found hydra: 2.0.0 (${hydra_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'hydra' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT hydra_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(hydra_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${hydra_DIR}/${_extra}")
endforeach()
