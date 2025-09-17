// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_service:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_service/msg/num.h"


#ifndef ROS2_SERVICE__MSG__DETAIL__NUM__STRUCT_H_
#define ROS2_SERVICE__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Num in the package ros2_service.
typedef struct ros2_service__msg__Num
{
  int64_t num;
} ros2_service__msg__Num;

// Struct for a sequence of ros2_service__msg__Num.
typedef struct ros2_service__msg__Num__Sequence
{
  ros2_service__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_service__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SERVICE__MSG__DETAIL__NUM__STRUCT_H_
