// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ucb_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_
#define UCB_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Rot in the package ucb_interfaces.
typedef struct ucb_interfaces__srv__Rot_Request
{
  int64_t angle;
  int64_t px;
  int64_t py;
  int64_t pz;
} ucb_interfaces__srv__Rot_Request;

// Struct for a sequence of ucb_interfaces__srv__Rot_Request.
typedef struct ucb_interfaces__srv__Rot_Request__Sequence
{
  ucb_interfaces__srv__Rot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ucb_interfaces__srv__Rot_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Rot in the package ucb_interfaces.
typedef struct ucb_interfaces__srv__Rot_Response
{
  double fx;
  double fy;
  double fz;
} ucb_interfaces__srv__Rot_Response;

// Struct for a sequence of ucb_interfaces__srv__Rot_Response.
typedef struct ucb_interfaces__srv__Rot_Response__Sequence
{
  ucb_interfaces__srv__Rot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ucb_interfaces__srv__Rot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UCB_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_
