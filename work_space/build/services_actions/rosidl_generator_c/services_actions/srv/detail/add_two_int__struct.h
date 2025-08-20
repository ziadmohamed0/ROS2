// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from services_actions:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_
#define SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInt in the package services_actions.
typedef struct services_actions__srv__AddTwoInt_Request
{
  int64_t a;
  int64_t b;
} services_actions__srv__AddTwoInt_Request;

// Struct for a sequence of services_actions__srv__AddTwoInt_Request.
typedef struct services_actions__srv__AddTwoInt_Request__Sequence
{
  services_actions__srv__AddTwoInt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__srv__AddTwoInt_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInt in the package services_actions.
typedef struct services_actions__srv__AddTwoInt_Response
{
  int64_t sum;
} services_actions__srv__AddTwoInt_Response;

// Struct for a sequence of services_actions__srv__AddTwoInt_Response.
typedef struct services_actions__srv__AddTwoInt_Response__Sequence
{
  services_actions__srv__AddTwoInt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_actions__srv__AddTwoInt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICES_ACTIONS__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_
