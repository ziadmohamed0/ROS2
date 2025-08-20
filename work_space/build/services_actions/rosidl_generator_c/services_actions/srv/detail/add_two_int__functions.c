// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from services_actions:srv/AddTwoInt.idl
// generated code does not contain a copyright notice
#include "services_actions/srv/detail/add_two_int__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
services_actions__srv__AddTwoInt_Request__init(services_actions__srv__AddTwoInt_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
services_actions__srv__AddTwoInt_Request__fini(services_actions__srv__AddTwoInt_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
services_actions__srv__AddTwoInt_Request__are_equal(const services_actions__srv__AddTwoInt_Request * lhs, const services_actions__srv__AddTwoInt_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
services_actions__srv__AddTwoInt_Request__copy(
  const services_actions__srv__AddTwoInt_Request * input,
  services_actions__srv__AddTwoInt_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

services_actions__srv__AddTwoInt_Request *
services_actions__srv__AddTwoInt_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__srv__AddTwoInt_Request * msg = (services_actions__srv__AddTwoInt_Request *)allocator.allocate(sizeof(services_actions__srv__AddTwoInt_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__srv__AddTwoInt_Request));
  bool success = services_actions__srv__AddTwoInt_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__srv__AddTwoInt_Request__destroy(services_actions__srv__AddTwoInt_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__srv__AddTwoInt_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__srv__AddTwoInt_Request__Sequence__init(services_actions__srv__AddTwoInt_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__srv__AddTwoInt_Request * data = NULL;

  if (size) {
    data = (services_actions__srv__AddTwoInt_Request *)allocator.zero_allocate(size, sizeof(services_actions__srv__AddTwoInt_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__srv__AddTwoInt_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__srv__AddTwoInt_Request__fini(&data[i - 1]);
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
services_actions__srv__AddTwoInt_Request__Sequence__fini(services_actions__srv__AddTwoInt_Request__Sequence * array)
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
      services_actions__srv__AddTwoInt_Request__fini(&array->data[i]);
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

services_actions__srv__AddTwoInt_Request__Sequence *
services_actions__srv__AddTwoInt_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__srv__AddTwoInt_Request__Sequence * array = (services_actions__srv__AddTwoInt_Request__Sequence *)allocator.allocate(sizeof(services_actions__srv__AddTwoInt_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__srv__AddTwoInt_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__srv__AddTwoInt_Request__Sequence__destroy(services_actions__srv__AddTwoInt_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__srv__AddTwoInt_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__srv__AddTwoInt_Request__Sequence__are_equal(const services_actions__srv__AddTwoInt_Request__Sequence * lhs, const services_actions__srv__AddTwoInt_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__srv__AddTwoInt_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__srv__AddTwoInt_Request__Sequence__copy(
  const services_actions__srv__AddTwoInt_Request__Sequence * input,
  services_actions__srv__AddTwoInt_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__srv__AddTwoInt_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__srv__AddTwoInt_Request * data =
      (services_actions__srv__AddTwoInt_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__srv__AddTwoInt_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__srv__AddTwoInt_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__srv__AddTwoInt_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
services_actions__srv__AddTwoInt_Response__init(services_actions__srv__AddTwoInt_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
services_actions__srv__AddTwoInt_Response__fini(services_actions__srv__AddTwoInt_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
services_actions__srv__AddTwoInt_Response__are_equal(const services_actions__srv__AddTwoInt_Response * lhs, const services_actions__srv__AddTwoInt_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
services_actions__srv__AddTwoInt_Response__copy(
  const services_actions__srv__AddTwoInt_Response * input,
  services_actions__srv__AddTwoInt_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

services_actions__srv__AddTwoInt_Response *
services_actions__srv__AddTwoInt_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__srv__AddTwoInt_Response * msg = (services_actions__srv__AddTwoInt_Response *)allocator.allocate(sizeof(services_actions__srv__AddTwoInt_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(services_actions__srv__AddTwoInt_Response));
  bool success = services_actions__srv__AddTwoInt_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
services_actions__srv__AddTwoInt_Response__destroy(services_actions__srv__AddTwoInt_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    services_actions__srv__AddTwoInt_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
services_actions__srv__AddTwoInt_Response__Sequence__init(services_actions__srv__AddTwoInt_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__srv__AddTwoInt_Response * data = NULL;

  if (size) {
    data = (services_actions__srv__AddTwoInt_Response *)allocator.zero_allocate(size, sizeof(services_actions__srv__AddTwoInt_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = services_actions__srv__AddTwoInt_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        services_actions__srv__AddTwoInt_Response__fini(&data[i - 1]);
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
services_actions__srv__AddTwoInt_Response__Sequence__fini(services_actions__srv__AddTwoInt_Response__Sequence * array)
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
      services_actions__srv__AddTwoInt_Response__fini(&array->data[i]);
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

services_actions__srv__AddTwoInt_Response__Sequence *
services_actions__srv__AddTwoInt_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  services_actions__srv__AddTwoInt_Response__Sequence * array = (services_actions__srv__AddTwoInt_Response__Sequence *)allocator.allocate(sizeof(services_actions__srv__AddTwoInt_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = services_actions__srv__AddTwoInt_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
services_actions__srv__AddTwoInt_Response__Sequence__destroy(services_actions__srv__AddTwoInt_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    services_actions__srv__AddTwoInt_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
services_actions__srv__AddTwoInt_Response__Sequence__are_equal(const services_actions__srv__AddTwoInt_Response__Sequence * lhs, const services_actions__srv__AddTwoInt_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!services_actions__srv__AddTwoInt_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
services_actions__srv__AddTwoInt_Response__Sequence__copy(
  const services_actions__srv__AddTwoInt_Response__Sequence * input,
  services_actions__srv__AddTwoInt_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(services_actions__srv__AddTwoInt_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    services_actions__srv__AddTwoInt_Response * data =
      (services_actions__srv__AddTwoInt_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!services_actions__srv__AddTwoInt_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          services_actions__srv__AddTwoInt_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!services_actions__srv__AddTwoInt_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
