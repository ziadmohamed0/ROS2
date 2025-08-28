// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlebot3_custom:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_H_
#define TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'query_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRobotStatus in the package turtlebot3_custom.
typedef struct turtlebot3_custom__srv__GetRobotStatus_Request
{
  rosidl_runtime_c__String query_type;
} turtlebot3_custom__srv__GetRobotStatus_Request;

// Struct for a sequence of turtlebot3_custom__srv__GetRobotStatus_Request.
typedef struct turtlebot3_custom__srv__GetRobotStatus_Request__Sequence
{
  turtlebot3_custom__srv__GetRobotStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__srv__GetRobotStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'current_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'battery_info'
#include "sensor_msgs/msg/detail/battery_state__struct.h"

/// Struct defined in srv/GetRobotStatus in the package turtlebot3_custom.
typedef struct turtlebot3_custom__srv__GetRobotStatus_Response
{
  bool success;
  rosidl_runtime_c__String status_message;
  geometry_msgs__msg__Pose current_pose;
  sensor_msgs__msg__BatteryState battery_info;
} turtlebot3_custom__srv__GetRobotStatus_Response;

// Struct for a sequence of turtlebot3_custom__srv__GetRobotStatus_Response.
typedef struct turtlebot3_custom__srv__GetRobotStatus_Response__Sequence
{
  turtlebot3_custom__srv__GetRobotStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__srv__GetRobotStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLEBOT3_CUSTOM__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_H_
