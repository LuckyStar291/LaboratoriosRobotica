// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ucb_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice
#include "ucb_interfaces/srv/detail/rot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ucb_interfaces__srv__Rot_Request__init(ucb_interfaces__srv__Rot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  // px
  // py
  // pz
  return true;
}

void
ucb_interfaces__srv__Rot_Request__fini(ucb_interfaces__srv__Rot_Request * msg)
{
  if (!msg) {
    return;
  }
  // angle
  // px
  // py
  // pz
}

bool
ucb_interfaces__srv__Rot_Request__are_equal(const ucb_interfaces__srv__Rot_Request * lhs, const ucb_interfaces__srv__Rot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // px
  if (lhs->px != rhs->px) {
    return false;
  }
  // py
  if (lhs->py != rhs->py) {
    return false;
  }
  // pz
  if (lhs->pz != rhs->pz) {
    return false;
  }
  return true;
}

bool
ucb_interfaces__srv__Rot_Request__copy(
  const ucb_interfaces__srv__Rot_Request * input,
  ucb_interfaces__srv__Rot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  // px
  output->px = input->px;
  // py
  output->py = input->py;
  // pz
  output->pz = input->pz;
  return true;
}

ucb_interfaces__srv__Rot_Request *
ucb_interfaces__srv__Rot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interfaces__srv__Rot_Request * msg = (ucb_interfaces__srv__Rot_Request *)allocator.allocate(sizeof(ucb_interfaces__srv__Rot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ucb_interfaces__srv__Rot_Request));
  bool success = ucb_interfaces__srv__Rot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ucb_interfaces__srv__Rot_Request__destroy(ucb_interfaces__srv__Rot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ucb_interfaces__srv__Rot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ucb_interfaces__srv__Rot_Request__Sequence__init(ucb_interfaces__srv__Rot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interfaces__srv__Rot_Request * data = NULL;

  if (size) {
    data = (ucb_interfaces__srv__Rot_Request *)allocator.zero_allocate(size, sizeof(ucb_interfaces__srv__Rot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ucb_interfaces__srv__Rot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ucb_interfaces__srv__Rot_Request__fini(&data[i - 1]);
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
ucb_interfaces__srv__Rot_Request__Sequence__fini(ucb_interfaces__srv__Rot_Request__Sequence * array)
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
      ucb_interfaces__srv__Rot_Request__fini(&array->data[i]);
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

ucb_interfaces__srv__Rot_Request__Sequence *
ucb_interfaces__srv__Rot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interfaces__srv__Rot_Request__Sequence * array = (ucb_interfaces__srv__Rot_Request__Sequence *)allocator.allocate(sizeof(ucb_interfaces__srv__Rot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ucb_interfaces__srv__Rot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ucb_interfaces__srv__Rot_Request__Sequence__destroy(ucb_interfaces__srv__Rot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ucb_interfaces__srv__Rot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ucb_interfaces__srv__Rot_Request__Sequence__are_equal(const ucb_interfaces__srv__Rot_Request__Sequence * lhs, const ucb_interfaces__srv__Rot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ucb_interfaces__srv__Rot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ucb_interfaces__srv__Rot_Request__Sequence__copy(
  const ucb_interfaces__srv__Rot_Request__Sequence * input,
  ucb_interfaces__srv__Rot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ucb_interfaces__srv__Rot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ucb_interfaces__srv__Rot_Request * data =
      (ucb_interfaces__srv__Rot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ucb_interfaces__srv__Rot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ucb_interfaces__srv__Rot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ucb_interfaces__srv__Rot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ucb_interfaces__srv__Rot_Response__init(ucb_interfaces__srv__Rot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // fx
  // fy
  // fz
  return true;
}

void
ucb_interfaces__srv__Rot_Response__fini(ucb_interfaces__srv__Rot_Response * msg)
{
  if (!msg) {
    return;
  }
  // fx
  // fy
  // fz
}

bool
ucb_interfaces__srv__Rot_Response__are_equal(const ucb_interfaces__srv__Rot_Response * lhs, const ucb_interfaces__srv__Rot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fx
  if (lhs->fx != rhs->fx) {
    return false;
  }
  // fy
  if (lhs->fy != rhs->fy) {
    return false;
  }
  // fz
  if (lhs->fz != rhs->fz) {
    return false;
  }
  return true;
}

bool
ucb_interfaces__srv__Rot_Response__copy(
  const ucb_interfaces__srv__Rot_Response * input,
  ucb_interfaces__srv__Rot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // fx
  output->fx = input->fx;
  // fy
  output->fy = input->fy;
  // fz
  output->fz = input->fz;
  return true;
}

ucb_interfaces__srv__Rot_Response *
ucb_interfaces__srv__Rot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interfaces__srv__Rot_Response * msg = (ucb_interfaces__srv__Rot_Response *)allocator.allocate(sizeof(ucb_interfaces__srv__Rot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ucb_interfaces__srv__Rot_Response));
  bool success = ucb_interfaces__srv__Rot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ucb_interfaces__srv__Rot_Response__destroy(ucb_interfaces__srv__Rot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ucb_interfaces__srv__Rot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ucb_interfaces__srv__Rot_Response__Sequence__init(ucb_interfaces__srv__Rot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interfaces__srv__Rot_Response * data = NULL;

  if (size) {
    data = (ucb_interfaces__srv__Rot_Response *)allocator.zero_allocate(size, sizeof(ucb_interfaces__srv__Rot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ucb_interfaces__srv__Rot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ucb_interfaces__srv__Rot_Response__fini(&data[i - 1]);
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
ucb_interfaces__srv__Rot_Response__Sequence__fini(ucb_interfaces__srv__Rot_Response__Sequence * array)
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
      ucb_interfaces__srv__Rot_Response__fini(&array->data[i]);
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

ucb_interfaces__srv__Rot_Response__Sequence *
ucb_interfaces__srv__Rot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interfaces__srv__Rot_Response__Sequence * array = (ucb_interfaces__srv__Rot_Response__Sequence *)allocator.allocate(sizeof(ucb_interfaces__srv__Rot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ucb_interfaces__srv__Rot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ucb_interfaces__srv__Rot_Response__Sequence__destroy(ucb_interfaces__srv__Rot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ucb_interfaces__srv__Rot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ucb_interfaces__srv__Rot_Response__Sequence__are_equal(const ucb_interfaces__srv__Rot_Response__Sequence * lhs, const ucb_interfaces__srv__Rot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ucb_interfaces__srv__Rot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ucb_interfaces__srv__Rot_Response__Sequence__copy(
  const ucb_interfaces__srv__Rot_Response__Sequence * input,
  ucb_interfaces__srv__Rot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ucb_interfaces__srv__Rot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ucb_interfaces__srv__Rot_Response * data =
      (ucb_interfaces__srv__Rot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ucb_interfaces__srv__Rot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ucb_interfaces__srv__Rot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ucb_interfaces__srv__Rot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
