// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ros2_service:msg/Num.idl
// generated code does not contain a copyright notice
#ifndef ROS2_SERVICE__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROS2_SERVICE__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_service/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_service/msg/detail/num__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_service
bool cdr_serialize_ros2_service__msg__Num(
  const ros2_service__msg__Num * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_service
bool cdr_deserialize_ros2_service__msg__Num(
  eprosima::fastcdr::Cdr &,
  ros2_service__msg__Num * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_service
size_t get_serialized_size_ros2_service__msg__Num(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_service
size_t max_serialized_size_ros2_service__msg__Num(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_service
bool cdr_serialize_key_ros2_service__msg__Num(
  const ros2_service__msg__Num * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_service
size_t get_serialized_size_key_ros2_service__msg__Num(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_service
size_t max_serialized_size_key_ros2_service__msg__Num(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_service, msg, Num)();

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SERVICE__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
