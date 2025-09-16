// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yahboom_rosmaster_msgs:action/TimedRotation.idl
// generated code does not contain a copyright notice
#include "yahboom_rosmaster_msgs/action/detail/timed_rotation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yahboom_rosmaster_msgs__action__TimedRotation_Goal__init(yahboom_rosmaster_msgs__action__TimedRotation_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // angular_velocity
  // duration
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Goal__fini(yahboom_rosmaster_msgs__action__TimedRotation_Goal * msg)
{
  if (!msg) {
    return;
  }
  // angular_velocity
  // duration
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Goal__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_Goal * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Goal__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_Goal * input,
  yahboom_rosmaster_msgs__action__TimedRotation_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  // duration
  output->duration = input->duration;
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_Goal *
yahboom_rosmaster_msgs__action__TimedRotation_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Goal * msg = (yahboom_rosmaster_msgs__action__TimedRotation_Goal *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Goal));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Goal__destroy(yahboom_rosmaster_msgs__action__TimedRotation_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Goal * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_Goal *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_Goal__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_Goal__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_Goal * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_Result__init(yahboom_rosmaster_msgs__action__TimedRotation_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // actual_duration
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Result__fini(yahboom_rosmaster_msgs__action__TimedRotation_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // actual_duration
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Result__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_Result * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // actual_duration
  if (lhs->actual_duration != rhs->actual_duration) {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Result__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_Result * input,
  yahboom_rosmaster_msgs__action__TimedRotation_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // actual_duration
  output->actual_duration = input->actual_duration;
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_Result *
yahboom_rosmaster_msgs__action__TimedRotation_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Result * msg = (yahboom_rosmaster_msgs__action__TimedRotation_Result *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Result));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Result__destroy(yahboom_rosmaster_msgs__action__TimedRotation_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Result * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_Result *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_Result__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_Result__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_Result * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__init(yahboom_rosmaster_msgs__action__TimedRotation_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // elapsed_time
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    yahboom_rosmaster_msgs__action__TimedRotation_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__fini(yahboom_rosmaster_msgs__action__TimedRotation_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // elapsed_time
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_Feedback * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // elapsed_time
  if (lhs->elapsed_time != rhs->elapsed_time) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_Feedback * input,
  yahboom_rosmaster_msgs__action__TimedRotation_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // elapsed_time
  output->elapsed_time = input->elapsed_time;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_Feedback *
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Feedback * msg = (yahboom_rosmaster_msgs__action__TimedRotation_Feedback *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Feedback));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__destroy(yahboom_rosmaster_msgs__action__TimedRotation_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Feedback * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_Feedback *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_Feedback__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_Feedback__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_Feedback * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "yahboom_rosmaster_msgs/action/detail/timed_rotation__functions.h"

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__init(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Goal__init(&msg->goal)) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__fini(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  yahboom_rosmaster_msgs__action__TimedRotation_Goal__fini(&msg->goal);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * input,
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request *
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * msg = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__destroy(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__init(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__fini(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * input,
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response *
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * msg = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__destroy(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__copy(
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
// #include "yahboom_rosmaster_msgs/action/detail/timed_rotation__functions.h"

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__init(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__fini(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * rhs)
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
  if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * input,
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * output)
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
  if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event *
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * msg = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__destroy(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__init(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__fini(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * input,
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request *
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * msg = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__destroy(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "yahboom_rosmaster_msgs/action/detail/timed_rotation__functions.h"

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__init(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Result__init(&msg->result)) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__fini(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  yahboom_rosmaster_msgs__action__TimedRotation_Result__fini(&msg->result);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * input,
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response *
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * msg = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__destroy(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "yahboom_rosmaster_msgs/action/detail/timed_rotation__functions.h"

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__init(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__init(&msg->request, 0)) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__init(&msg->response, 0)) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__fini(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__fini(&msg->request);
  // response
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__fini(&msg->response);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * rhs)
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
  if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * input,
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * output)
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
  if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event *
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * msg = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__destroy(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "yahboom_rosmaster_msgs/action/detail/timed_rotation__functions.h"

bool
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__init(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Feedback__init(&msg->feedback)) {
    yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__fini(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  yahboom_rosmaster_msgs__action__TimedRotation_Feedback__fini(&msg->feedback);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * input,
  yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!yahboom_rosmaster_msgs__action__TimedRotation_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage *
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * msg = (yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage));
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__destroy(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence__init(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * data = NULL;

  if (size) {
    data = (yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage *)allocator.zero_allocate(size, sizeof(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__fini(&data[i - 1]);
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
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence__fini(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence * array)
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
      yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__fini(&array->data[i]);
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

yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence *
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence * array = (yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence *)allocator.allocate(sizeof(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence__destroy(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence__are_equal(const yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence * lhs, const yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence__copy(
  const yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence * input,
  yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage * data =
      (yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_rosmaster_msgs__action__TimedRotation_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
