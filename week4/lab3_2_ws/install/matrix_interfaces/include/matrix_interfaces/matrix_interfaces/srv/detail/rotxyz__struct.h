// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from matrix_interfaces:srv/Rotxyz.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__STRUCT_H_
#define MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Rotxyz in the package matrix_interfaces.
typedef struct matrix_interfaces__srv__Rotxyz_Request
{
  int64_t px;
  int64_t py;
  int64_t pz;
} matrix_interfaces__srv__Rotxyz_Request;

// Struct for a sequence of matrix_interfaces__srv__Rotxyz_Request.
typedef struct matrix_interfaces__srv__Rotxyz_Request__Sequence
{
  matrix_interfaces__srv__Rotxyz_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} matrix_interfaces__srv__Rotxyz_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'matrizz'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Rotxyz in the package matrix_interfaces.
typedef struct matrix_interfaces__srv__Rotxyz_Response
{
  rosidl_runtime_c__double__Sequence matrizz;
} matrix_interfaces__srv__Rotxyz_Response;

// Struct for a sequence of matrix_interfaces__srv__Rotxyz_Response.
typedef struct matrix_interfaces__srv__Rotxyz_Response__Sequence
{
  matrix_interfaces__srv__Rotxyz_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} matrix_interfaces__srv__Rotxyz_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__STRUCT_H_
