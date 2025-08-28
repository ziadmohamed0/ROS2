// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlebot3_custom:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice
#include "turtlebot3_custom/srv/detail/get_robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `query_type`
#include "rosidl_runtime_c/string_functions.h"

bool
turtlebot3_custom__srv__GetRobotStatus_Request__init(turtlebot3_custom__srv__GetRobotStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // query_type
  if (!rosidl_runtime_c__String__init(&msg->query_type)) {
    turtlebot3_custom__srv__GetRobotStatus_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtlebot3_custom__srv__GetRobotStatus_Request__fini(turtlebot3_custom__srv__GetRobotStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // query_type
  rosidl_runtime_c__String__fini(&msg->query_type);
}

bool
turtlebot3_custom__srv__GetRobotStatus_Request__are_equal(const turtlebot3_custom__srv__GetRobotStatus_Request * lhs, const turtlebot3_custom__srv__GetRobotStatus_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // query_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->query_type), &(rhs->query_type)))
  {
    return false;
  }
  return true;
}

bool
turtlebot3_custom__srv__GetRobotStatus_Request__copy(
  const turtlebot3_custom__srv__GetRobotStatus_Request * input,
  turtlebot3_custom__srv__GetRobotStatus_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // query_type
  if (!rosidl_runtime_c__String__copy(
      &(input->query_type), &(output->query_type)))
  {
    return false;
  }
  return true;
}

turtlebot3_custom__srv__GetRobotStatus_Request *
turtlebot3_custom__srv__GetRobotStatus_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_custom__srv__GetRobotStatus_Request * msg = (turtlebot3_custom__srv__GetRobotStatus_Request *)allocator.allocate(sizeof(turtlebot3_custom__srv__GetRobotStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlebot3_custom__srv__GetRobotStatus_Request));
  bool success = turtlebot3_custom__srv__GetRobotStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlebot3_custom__srv__GetRobotStatus_Request__destroy(turtlebot3_custom__srv__GetRobotStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlebot3_custom__srv__GetRobotStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlebot3_custom__srv__GetRobotStatus_Request__Sequence__init(turtlebot3_custom__srv__GetRobotStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_custom__srv__GetRobotStatus_Request * data = NULL;

  if (size) {
    data = (turtlebot3_custom__srv__GetRobotStatus_Request *)allocator.zero_allocate(size, sizeof(turtlebot3_custom__srv__GetRobotStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlebot3_custom__srv__GetRobotStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlebot3_custom__srv__GetRobotStatus_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlebot3_custom__srv__GetRobotStatus_Request__Sequence__fini(turtlebot3_custom__srv__GetRobotStatus_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlebot3_custom__srv__GetRobotStatus_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlebot3_custom__srv__GetRobotStatus_Request__Sequence *
turtlebot3_custom__srv__GetRobotStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_custom__srv__GetRobotStatus_Request__Sequence * array = (turtlebot3_custom__srv__GetRobotStatus_Request__Sequence *)allocator.allocate(sizeof(turtlebot3_custom__srv__GetRobotStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlebot3_custom__srv__GetRobotStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlebot3_custom__srv__GetRobotStatus_Request__Sequence__destroy(turtlebot3_custom__srv__GetRobotStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlebot3_custom__srv__GetRobotStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlebot3_custom__srv__GetRobotStatus_Request__Sequence__are_equal(const turtlebot3_custom__srv__GetRobotStatus_Request__Sequence * lhs, const turtlebot3_custom__srv__GetRobotStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlebot3_custom__srv__GetRobotStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlebot3_custom__srv__GetRobotStatus_Request__Sequence__copy(
  const turtlebot3_custom__srv__GetRobotStatus_Request__Sequence * input,
  turtlebot3_custom__srv__GetRobotStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlebot3_custom__srv__GetRobotStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlebot3_custom__srv__GetRobotStatus_Request * data =
      (turtlebot3_custom__srv__GetRobotStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlebot3_custom__srv__GetRobotStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlebot3_custom__srv__GetRobotStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlebot3_custom__srv__GetRobotStatus_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `current_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `battery_info`
#include "sensor_msgs/msg/detail/battery_state__functions.h"

bool
turtlebot3_custom__srv__GetRobotStatus_Response__init(turtlebot3_custom__srv__GetRobotStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    turtlebot3_custom__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__Pose__init(&msg->current_pose)) {
    turtlebot3_custom__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  // battery_info
  if (!sensor_msgs__msg__BatteryState__init(&msg->battery_info)) {
    turtlebot3_custom__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtlebot3_custom__srv__GetRobotStatus_Response__fini(turtlebot3_custom__srv__GetRobotStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
  // current_pose
  geometry_msgs__msg__Pose__fini(&msg->current_pose);
  // battery_info
  sensor_msgs__msg__BatteryState__fini(&msg->battery_info);
}

bool
turtlebot3_custom__srv__GetRobotStatus_Response__are_equal(const turtlebot3_custom__srv__GetRobotStatus_Response * lhs, const turtlebot3_custom__srv__GetRobotStatus_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_message), &(rhs->status_message)))
  {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->current_pose), &(rhs->current_pose)))
  {
    return false;
  }
  // battery_info
  if (!sensor_msgs__msg__BatteryState__are_equal(
      &(lhs->battery_info), &(rhs->battery_info)))
  {
    return false;
  }
  return true;
}

bool
turtlebot3_custom__srv__GetRobotStatus_Response__copy(
  const turtlebot3_custom__srv__GetRobotStatus_Response * input,
  turtlebot3_custom__srv__GetRobotStatus_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // status_message
  if (!rosidl_runtime_c__String__copy(
      &(input->status_message), &(output->status_message)))
  {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->current_pose), &(output->current_pose)))
  {
    return false;
  }
  // battery_info
  if (!sensor_msgs__msg__BatteryState__copy(
      &(input->battery_info), &(output->battery_info)))
  {
    return false;
  }
  return true;
}

turtlebot3_custom__srv__GetRobotStatus_Response *
turtlebot3_custom__srv__GetRobotStatus_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_custom__srv__GetRobotStatus_Response * msg = (turtlebot3_custom__srv__GetRobotStatus_Response *)allocator.allocate(sizeof(turtlebot3_custom__srv__GetRobotStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlebot3_custom__srv__GetRobotStatus_Response));
  bool success = turtlebot3_custom__srv__GetRobotStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlebot3_custom__srv__GetRobotStatus_Response__destroy(turtlebot3_custom__srv__GetRobotStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlebot3_custom__srv__GetRobotStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlebot3_custom__srv__GetRobotStatus_Response__Sequence__init(turtlebot3_custom__srv__GetRobotStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_custom__srv__GetRobotStatus_Response * data = NULL;

  if (size) {
    data = (turtlebot3_custom__srv__GetRobotStatus_Response *)allocator.zero_allocate(size, sizeof(turtlebot3_custom__srv__GetRobotStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlebot3_custom__srv__GetRobotStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlebot3_custom__srv__GetRobotStatus_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlebot3_custom__srv__GetRobotStatus_Response__Sequence__fini(turtlebot3_custom__srv__GetRobotStatus_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlebot3_custom__srv__GetRobotStatus_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlebot3_custom__srv__GetRobotStatus_Response__Sequence *
turtlebot3_custom__srv__GetRobotStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlebot3_custom__srv__GetRobotStatus_Response__Sequence * array = (turtlebot3_custom__srv__GetRobotStatus_Response__Sequence *)allocator.allocate(sizeof(turtlebot3_custom__srv__GetRobotStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlebot3_custom__srv__GetRobotStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlebot3_custom__srv__GetRobotStatus_Response__Sequence__destroy(turtlebot3_custom__srv__GetRobotStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlebot3_custom__srv__GetRobotStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlebot3_custom__srv__GetRobotStatus_Response__Sequence__are_equal(const turtlebot3_custom__srv__GetRobotStatus_Response__Sequence * lhs, const turtlebot3_custom__srv__GetRobotStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlebot3_custom__srv__GetRobotStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlebot3_custom__srv__GetRobotStatus_Response__Sequence__copy(
  const turtlebot3_custom__srv__GetRobotStatus_Response__Sequence * input,
  turtlebot3_custom__srv__GetRobotStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlebot3_custom__srv__GetRobotStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlebot3_custom__srv__GetRobotStatus_Response * data =
      (turtlebot3_custom__srv__GetRobotStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlebot3_custom__srv__GetRobotStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlebot3_custom__srv__GetRobotStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlebot3_custom__srv__GetRobotStatus_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
