// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yahboom_rosmaster_msgs:action/TimedRotation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yahboom_rosmaster_msgs/action/timed_rotation.h"


#ifndef YAHBOOM_ROSMASTER_MSGS__ACTION__DETAIL__TIMED_ROTATION__STRUCT_H_
#define YAHBOOM_ROSMASTER_MSGS__ACTION__DETAIL__TIMED_ROTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_Goal
{
  /// Desired angular velocity in rad/s (positive for counterclockwise, negative for clockwise)
  double angular_velocity;
  /// Desired duration of the rotation in seconds
  double duration;
} yahboom_rosmaster_msgs__action__TimedRotation_Goal;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_Goal.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_Result
{
  /// Indicates if the rotation was completed successfully
  bool success;
  /// Actual duration of the rotation in seconds
  double actual_duration;
} yahboom_rosmaster_msgs__action__TimedRotation_Result;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_Result.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_Feedback
{
  /// Elapsed time since the start of the rotation in seconds
  double elapsed_time;
  /// Current status of the rotation:
  /// GOAL_RECEIVED: The action server has received a goal
  /// ROTATING: The rotation is in progress
  /// GOAL_SUCCEEDED: The rotation has been completed successfully
  /// GOAL_ABORTED: The rotation has been aborted due to an error or exceptional condition
  /// GOAL_CANCELED: The client has canceled the rotation goal
  rosidl_runtime_c__String status;
} yahboom_rosmaster_msgs__action__TimedRotation_Feedback;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_Feedback.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "yahboom_rosmaster_msgs/action/detail/timed_rotation__struct.h"

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  yahboom_rosmaster_msgs__action__TimedRotation_Goal goal;
} yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence request;
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence response;
} yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "yahboom_rosmaster_msgs/action/detail/timed_rotation__struct.h"

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response
{
  int8_t status;
  yahboom_rosmaster_msgs__action__TimedRotation_Result result;
} yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence request;
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence response;
} yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "yahboom_rosmaster_msgs/action/detail/timed_rotation__struct.h"

/// Struct defined in action/TimedRotation in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  yahboom_rosmaster_msgs__action__TimedRotation_Feedback feedback;
} yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage;

// Struct for a sequence of yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage.
typedef struct yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence
{
  yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YAHBOOM_ROSMASTER_MSGS__ACTION__DETAIL__TIMED_ROTATION__STRUCT_H_
