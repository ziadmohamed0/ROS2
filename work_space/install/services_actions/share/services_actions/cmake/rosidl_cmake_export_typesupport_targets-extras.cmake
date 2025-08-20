# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:services_actions__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:services_actions__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:services_actions__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:services_actions__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:services_actions__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:services_actions__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:services_actions__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:services_actions__rosidl_typesupport_cpp;__rosidl_generator_py:services_actions__rosidl_generator_py")

# populate services_actions_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "services_actions::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'services_actions' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND services_actions_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
