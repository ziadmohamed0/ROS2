// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_service:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_service/msg/sphere.h"


#ifndef ROS2_SERVICE__MSG__DETAIL__SPHERE__STRUCT_H_
#define ROS2_SERVICE__MSG__DETAIL__SPHERE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Sphere in the package ros2_service.
typedef struct ros2_service__msg__Sphere
{
  geometry_msgs__msg__Point center;
  double radius;
} ros2_service__msg__Sphere;

// Struct for a sequence of ros2_service__msg__Sphere.
typedef struct ros2_service__msg__Sphere__Sequence
{
  ros2_service__msg__Sphere * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_service__msg__Sphere__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SERVICE__MSG__DETAIL__SPHERE__STRUCT_H_
