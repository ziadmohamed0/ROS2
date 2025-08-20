// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from services_actions:action/Countdown.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_ACTIONS__ACTION__DETAIL__COUNTDOWN__STRUCT_H_
#define SERVICES_ACTIONS__ACTION__DETAIL__COUNTDOWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Countdown in the package services_actions.
typedef struct services_actions__action__Countdown_Goal
{
  int32_t start;
} services_actions__action__Countdown_Goal;

// Struct for a sequence of services_actions__action__Countdown_Goal.
typedef struct services_actions__action__Countdown_Goal__Sequence
{
  services_actions__action__Countdown_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__action__Countdown_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Countdown in the package services_actions.
typedef struct services_actions__action__Countdown_Result
{
  int32_t final;
} services_actions__action__Countdown_Result;

// Struct for a sequence of services_actions__action__Countdown_Result.
typedef struct services_actions__action__Countdown_Result__Sequence
{
  services_actions__action__Countdown_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__action__Countdown_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Countdown in the package services_actions.
typedef struct services_actions__action__Countdown_Feedback
{
  int32_t current;
} services_actions__action__Countdown_Feedback;

// Struct for a sequence of services_actions__action__Countdown_Feedback.
typedef struct services_actions__action__Countdown_Feedback__Sequence
{
  services_actions__action__Countdown_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__action__Countdown_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "services_actions/action/detail/countdown__struct.h"

/// Struct defined in action/Countdown in the package services_actions.
typedef struct services_actions__action__Countdown_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  services_actions__action__Countdown_Goal goal;
} services_actions__action__Countdown_SendGoal_Request;

// Struct for a sequence of services_actions__action__Countdown_SendGoal_Request.
typedef struct services_actions__action__Countdown_SendGoal_Request__Sequence
{
  services_actions__action__Countdown_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__action__Countdown_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Countdown in the package services_actions.
typedef struct services_actions__action__Countdown_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} services_actions__action__Countdown_SendGoal_Response;

// Struct for a sequence of services_actions__action__Countdown_SendGoal_Response.
typedef struct services_actions__action__Countdown_SendGoal_Response__Sequence
{
  services_actions__action__Countdown_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__action__Countdown_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Countdown in the package services_actions.
typedef struct services_actions__action__Countdown_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} services_actions__action__Countdown_GetResult_Request;

// Struct for a sequence of services_actions__action__Countdown_GetResult_Request.
typedef struct services_actions__action__Countdown_GetResult_Request__Sequence
{
  services_actions__action__Countdown_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__action__Countdown_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "services_actions/action/detail/countdown__struct.h"

/// Struct defined in action/Countdown in the package services_actions.
typedef struct services_actions__action__Countdown_GetResult_Response
{
  int8_t status;
  services_actions__action__Countdown_Result result;
} services_actions__action__Countdown_GetResult_Response;

// Struct for a sequence of services_actions__action__Countdown_GetResult_Response.
typedef struct services_actions__action__Countdown_GetResult_Response__Sequence
{
  services_actions__action__Countdown_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__action__Countdown_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "services_actions/action/detail/countdown__struct.h"

/// Struct defined in action/Countdown in the package services_actions.
typedef struct services_actions__action__Countdown_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  services_actions__action__Countdown_Feedback feedback;
} services_actions__action__Countdown_FeedbackMessage;

// Struct for a sequence of services_actions__action__Countdown_FeedbackMessage.
typedef struct services_actions__action__Countdown_FeedbackMessage__Sequence
{
  services_actions__action__Countdown_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__action__Countdown_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICES_ACTIONS__ACTION__DETAIL__COUNTDOWN__STRUCT_H_
