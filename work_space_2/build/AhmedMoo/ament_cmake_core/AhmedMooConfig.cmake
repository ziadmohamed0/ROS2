# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_AhmedMoo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED AhmedMoo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(AhmedMoo_FOUND FALSE)
  elseif(NOT AhmedMoo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(AhmedMoo_FOUND FALSE)
  endif()
  return()
endif()
set(_AhmedMoo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT AhmedMoo_FIND_QUIETLY)
  message(STATUS "Found AhmedMoo: 0.0.0 (${AhmedMoo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'AhmedMoo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${AhmedMoo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(AhmedMoo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${AhmedMoo_DIR}/${_extra}")
endforeach()
