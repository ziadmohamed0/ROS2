// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yahboom_rosmaster_msgs:srv/SetCleaningState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yahboom_rosmaster_msgs/srv/set_cleaning_state.h"


#ifndef YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__STRUCT_H_
#define YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetCleaningState in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__srv__SetCleaningState_Request
{
  /// Request: true to start cleaning, false to stop
  bool desired_cleaning_state;
} yahboom_rosmaster_msgs__srv__SetCleaningState_Request;

// Struct for a sequence of yahboom_rosmaster_msgs__srv__SetCleaningState_Request.
typedef struct yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetCleaningState in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__srv__SetCleaningState_Response
{
  /// Response: whether the request was successful
  bool success;
  /// Response: information about the result
  rosidl_runtime_c__String message;
} yahboom_rosmaster_msgs__srv__SetCleaningState_Response;

// Struct for a sequence of yahboom_rosmaster_msgs__srv__SetCleaningState_Response.
typedef struct yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetCleaningState in the package yahboom_rosmaster_msgs.
typedef struct yahboom_rosmaster_msgs__srv__SetCleaningState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence request;
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence response;
} yahboom_rosmaster_msgs__srv__SetCleaningState_Event;

// Struct for a sequence of yahboom_rosmaster_msgs__srv__SetCleaningState_Event.
typedef struct yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence
{
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YAHBOOM_ROSMASTER_MSGS__SRV__DETAIL__SET_CLEANING_STATE__STRUCT_H_
