// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perro_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef PERRO_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_
#define PERRO_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Rot in the package perro_interfaces.
typedef struct perro_interfaces__srv__Rot_Request
{
  float th1_deg;
  float th2_deg;
  float th3_deg;
} perro_interfaces__srv__Rot_Request;

// Struct for a sequence of perro_interfaces__srv__Rot_Request.
typedef struct perro_interfaces__srv__Rot_Request__Sequence
{
  perro_interfaces__srv__Rot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perro_interfaces__srv__Rot_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Rot in the package perro_interfaces.
typedef struct perro_interfaces__srv__Rot_Response
{
  float x_mm;
  float y_mm;
  float z_mm;
} perro_interfaces__srv__Rot_Response;

// Struct for a sequence of perro_interfaces__srv__Rot_Response.
typedef struct perro_interfaces__srv__Rot_Response__Sequence
{
  perro_interfaces__srv__Rot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perro_interfaces__srv__Rot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERRO_INTERFACES__SRV__DETAIL__ROT__STRUCT_H_
