// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from matrix_interfaces:srv/Rotxyz.idl
// generated code does not contain a copyright notice
#include "matrix_interfaces/srv/detail/rotxyz__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
matrix_interfaces__srv__Rotxyz_Request__init(matrix_interfaces__srv__Rotxyz_Request * msg)
{
  if (!msg) {
    return false;
  }
  // px
  // py
  // pz
  return true;
}

void
matrix_interfaces__srv__Rotxyz_Request__fini(matrix_interfaces__srv__Rotxyz_Request * msg)
{
  if (!msg) {
    return;
  }
  // px
  // py
  // pz
}

bool
matrix_interfaces__srv__Rotxyz_Request__are_equal(const matrix_interfaces__srv__Rotxyz_Request * lhs, const matrix_interfaces__srv__Rotxyz_Request * rhs)
{
  if (!lhs || !rhs) {
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
matrix_interfaces__srv__Rotxyz_Request__copy(
  const matrix_interfaces__srv__Rotxyz_Request * input,
  matrix_interfaces__srv__Rotxyz_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // px
  output->px = input->px;
  // py
  output->py = input->py;
  // pz
  output->pz = input->pz;
  return true;
}

matrix_interfaces__srv__Rotxyz_Request *
matrix_interfaces__srv__Rotxyz_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interfaces__srv__Rotxyz_Request * msg = (matrix_interfaces__srv__Rotxyz_Request *)allocator.allocate(sizeof(matrix_interfaces__srv__Rotxyz_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(matrix_interfaces__srv__Rotxyz_Request));
  bool success = matrix_interfaces__srv__Rotxyz_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
matrix_interfaces__srv__Rotxyz_Request__destroy(matrix_interfaces__srv__Rotxyz_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    matrix_interfaces__srv__Rotxyz_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
matrix_interfaces__srv__Rotxyz_Request__Sequence__init(matrix_interfaces__srv__Rotxyz_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interfaces__srv__Rotxyz_Request * data = NULL;

  if (size) {
    data = (matrix_interfaces__srv__Rotxyz_Request *)allocator.zero_allocate(size, sizeof(matrix_interfaces__srv__Rotxyz_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = matrix_interfaces__srv__Rotxyz_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        matrix_interfaces__srv__Rotxyz_Request__fini(&data[i - 1]);
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
matrix_interfaces__srv__Rotxyz_Request__Sequence__fini(matrix_interfaces__srv__Rotxyz_Request__Sequence * array)
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
      matrix_interfaces__srv__Rotxyz_Request__fini(&array->data[i]);
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

matrix_interfaces__srv__Rotxyz_Request__Sequence *
matrix_interfaces__srv__Rotxyz_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interfaces__srv__Rotxyz_Request__Sequence * array = (matrix_interfaces__srv__Rotxyz_Request__Sequence *)allocator.allocate(sizeof(matrix_interfaces__srv__Rotxyz_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = matrix_interfaces__srv__Rotxyz_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
matrix_interfaces__srv__Rotxyz_Request__Sequence__destroy(matrix_interfaces__srv__Rotxyz_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    matrix_interfaces__srv__Rotxyz_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
matrix_interfaces__srv__Rotxyz_Request__Sequence__are_equal(const matrix_interfaces__srv__Rotxyz_Request__Sequence * lhs, const matrix_interfaces__srv__Rotxyz_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!matrix_interfaces__srv__Rotxyz_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
matrix_interfaces__srv__Rotxyz_Request__Sequence__copy(
  const matrix_interfaces__srv__Rotxyz_Request__Sequence * input,
  matrix_interfaces__srv__Rotxyz_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(matrix_interfaces__srv__Rotxyz_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    matrix_interfaces__srv__Rotxyz_Request * data =
      (matrix_interfaces__srv__Rotxyz_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!matrix_interfaces__srv__Rotxyz_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          matrix_interfaces__srv__Rotxyz_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!matrix_interfaces__srv__Rotxyz_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `matrizz`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
matrix_interfaces__srv__Rotxyz_Response__init(matrix_interfaces__srv__Rotxyz_Response * msg)
{
  if (!msg) {
    return false;
  }
  // matrizz
  if (!rosidl_runtime_c__double__Sequence__init(&msg->matrizz, 0)) {
    matrix_interfaces__srv__Rotxyz_Response__fini(msg);
    return false;
  }
  return true;
}

void
matrix_interfaces__srv__Rotxyz_Response__fini(matrix_interfaces__srv__Rotxyz_Response * msg)
{
  if (!msg) {
    return;
  }
  // matrizz
  rosidl_runtime_c__double__Sequence__fini(&msg->matrizz);
}

bool
matrix_interfaces__srv__Rotxyz_Response__are_equal(const matrix_interfaces__srv__Rotxyz_Response * lhs, const matrix_interfaces__srv__Rotxyz_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // matrizz
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->matrizz), &(rhs->matrizz)))
  {
    return false;
  }
  return true;
}

bool
matrix_interfaces__srv__Rotxyz_Response__copy(
  const matrix_interfaces__srv__Rotxyz_Response * input,
  matrix_interfaces__srv__Rotxyz_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // matrizz
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->matrizz), &(output->matrizz)))
  {
    return false;
  }
  return true;
}

matrix_interfaces__srv__Rotxyz_Response *
matrix_interfaces__srv__Rotxyz_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interfaces__srv__Rotxyz_Response * msg = (matrix_interfaces__srv__Rotxyz_Response *)allocator.allocate(sizeof(matrix_interfaces__srv__Rotxyz_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(matrix_interfaces__srv__Rotxyz_Response));
  bool success = matrix_interfaces__srv__Rotxyz_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
matrix_interfaces__srv__Rotxyz_Response__destroy(matrix_interfaces__srv__Rotxyz_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    matrix_interfaces__srv__Rotxyz_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
matrix_interfaces__srv__Rotxyz_Response__Sequence__init(matrix_interfaces__srv__Rotxyz_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interfaces__srv__Rotxyz_Response * data = NULL;

  if (size) {
    data = (matrix_interfaces__srv__Rotxyz_Response *)allocator.zero_allocate(size, sizeof(matrix_interfaces__srv__Rotxyz_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = matrix_interfaces__srv__Rotxyz_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        matrix_interfaces__srv__Rotxyz_Response__fini(&data[i - 1]);
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
matrix_interfaces__srv__Rotxyz_Response__Sequence__fini(matrix_interfaces__srv__Rotxyz_Response__Sequence * array)
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
      matrix_interfaces__srv__Rotxyz_Response__fini(&array->data[i]);
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

matrix_interfaces__srv__Rotxyz_Response__Sequence *
matrix_interfaces__srv__Rotxyz_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  matrix_interfaces__srv__Rotxyz_Response__Sequence * array = (matrix_interfaces__srv__Rotxyz_Response__Sequence *)allocator.allocate(sizeof(matrix_interfaces__srv__Rotxyz_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = matrix_interfaces__srv__Rotxyz_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
matrix_interfaces__srv__Rotxyz_Response__Sequence__destroy(matrix_interfaces__srv__Rotxyz_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    matrix_interfaces__srv__Rotxyz_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
matrix_interfaces__srv__Rotxyz_Response__Sequence__are_equal(const matrix_interfaces__srv__Rotxyz_Response__Sequence * lhs, const matrix_interfaces__srv__Rotxyz_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!matrix_interfaces__srv__Rotxyz_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
matrix_interfaces__srv__Rotxyz_Response__Sequence__copy(
  const matrix_interfaces__srv__Rotxyz_Response__Sequence * input,
  matrix_interfaces__srv__Rotxyz_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(matrix_interfaces__srv__Rotxyz_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    matrix_interfaces__srv__Rotxyz_Response * data =
      (matrix_interfaces__srv__Rotxyz_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!matrix_interfaces__srv__Rotxyz_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          matrix_interfaces__srv__Rotxyz_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!matrix_interfaces__srv__Rotxyz_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
