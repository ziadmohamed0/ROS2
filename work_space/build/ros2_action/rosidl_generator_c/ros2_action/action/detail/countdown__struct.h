// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_action:action/Countdown.idl
// generated code does not contain a copyright notice

#ifndef ROS2_ACTION__ACTION__DETAIL__COUNTDOWN__STRUCT_H_
#define ROS2_ACTION__ACTION__DETAIL__COUNTDOWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Countdown in the package ros2_action.
typedef struct ros2_action__action__Countdown_Goal
{
  int32_t start;
} ros2_action__action__Countdown_Goal;

// Struct for a sequence of ros2_action__action__Countdown_Goal.
typedef struct ros2_action__action__Countdown_Goal__Sequence
{
  ros2_action__action__Countdown_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_action__action__Countdown_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Countdown in the package ros2_action.
typedef struct ros2_action__action__Countdown_Result
{
  int32_t final;
} ros2_action__action__Countdown_Result;

// Struct for a sequence of ros2_action__action__Countdown_Result.
typedef struct ros2_action__action__Countdown_Result__Sequence
{
  ros2_action__action__Countdown_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_action__action__Countdown_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Countdown in the package ros2_action.
typedef struct ros2_action__action__Countdown_Feedback
{
  int32_t current;
} ros2_action__action__Countdown_Feedback;

// Struct for a sequence of ros2_action__action__Countdown_Feedback.
typedef struct ros2_action__action__Countdown_Feedback__Sequence
{
  ros2_action__action__Countdown_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_action__action__Countdown_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros2_action/action/detail/countdown__struct.h"

/// Struct defined in action/Countdown in the package ros2_action.
typedef struct ros2_action__action__Countdown_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_action__action__Countdown_Goal goal;
} ros2_action__action__Countdown_SendGoal_Request;

// Struct for a sequence of ros2_action__action__Countdown_SendGoal_Request.
typedef struct ros2_action__action__Countdown_SendGoal_Request__Sequence
{
  ros2_action__action__Countdown_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_action__action__Countdown_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Countdown in the package ros2_action.
typedef struct ros2_action__action__Countdown_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros2_action__action__Countdown_SendGoal_Response;

// Struct for a sequence of ros2_action__action__Countdown_SendGoal_Response.
typedef struct ros2_action__action__Countdown_SendGoal_Response__Sequence
{
  ros2_action__action__Countdown_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_action__action__Countdown_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Countdown in the package ros2_action.
typedef struct ros2_action__action__Countdown_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros2_action__action__Countdown_GetResult_Request;

// Struct for a sequence of ros2_action__action__Countdown_GetResult_Request.
typedef struct ros2_action__action__Countdown_GetResult_Request__Sequence
{
  ros2_action__action__Countdown_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_action__action__Countdown_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_action/action/detail/countdown__struct.h"

/// Struct defined in action/Countdown in the package ros2_action.
typedef struct ros2_action__action__Countdown_GetResult_Response
{
  int8_t status;
  ros2_action__action__Countdown_Result result;
} ros2_action__action__Countdown_GetResult_Response;

// Struct for a sequence of ros2_action__action__Countdown_GetResult_Response.
typedef struct ros2_action__action__Countdown_GetResult_Response__Sequence
{
  ros2_action__action__Countdown_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_action__action__Countdown_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros2_action/action/detail/countdown__struct.h"

/// Struct defined in action/Countdown in the package ros2_action.
typedef struct ros2_action__action__Countdown_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_action__action__Countdown_Feedback feedback;
} ros2_action__action__Countdown_FeedbackMessage;

// Struct for a sequence of ros2_action__action__Countdown_FeedbackMessage.
typedef struct ros2_action__action__Countdown_FeedbackMessage__Sequence
{
  ros2_action__action__Countdown_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_action__action__Countdown_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_ACTION__ACTION__DETAIL__COUNTDOWN__STRUCT_H_
