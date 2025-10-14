// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_
#define TEST_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Rot in the package test_interfaces.
typedef struct test_interfaces__srv__Rot_Request
{
  int32_t angle;
  int32_t px;
  int32_t py;
  int32_t pz;
} test_interfaces__srv__Rot_Request;

// Struct for a sequence of test_interfaces__srv__Rot_Request.
typedef struct test_interfaces__srv__Rot_Request__Sequence
{
  test_interfaces__srv__Rot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__srv__Rot_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Rot in the package test_interfaces.
typedef struct test_interfaces__srv__Rot_Response
{
  float fx;
  float fy;
  float fz;
} test_interfaces__srv__Rot_Response;

// Struct for a sequence of test_interfaces__srv__Rot_Response.
typedef struct test_interfaces__srv__Rot_Response__Sequence
{
  test_interfaces__srv__Rot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__srv__Rot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_
