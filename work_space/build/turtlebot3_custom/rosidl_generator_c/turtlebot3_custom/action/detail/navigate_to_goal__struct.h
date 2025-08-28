// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlebot3_custom:action/NavigateToGoal.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_CUSTOM__ACTION__DETAIL__NAVIGATE_TO_GOAL__STRUCT_H_
#define TURTLEBOT3_CUSTOM__ACTION__DETAIL__NAVIGATE_TO_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/NavigateToGoal in the package turtlebot3_custom.
typedef struct turtlebot3_custom__action__NavigateToGoal_Goal
{
  geometry_msgs__msg__Pose target_pose;
} turtlebot3_custom__action__NavigateToGoal_Goal;

// Struct for a sequence of turtlebot3_custom__action__NavigateToGoal_Goal.
typedef struct turtlebot3_custom__action__NavigateToGoal_Goal__Sequence
{
  turtlebot3_custom__action__NavigateToGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__action__NavigateToGoal_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'final_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/NavigateToGoal in the package turtlebot3_custom.
typedef struct turtlebot3_custom__action__NavigateToGoal_Result
{
  bool success;
  rosidl_runtime_c__String message;
  geometry_msgs__msg__Pose final_pose;
} turtlebot3_custom__action__NavigateToGoal_Result;

// Struct for a sequence of turtlebot3_custom__action__NavigateToGoal_Result.
typedef struct turtlebot3_custom__action__NavigateToGoal_Result__Sequence
{
  turtlebot3_custom__action__NavigateToGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__action__NavigateToGoal_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/NavigateToGoal in the package turtlebot3_custom.
typedef struct turtlebot3_custom__action__NavigateToGoal_Feedback
{
  geometry_msgs__msg__Pose current_pose;
  float distance_remaining;
  float time_elapsed;
} turtlebot3_custom__action__NavigateToGoal_Feedback;

// Struct for a sequence of turtlebot3_custom__action__NavigateToGoal_Feedback.
typedef struct turtlebot3_custom__action__NavigateToGoal_Feedback__Sequence
{
  turtlebot3_custom__action__NavigateToGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__action__NavigateToGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "turtlebot3_custom/action/detail/navigate_to_goal__struct.h"

/// Struct defined in action/NavigateToGoal in the package turtlebot3_custom.
typedef struct turtlebot3_custom__action__NavigateToGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtlebot3_custom__action__NavigateToGoal_Goal goal;
} turtlebot3_custom__action__NavigateToGoal_SendGoal_Request;

// Struct for a sequence of turtlebot3_custom__action__NavigateToGoal_SendGoal_Request.
typedef struct turtlebot3_custom__action__NavigateToGoal_SendGoal_Request__Sequence
{
  turtlebot3_custom__action__NavigateToGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__action__NavigateToGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateToGoal in the package turtlebot3_custom.
typedef struct turtlebot3_custom__action__NavigateToGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} turtlebot3_custom__action__NavigateToGoal_SendGoal_Response;

// Struct for a sequence of turtlebot3_custom__action__NavigateToGoal_SendGoal_Response.
typedef struct turtlebot3_custom__action__NavigateToGoal_SendGoal_Response__Sequence
{
  turtlebot3_custom__action__NavigateToGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__action__NavigateToGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateToGoal in the package turtlebot3_custom.
typedef struct turtlebot3_custom__action__NavigateToGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} turtlebot3_custom__action__NavigateToGoal_GetResult_Request;

// Struct for a sequence of turtlebot3_custom__action__NavigateToGoal_GetResult_Request.
typedef struct turtlebot3_custom__action__NavigateToGoal_GetResult_Request__Sequence
{
  turtlebot3_custom__action__NavigateToGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__action__NavigateToGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.h"

/// Struct defined in action/NavigateToGoal in the package turtlebot3_custom.
typedef struct turtlebot3_custom__action__NavigateToGoal_GetResult_Response
{
  int8_t status;
  turtlebot3_custom__action__NavigateToGoal_Result result;
} turtlebot3_custom__action__NavigateToGoal_GetResult_Response;

// Struct for a sequence of turtlebot3_custom__action__NavigateToGoal_GetResult_Response.
typedef struct turtlebot3_custom__action__NavigateToGoal_GetResult_Response__Sequence
{
  turtlebot3_custom__action__NavigateToGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__action__NavigateToGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "turtlebot3_custom/action/detail/navigate_to_goal__struct.h"

/// Struct defined in action/NavigateToGoal in the package turtlebot3_custom.
typedef struct turtlebot3_custom__action__NavigateToGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtlebot3_custom__action__NavigateToGoal_Feedback feedback;
} turtlebot3_custom__action__NavigateToGoal_FeedbackMessage;

// Struct for a sequence of turtlebot3_custom__action__NavigateToGoal_FeedbackMessage.
typedef struct turtlebot3_custom__action__NavigateToGoal_FeedbackMessage__Sequence
{
  turtlebot3_custom__action__NavigateToGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot3_custom__action__NavigateToGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLEBOT3_CUSTOM__ACTION__DETAIL__NAVIGATE_TO_GOAL__STRUCT_H_
