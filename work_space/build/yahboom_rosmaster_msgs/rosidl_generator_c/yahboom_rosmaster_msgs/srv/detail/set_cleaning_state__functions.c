// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yahboom_rosmaster_msgs:srv/SetCleaningState.idl
// generated code does not contain a copyright notice
#include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__init(yahboom_rosmaster_msgs__srv__SetCleaningState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // desired_cleaning_state
  return true;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__fini(yahboom_rosmaster_msgs__srv__SetCleaningState_Request * msg)
{
  if (!msg) {
    return;
  }
  // desired_cleaning_state
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__are_equal(const yahboom_rosmaster_msgs__srv__SetCleaningState_Request * lhs, const yahboom_rosmaster_msgs__srv__SetCleaningState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // desired_cleaning_state
  if (lhs->desired_cleaning_state != rhs->desired_cleaning_state) {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__copy(
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Request * input,
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // desired_cleaning_state
  output->desired_cleaning_state = input->desired_cleaning_state;
  return true;
}

yahboom_rosmaster_msgs__srv__SetCleaningState_Request *
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request * msg = (yahboom_rosmaster_msgs__srv__SetCleaningState_Request *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Request));
  bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__destroy(yahboom_rosmaster_msgs__srv__SetCleaningState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__init(yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__srv__SetCleaningState_Request *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__srv__SetCleaningState_Request__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__fini(yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * array)
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
      yahboom_rosmaster_msgs__srv__SetCleaningState_Request__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence *
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * array = (yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__destroy(yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__are_equal(const yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * lhs, const yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__copy(
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * input,
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__srv__SetCleaningState_Request * data =
      (yahboom_rosmaster_msgs__srv__SetCleaningState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__srv__SetCleaningState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__init(yahboom_rosmaster_msgs__srv__SetCleaningState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Response__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__fini(yahboom_rosmaster_msgs__srv__SetCleaningState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__are_equal(const yahboom_rosmaster_msgs__srv__SetCleaningState_Response * lhs, const yahboom_rosmaster_msgs__srv__SetCleaningState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__copy(
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Response * input,
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__srv__SetCleaningState_Response *
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response * msg = (yahboom_rosmaster_msgs__srv__SetCleaningState_Response *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Response));
  bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__destroy(yahboom_rosmaster_msgs__srv__SetCleaningState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__init(yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__srv__SetCleaningState_Response *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__srv__SetCleaningState_Response__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__fini(yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * array)
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
      yahboom_rosmaster_msgs__srv__SetCleaningState_Response__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence *
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * array = (yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__destroy(yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__are_equal(const yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * lhs, const yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__copy(
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * input,
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__srv__SetCleaningState_Response * data =
      (yahboom_rosmaster_msgs__srv__SetCleaningState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__srv__SetCleaningState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "yahboom_rosmaster_msgs/srv/detail/set_cleaning_state__functions.h"

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__init(yahboom_rosmaster_msgs__srv__SetCleaningState_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(msg);
    return false;
  }
  // request
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__init(&msg->request, 0)) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(msg);
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__init(&msg->response, 0)) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(yahboom_rosmaster_msgs__srv__SetCleaningState_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__fini(&msg->request);
  // response
  yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__fini(&msg->response);
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__are_equal(const yahboom_rosmaster_msgs__srv__SetCleaningState_Event * lhs, const yahboom_rosmaster_msgs__srv__SetCleaningState_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__copy(
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Event * input,
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__srv__SetCleaningState_Event *
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event * msg = (yahboom_rosmaster_msgs__srv__SetCleaningState_Event *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event));
  bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__destroy(yahboom_rosmaster_msgs__srv__SetCleaningState_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence__init(yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__srv__SetCleaningState_Event *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence__fini(yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence * array)
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
      yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence *
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence * array = (yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence__destroy(yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence__are_equal(const yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence * lhs, const yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence__copy(
  const yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence * input,
  yahboom_rosmaster_msgs__srv__SetCleaningState_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__srv__SetCleaningState_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__srv__SetCleaningState_Event * data =
      (yahboom_rosmaster_msgs__srv__SetCleaningState_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__srv__SetCleaningState_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__srv__SetCleaningState_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
