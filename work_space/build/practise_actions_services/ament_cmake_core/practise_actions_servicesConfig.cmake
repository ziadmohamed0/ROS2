# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_practise_actions_services_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED practise_actions_services_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(practise_actions_services_FOUND FALSE)
  elseif(NOT practise_actions_services_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(practise_actions_services_FOUND FALSE)
  endif()
  return()
endif()
set(_practise_actions_services_CONFIG_INCLUDED TRUE)

# output package information
if(NOT practise_actions_services_FIND_QUIETLY)
  message(STATUS "Found practise_actions_services: 0.0.0 (${practise_actions_services_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'practise_actions_services' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${practise_actions_services_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(practise_actions_services_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${practise_actions_services_DIR}/${_extra}")
endforeach()
