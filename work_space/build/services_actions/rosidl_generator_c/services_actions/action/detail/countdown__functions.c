// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from services_actions:action/Countdown.idl
// generated code does not contain a copyright notice
#include "services_actions/action/detail/countdown__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
services_actions__action__Countdown_Goal__init(services_actions__action__Countdown_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // start
  return true;
}

void
services_actions__action__Countdown_Goal__fini(services_actions__action__Countdown_Goal * msg)
{
  if (!msg) {
    return;
  }
  // start
}

bool
services_actions__action__Countdown_Goal__are_equal(const services_actions__action__Countdown_Goal * lhs, const services_actions__action__Countdown_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (lhs->start != rhs->start) {
    return false;
  }
  return true;
}

bool
services_actions__action__Countdown_Goal__copy(
  const services_actions__action__Countdown_Goal * input,
  services_actions__action__Countdown_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  output->start = input->start;
  return true;
}

services_actions__action__Countdown_Goal *
services_actions__action__Countdown_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Goal * msg = (services_actions__action__Countdown_Goal *)allocator.allocate(sizeof(services_actions__action__Countdown_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__action__Countdown_Goal));
  bool success = services_actions__action__Countdown_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__action__Countdown_Goal__destroy(services_actions__action__Countdown_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__action__Countdown_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__action__Countdown_Goal__Sequence__init(services_actions__action__Countdown_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Goal * data = NULL;

  if (size) {
    data = (services_actions__action__Countdown_Goal *)allocator.zero_allocate(size, sizeof(services_actions__action__Countdown_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__action__Countdown_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__action__Countdown_Goal__fini(&data[i - 1]);
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
services_actions__action__Countdown_Goal__Sequence__fini(services_actions__action__Countdown_Goal__Sequence * array)
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
      services_actions__action__Countdown_Goal__fini(&array->data[i]);
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

services_actions__action__Countdown_Goal__Sequence *
services_actions__action__Countdown_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Goal__Sequence * array = (services_actions__action__Countdown_Goal__Sequence *)allocator.allocate(sizeof(services_actions__action__Countdown_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__action__Countdown_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__action__Countdown_Goal__Sequence__destroy(services_actions__action__Countdown_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__action__Countdown_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__action__Countdown_Goal__Sequence__are_equal(const services_actions__action__Countdown_Goal__Sequence * lhs, const services_actions__action__Countdown_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__action__Countdown_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__action__Countdown_Goal__Sequence__copy(
  const services_actions__action__Countdown_Goal__Sequence * input,
  services_actions__action__Countdown_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__action__Countdown_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__action__Countdown_Goal * data =
      (services_actions__action__Countdown_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__action__Countdown_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__action__Countdown_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__action__Countdown_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
services_actions__action__Countdown_Result__init(services_actions__action__Countdown_Result * msg)
{
  if (!msg) {
    return false;
  }
  // final
  return true;
}

void
services_actions__action__Countdown_Result__fini(services_actions__action__Countdown_Result * msg)
{
  if (!msg) {
    return;
  }
  // final
}

bool
services_actions__action__Countdown_Result__are_equal(const services_actions__action__Countdown_Result * lhs, const services_actions__action__Countdown_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // final
  if (lhs->final != rhs->final) {
    return false;
  }
  return true;
}

bool
services_actions__action__Countdown_Result__copy(
  const services_actions__action__Countdown_Result * input,
  services_actions__action__Countdown_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // final
  output->final = input->final;
  return true;
}

services_actions__action__Countdown_Result *
services_actions__action__Countdown_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Result * msg = (services_actions__action__Countdown_Result *)allocator.allocate(sizeof(services_actions__action__Countdown_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__action__Countdown_Result));
  bool success = services_actions__action__Countdown_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__action__Countdown_Result__destroy(services_actions__action__Countdown_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__action__Countdown_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__action__Countdown_Result__Sequence__init(services_actions__action__Countdown_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Result * data = NULL;

  if (size) {
    data = (services_actions__action__Countdown_Result *)allocator.zero_allocate(size, sizeof(services_actions__action__Countdown_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__action__Countdown_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__action__Countdown_Result__fini(&data[i - 1]);
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
services_actions__action__Countdown_Result__Sequence__fini(services_actions__action__Countdown_Result__Sequence * array)
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
      services_actions__action__Countdown_Result__fini(&array->data[i]);
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

services_actions__action__Countdown_Result__Sequence *
services_actions__action__Countdown_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Result__Sequence * array = (services_actions__action__Countdown_Result__Sequence *)allocator.allocate(sizeof(services_actions__action__Countdown_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__action__Countdown_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__action__Countdown_Result__Sequence__destroy(services_actions__action__Countdown_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__action__Countdown_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__action__Countdown_Result__Sequence__are_equal(const services_actions__action__Countdown_Result__Sequence * lhs, const services_actions__action__Countdown_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__action__Countdown_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__action__Countdown_Result__Sequence__copy(
  const services_actions__action__Countdown_Result__Sequence * input,
  services_actions__action__Countdown_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__action__Countdown_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__action__Countdown_Result * data =
      (services_actions__action__Countdown_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__action__Countdown_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__action__Countdown_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__action__Countdown_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
services_actions__action__Countdown_Feedback__init(services_actions__action__Countdown_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current
  return true;
}

void
services_actions__action__Countdown_Feedback__fini(services_actions__action__Countdown_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current
}

bool
services_actions__action__Countdown_Feedback__are_equal(const services_actions__action__Countdown_Feedback * lhs, const services_actions__action__Countdown_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  return true;
}

bool
services_actions__action__Countdown_Feedback__copy(
  const services_actions__action__Countdown_Feedback * input,
  services_actions__action__Countdown_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current
  output->current = input->current;
  return true;
}

services_actions__action__Countdown_Feedback *
services_actions__action__Countdown_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Feedback * msg = (services_actions__action__Countdown_Feedback *)allocator.allocate(sizeof(services_actions__action__Countdown_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__action__Countdown_Feedback));
  bool success = services_actions__action__Countdown_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__action__Countdown_Feedback__destroy(services_actions__action__Countdown_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__action__Countdown_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__action__Countdown_Feedback__Sequence__init(services_actions__action__Countdown_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Feedback * data = NULL;

  if (size) {
    data = (services_actions__action__Countdown_Feedback *)allocator.zero_allocate(size, sizeof(services_actions__action__Countdown_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__action__Countdown_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__action__Countdown_Feedback__fini(&data[i - 1]);
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
services_actions__action__Countdown_Feedback__Sequence__fini(services_actions__action__Countdown_Feedback__Sequence * array)
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
      services_actions__action__Countdown_Feedback__fini(&array->data[i]);
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

services_actions__action__Countdown_Feedback__Sequence *
services_actions__action__Countdown_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_Feedback__Sequence * array = (services_actions__action__Countdown_Feedback__Sequence *)allocator.allocate(sizeof(services_actions__action__Countdown_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__action__Countdown_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__action__Countdown_Feedback__Sequence__destroy(services_actions__action__Countdown_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__action__Countdown_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__action__Countdown_Feedback__Sequence__are_equal(const services_actions__action__Countdown_Feedback__Sequence * lhs, const services_actions__action__Countdown_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__action__Countdown_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__action__Countdown_Feedback__Sequence__copy(
  const services_actions__action__Countdown_Feedback__Sequence * input,
  services_actions__action__Countdown_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__action__Countdown_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__action__Countdown_Feedback * data =
      (services_actions__action__Countdown_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__action__Countdown_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__action__Countdown_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__action__Countdown_Feedback__copy(
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
// #include "services_actions/action/detail/countdown__functions.h"

bool
services_actions__action__Countdown_SendGoal_Request__init(services_actions__action__Countdown_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    services_actions__action__Countdown_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!services_actions__action__Countdown_Goal__init(&msg->goal)) {
    services_actions__action__Countdown_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
services_actions__action__Countdown_SendGoal_Request__fini(services_actions__action__Countdown_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  services_actions__action__Countdown_Goal__fini(&msg->goal);
}

bool
services_actions__action__Countdown_SendGoal_Request__are_equal(const services_actions__action__Countdown_SendGoal_Request * lhs, const services_actions__action__Countdown_SendGoal_Request * rhs)
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
  if (!services_actions__action__Countdown_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
services_actions__action__Countdown_SendGoal_Request__copy(
  const services_actions__action__Countdown_SendGoal_Request * input,
  services_actions__action__Countdown_SendGoal_Request * output)
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
  if (!services_actions__action__Countdown_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

services_actions__action__Countdown_SendGoal_Request *
services_actions__action__Countdown_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_SendGoal_Request * msg = (services_actions__action__Countdown_SendGoal_Request *)allocator.allocate(sizeof(services_actions__action__Countdown_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__action__Countdown_SendGoal_Request));
  bool success = services_actions__action__Countdown_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__action__Countdown_SendGoal_Request__destroy(services_actions__action__Countdown_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__action__Countdown_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__action__Countdown_SendGoal_Request__Sequence__init(services_actions__action__Countdown_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_SendGoal_Request * data = NULL;

  if (size) {
    data = (services_actions__action__Countdown_SendGoal_Request *)allocator.zero_allocate(size, sizeof(services_actions__action__Countdown_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__action__Countdown_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__action__Countdown_SendGoal_Request__fini(&data[i - 1]);
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
services_actions__action__Countdown_SendGoal_Request__Sequence__fini(services_actions__action__Countdown_SendGoal_Request__Sequence * array)
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
      services_actions__action__Countdown_SendGoal_Request__fini(&array->data[i]);
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

services_actions__action__Countdown_SendGoal_Request__Sequence *
services_actions__action__Countdown_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_SendGoal_Request__Sequence * array = (services_actions__action__Countdown_SendGoal_Request__Sequence *)allocator.allocate(sizeof(services_actions__action__Countdown_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__action__Countdown_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__action__Countdown_SendGoal_Request__Sequence__destroy(services_actions__action__Countdown_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__action__Countdown_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__action__Countdown_SendGoal_Request__Sequence__are_equal(const services_actions__action__Countdown_SendGoal_Request__Sequence * lhs, const services_actions__action__Countdown_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__action__Countdown_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__action__Countdown_SendGoal_Request__Sequence__copy(
  const services_actions__action__Countdown_SendGoal_Request__Sequence * input,
  services_actions__action__Countdown_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__action__Countdown_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__action__Countdown_SendGoal_Request * data =
      (services_actions__action__Countdown_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__action__Countdown_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__action__Countdown_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__action__Countdown_SendGoal_Request__copy(
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
services_actions__action__Countdown_SendGoal_Response__init(services_actions__action__Countdown_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    services_actions__action__Countdown_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
services_actions__action__Countdown_SendGoal_Response__fini(services_actions__action__Countdown_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
services_actions__action__Countdown_SendGoal_Response__are_equal(const services_actions__action__Countdown_SendGoal_Response * lhs, const services_actions__action__Countdown_SendGoal_Response * rhs)
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
services_actions__action__Countdown_SendGoal_Response__copy(
  const services_actions__action__Countdown_SendGoal_Response * input,
  services_actions__action__Countdown_SendGoal_Response * output)
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

services_actions__action__Countdown_SendGoal_Response *
services_actions__action__Countdown_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_SendGoal_Response * msg = (services_actions__action__Countdown_SendGoal_Response *)allocator.allocate(sizeof(services_actions__action__Countdown_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__action__Countdown_SendGoal_Response));
  bool success = services_actions__action__Countdown_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__action__Countdown_SendGoal_Response__destroy(services_actions__action__Countdown_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__action__Countdown_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__action__Countdown_SendGoal_Response__Sequence__init(services_actions__action__Countdown_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_SendGoal_Response * data = NULL;

  if (size) {
    data = (services_actions__action__Countdown_SendGoal_Response *)allocator.zero_allocate(size, sizeof(services_actions__action__Countdown_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__action__Countdown_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__action__Countdown_SendGoal_Response__fini(&data[i - 1]);
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
services_actions__action__Countdown_SendGoal_Response__Sequence__fini(services_actions__action__Countdown_SendGoal_Response__Sequence * array)
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
      services_actions__action__Countdown_SendGoal_Response__fini(&array->data[i]);
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

services_actions__action__Countdown_SendGoal_Response__Sequence *
services_actions__action__Countdown_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_SendGoal_Response__Sequence * array = (services_actions__action__Countdown_SendGoal_Response__Sequence *)allocator.allocate(sizeof(services_actions__action__Countdown_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__action__Countdown_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__action__Countdown_SendGoal_Response__Sequence__destroy(services_actions__action__Countdown_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__action__Countdown_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__action__Countdown_SendGoal_Response__Sequence__are_equal(const services_actions__action__Countdown_SendGoal_Response__Sequence * lhs, const services_actions__action__Countdown_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__action__Countdown_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__action__Countdown_SendGoal_Response__Sequence__copy(
  const services_actions__action__Countdown_SendGoal_Response__Sequence * input,
  services_actions__action__Countdown_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__action__Countdown_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__action__Countdown_SendGoal_Response * data =
      (services_actions__action__Countdown_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__action__Countdown_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__action__Countdown_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__action__Countdown_SendGoal_Response__copy(
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
services_actions__action__Countdown_GetResult_Request__init(services_actions__action__Countdown_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    services_actions__action__Countdown_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
services_actions__action__Countdown_GetResult_Request__fini(services_actions__action__Countdown_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
services_actions__action__Countdown_GetResult_Request__are_equal(const services_actions__action__Countdown_GetResult_Request * lhs, const services_actions__action__Countdown_GetResult_Request * rhs)
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
services_actions__action__Countdown_GetResult_Request__copy(
  const services_actions__action__Countdown_GetResult_Request * input,
  services_actions__action__Countdown_GetResult_Request * output)
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

services_actions__action__Countdown_GetResult_Request *
services_actions__action__Countdown_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_GetResult_Request * msg = (services_actions__action__Countdown_GetResult_Request *)allocator.allocate(sizeof(services_actions__action__Countdown_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__action__Countdown_GetResult_Request));
  bool success = services_actions__action__Countdown_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__action__Countdown_GetResult_Request__destroy(services_actions__action__Countdown_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__action__Countdown_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__action__Countdown_GetResult_Request__Sequence__init(services_actions__action__Countdown_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_GetResult_Request * data = NULL;

  if (size) {
    data = (services_actions__action__Countdown_GetResult_Request *)allocator.zero_allocate(size, sizeof(services_actions__action__Countdown_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__action__Countdown_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__action__Countdown_GetResult_Request__fini(&data[i - 1]);
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
services_actions__action__Countdown_GetResult_Request__Sequence__fini(services_actions__action__Countdown_GetResult_Request__Sequence * array)
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
      services_actions__action__Countdown_GetResult_Request__fini(&array->data[i]);
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

services_actions__action__Countdown_GetResult_Request__Sequence *
services_actions__action__Countdown_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_GetResult_Request__Sequence * array = (services_actions__action__Countdown_GetResult_Request__Sequence *)allocator.allocate(sizeof(services_actions__action__Countdown_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__action__Countdown_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__action__Countdown_GetResult_Request__Sequence__destroy(services_actions__action__Countdown_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__action__Countdown_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__action__Countdown_GetResult_Request__Sequence__are_equal(const services_actions__action__Countdown_GetResult_Request__Sequence * lhs, const services_actions__action__Countdown_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__action__Countdown_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__action__Countdown_GetResult_Request__Sequence__copy(
  const services_actions__action__Countdown_GetResult_Request__Sequence * input,
  services_actions__action__Countdown_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__action__Countdown_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__action__Countdown_GetResult_Request * data =
      (services_actions__action__Countdown_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__action__Countdown_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__action__Countdown_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__action__Countdown_GetResult_Request__copy(
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
// #include "services_actions/action/detail/countdown__functions.h"

bool
services_actions__action__Countdown_GetResult_Response__init(services_actions__action__Countdown_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!services_actions__action__Countdown_Result__init(&msg->result)) {
    services_actions__action__Countdown_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
services_actions__action__Countdown_GetResult_Response__fini(services_actions__action__Countdown_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  services_actions__action__Countdown_Result__fini(&msg->result);
}

bool
services_actions__action__Countdown_GetResult_Response__are_equal(const services_actions__action__Countdown_GetResult_Response * lhs, const services_actions__action__Countdown_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!services_actions__action__Countdown_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
services_actions__action__Countdown_GetResult_Response__copy(
  const services_actions__action__Countdown_GetResult_Response * input,
  services_actions__action__Countdown_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!services_actions__action__Countdown_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

services_actions__action__Countdown_GetResult_Response *
services_actions__action__Countdown_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_GetResult_Response * msg = (services_actions__action__Countdown_GetResult_Response *)allocator.allocate(sizeof(services_actions__action__Countdown_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__action__Countdown_GetResult_Response));
  bool success = services_actions__action__Countdown_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__action__Countdown_GetResult_Response__destroy(services_actions__action__Countdown_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__action__Countdown_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__action__Countdown_GetResult_Response__Sequence__init(services_actions__action__Countdown_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_GetResult_Response * data = NULL;

  if (size) {
    data = (services_actions__action__Countdown_GetResult_Response *)allocator.zero_allocate(size, sizeof(services_actions__action__Countdown_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__action__Countdown_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__action__Countdown_GetResult_Response__fini(&data[i - 1]);
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
services_actions__action__Countdown_GetResult_Response__Sequence__fini(services_actions__action__Countdown_GetResult_Response__Sequence * array)
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
      services_actions__action__Countdown_GetResult_Response__fini(&array->data[i]);
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

services_actions__action__Countdown_GetResult_Response__Sequence *
services_actions__action__Countdown_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_GetResult_Response__Sequence * array = (services_actions__action__Countdown_GetResult_Response__Sequence *)allocator.allocate(sizeof(services_actions__action__Countdown_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__action__Countdown_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__action__Countdown_GetResult_Response__Sequence__destroy(services_actions__action__Countdown_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__action__Countdown_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__action__Countdown_GetResult_Response__Sequence__are_equal(const services_actions__action__Countdown_GetResult_Response__Sequence * lhs, const services_actions__action__Countdown_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__action__Countdown_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__action__Countdown_GetResult_Response__Sequence__copy(
  const services_actions__action__Countdown_GetResult_Response__Sequence * input,
  services_actions__action__Countdown_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__action__Countdown_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__action__Countdown_GetResult_Response * data =
      (services_actions__action__Countdown_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__action__Countdown_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__action__Countdown_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__action__Countdown_GetResult_Response__copy(
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
// #include "services_actions/action/detail/countdown__functions.h"

bool
services_actions__action__Countdown_FeedbackMessage__init(services_actions__action__Countdown_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    services_actions__action__Countdown_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!services_actions__action__Countdown_Feedback__init(&msg->feedback)) {
    services_actions__action__Countdown_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
services_actions__action__Countdown_FeedbackMessage__fini(services_actions__action__Countdown_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  services_actions__action__Countdown_Feedback__fini(&msg->feedback);
}

bool
services_actions__action__Countdown_FeedbackMessage__are_equal(const services_actions__action__Countdown_FeedbackMessage * lhs, const services_actions__action__Countdown_FeedbackMessage * rhs)
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
  if (!services_actions__action__Countdown_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
services_actions__action__Countdown_FeedbackMessage__copy(
  const services_actions__action__Countdown_FeedbackMessage * input,
  services_actions__action__Countdown_FeedbackMessage * output)
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
  if (!services_actions__action__Countdown_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

services_actions__action__Countdown_FeedbackMessage *
services_actions__action__Countdown_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_FeedbackMessage * msg = (services_actions__action__Countdown_FeedbackMessage *)allocator.allocate(sizeof(services_actions__action__Countdown_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__action__Countdown_FeedbackMessage));
  bool success = services_actions__action__Countdown_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__action__Countdown_FeedbackMessage__destroy(services_actions__action__Countdown_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__action__Countdown_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__action__Countdown_FeedbackMessage__Sequence__init(services_actions__action__Countdown_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_FeedbackMessage * data = NULL;

  if (size) {
    data = (services_actions__action__Countdown_FeedbackMessage *)allocator.zero_allocate(size, sizeof(services_actions__action__Countdown_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__action__Countdown_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__action__Countdown_FeedbackMessage__fini(&data[i - 1]);
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
services_actions__action__Countdown_FeedbackMessage__Sequence__fini(services_actions__action__Countdown_FeedbackMessage__Sequence * array)
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
      services_actions__action__Countdown_FeedbackMessage__fini(&array->data[i]);
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

services_actions__action__Countdown_FeedbackMessage__Sequence *
services_actions__action__Countdown_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__action__Countdown_FeedbackMessage__Sequence * array = (services_actions__action__Countdown_FeedbackMessage__Sequence *)allocator.allocate(sizeof(services_actions__action__Countdown_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__action__Countdown_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__action__Countdown_FeedbackMessage__Sequence__destroy(services_actions__action__Countdown_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__action__Countdown_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__action__Countdown_FeedbackMessage__Sequence__are_equal(const services_actions__action__Countdown_FeedbackMessage__Sequence * lhs, const services_actions__action__Countdown_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__action__Countdown_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__action__Countdown_FeedbackMessage__Sequence__copy(
  const services_actions__action__Countdown_FeedbackMessage__Sequence * input,
  services_actions__action__Countdown_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__action__Countdown_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__action__Countdown_FeedbackMessage * data =
      (services_actions__action__Countdown_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__action__Countdown_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__action__Countdown_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__action__Countdown_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
