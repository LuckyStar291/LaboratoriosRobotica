# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:matrix_interfaces__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:matrix_interfaces__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:matrix_interfaces__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:matrix_interfaces__rosidl_typesupport_c;__rosidl_generator_cpp:matrix_interfaces__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:matrix_interfaces__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:matrix_interfaces__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:matrix_interfaces__rosidl_typesupport_cpp;__rosidl_generator_py:matrix_interfaces__rosidl_generator_py")

# populate matrix_interfaces_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "matrix_interfaces::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'matrix_interfaces' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND matrix_interfaces_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
