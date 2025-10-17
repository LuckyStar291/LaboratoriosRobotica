// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perro_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice
#include "perro_interfaces/srv/detail/rot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
perro_interfaces__srv__Rot_Request__init(perro_interfaces__srv__Rot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // th1_deg
  // th2_deg
  // th3_deg
  return true;
}

void
perro_interfaces__srv__Rot_Request__fini(perro_interfaces__srv__Rot_Request * msg)
{
  if (!msg) {
    return;
  }
  // th1_deg
  // th2_deg
  // th3_deg
}

bool
perro_interfaces__srv__Rot_Request__are_equal(const perro_interfaces__srv__Rot_Request * lhs, const perro_interfaces__srv__Rot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // th1_deg
  if (lhs->th1_deg != rhs->th1_deg) {
    return false;
  }
  // th2_deg
  if (lhs->th2_deg != rhs->th2_deg) {
    return false;
  }
  // th3_deg
  if (lhs->th3_deg != rhs->th3_deg) {
    return false;
  }
  return true;
}

bool
perro_interfaces__srv__Rot_Request__copy(
  const perro_interfaces__srv__Rot_Request * input,
  perro_interfaces__srv__Rot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // th1_deg
  output->th1_deg = input->th1_deg;
  // th2_deg
  output->th2_deg = input->th2_deg;
  // th3_deg
  output->th3_deg = input->th3_deg;
  return true;
}

perro_interfaces__srv__Rot_Request *
perro_interfaces__srv__Rot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perro_interfaces__srv__Rot_Request * msg = (perro_interfaces__srv__Rot_Request *)allocator.allocate(sizeof(perro_interfaces__srv__Rot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perro_interfaces__srv__Rot_Request));
  bool success = perro_interfaces__srv__Rot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perro_interfaces__srv__Rot_Request__destroy(perro_interfaces__srv__Rot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perro_interfaces__srv__Rot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perro_interfaces__srv__Rot_Request__Sequence__init(perro_interfaces__srv__Rot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perro_interfaces__srv__Rot_Request * data = NULL;

  if (size) {
    data = (perro_interfaces__srv__Rot_Request *)allocator.zero_allocate(size, sizeof(perro_interfaces__srv__Rot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perro_interfaces__srv__Rot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perro_interfaces__srv__Rot_Request__fini(&data[i - 1]);
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
perro_interfaces__srv__Rot_Request__Sequence__fini(perro_interfaces__srv__Rot_Request__Sequence * array)
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
      perro_interfaces__srv__Rot_Request__fini(&array->data[i]);
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

perro_interfaces__srv__Rot_Request__Sequence *
perro_interfaces__srv__Rot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perro_interfaces__srv__Rot_Request__Sequence * array = (perro_interfaces__srv__Rot_Request__Sequence *)allocator.allocate(sizeof(perro_interfaces__srv__Rot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perro_interfaces__srv__Rot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perro_interfaces__srv__Rot_Request__Sequence__destroy(perro_interfaces__srv__Rot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perro_interfaces__srv__Rot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perro_interfaces__srv__Rot_Request__Sequence__are_equal(const perro_interfaces__srv__Rot_Request__Sequence * lhs, const perro_interfaces__srv__Rot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perro_interfaces__srv__Rot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perro_interfaces__srv__Rot_Request__Sequence__copy(
  const perro_interfaces__srv__Rot_Request__Sequence * input,
  perro_interfaces__srv__Rot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perro_interfaces__srv__Rot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perro_interfaces__srv__Rot_Request * data =
      (perro_interfaces__srv__Rot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perro_interfaces__srv__Rot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perro_interfaces__srv__Rot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perro_interfaces__srv__Rot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
perro_interfaces__srv__Rot_Response__init(perro_interfaces__srv__Rot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x_mm
  // y_mm
  // z_mm
  return true;
}

void
perro_interfaces__srv__Rot_Response__fini(perro_interfaces__srv__Rot_Response * msg)
{
  if (!msg) {
    return;
  }
  // x_mm
  // y_mm
  // z_mm
}

bool
perro_interfaces__srv__Rot_Response__are_equal(const perro_interfaces__srv__Rot_Response * lhs, const perro_interfaces__srv__Rot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_mm
  if (lhs->x_mm != rhs->x_mm) {
    return false;
  }
  // y_mm
  if (lhs->y_mm != rhs->y_mm) {
    return false;
  }
  // z_mm
  if (lhs->z_mm != rhs->z_mm) {
    return false;
  }
  return true;
}

bool
perro_interfaces__srv__Rot_Response__copy(
  const perro_interfaces__srv__Rot_Response * input,
  perro_interfaces__srv__Rot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x_mm
  output->x_mm = input->x_mm;
  // y_mm
  output->y_mm = input->y_mm;
  // z_mm
  output->z_mm = input->z_mm;
  return true;
}

perro_interfaces__srv__Rot_Response *
perro_interfaces__srv__Rot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perro_interfaces__srv__Rot_Response * msg = (perro_interfaces__srv__Rot_Response *)allocator.allocate(sizeof(perro_interfaces__srv__Rot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perro_interfaces__srv__Rot_Response));
  bool success = perro_interfaces__srv__Rot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perro_interfaces__srv__Rot_Response__destroy(perro_interfaces__srv__Rot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perro_interfaces__srv__Rot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perro_interfaces__srv__Rot_Response__Sequence__init(perro_interfaces__srv__Rot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perro_interfaces__srv__Rot_Response * data = NULL;

  if (size) {
    data = (perro_interfaces__srv__Rot_Response *)allocator.zero_allocate(size, sizeof(perro_interfaces__srv__Rot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perro_interfaces__srv__Rot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perro_interfaces__srv__Rot_Response__fini(&data[i - 1]);
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
perro_interfaces__srv__Rot_Response__Sequence__fini(perro_interfaces__srv__Rot_Response__Sequence * array)
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
      perro_interfaces__srv__Rot_Response__fini(&array->data[i]);
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

perro_interfaces__srv__Rot_Response__Sequence *
perro_interfaces__srv__Rot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perro_interfaces__srv__Rot_Response__Sequence * array = (perro_interfaces__srv__Rot_Response__Sequence *)allocator.allocate(sizeof(perro_interfaces__srv__Rot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perro_interfaces__srv__Rot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perro_interfaces__srv__Rot_Response__Sequence__destroy(perro_interfaces__srv__Rot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perro_interfaces__srv__Rot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perro_interfaces__srv__Rot_Response__Sequence__are_equal(const perro_interfaces__srv__Rot_Response__Sequence * lhs, const perro_interfaces__srv__Rot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perro_interfaces__srv__Rot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perro_interfaces__srv__Rot_Response__Sequence__copy(
  const perro_interfaces__srv__Rot_Response__Sequence * input,
  perro_interfaces__srv__Rot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perro_interfaces__srv__Rot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perro_interfaces__srv__Rot_Response * data =
      (perro_interfaces__srv__Rot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perro_interfaces__srv__Rot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perro_interfaces__srv__Rot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perro_interfaces__srv__Rot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
