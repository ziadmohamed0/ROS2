// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_service:msg/Sphere.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_service/msg/detail/sphere__functions.h"
#include "ros2_service/msg/detail/sphere__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_service
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Sphere_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_service::msg::Sphere(_init);
}

void Sphere_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_service::msg::Sphere *>(message_memory);
  typed_message->~Sphere();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sphere_message_member_array[2] = {
  {
    "center",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_service::msg::Sphere, center),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_service::msg::Sphere, radius),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sphere_message_members = {
  "ros2_service::msg",  // message namespace
  "Sphere",  // message name
  2,  // number of fields
  sizeof(ros2_service::msg::Sphere),
  false,  // has_any_key_member_
  Sphere_message_member_array,  // message members
  Sphere_init_function,  // function to initialize message memory (memory has to be allocated)
  Sphere_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sphere_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sphere_message_members,
  get_message_typesupport_handle_function,
  &ros2_service__msg__Sphere__get_type_hash,
  &ros2_service__msg__Sphere__get_type_description,
  &ros2_service__msg__Sphere__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_service::msg::Sphere>()
{
  return &::ros2_service::msg::rosidl_typesupport_introspection_cpp::Sphere_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_service, msg, Sphere)() {
  return &::ros2_service::msg::rosidl_typesupport_introspection_cpp::Sphere_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
