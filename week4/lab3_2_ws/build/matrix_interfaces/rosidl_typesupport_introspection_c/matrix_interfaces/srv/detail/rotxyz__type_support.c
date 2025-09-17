// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from matrix_interfaces:srv/Rotxyz.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "matrix_interfaces/srv/detail/rotxyz__rosidl_typesupport_introspection_c.h"
#include "matrix_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "matrix_interfaces/srv/detail/rotxyz__functions.h"
#include "matrix_interfaces/srv/detail/rotxyz__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  matrix_interfaces__srv__Rotxyz_Request__init(message_memory);
}

void matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_fini_function(void * message_memory)
{
  matrix_interfaces__srv__Rotxyz_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_message_member_array[3] = {
  {
    "px",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(matrix_interfaces__srv__Rotxyz_Request, px),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "py",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(matrix_interfaces__srv__Rotxyz_Request, py),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(matrix_interfaces__srv__Rotxyz_Request, pz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_message_members = {
  "matrix_interfaces__srv",  // message namespace
  "Rotxyz_Request",  // message name
  3,  // number of fields
  sizeof(matrix_interfaces__srv__Rotxyz_Request),
  matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_message_member_array,  // message members
  matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_message_type_support_handle = {
  0,
  &matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_matrix_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, matrix_interfaces, srv, Rotxyz_Request)() {
  if (!matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_message_type_support_handle.typesupport_identifier) {
    matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &matrix_interfaces__srv__Rotxyz_Request__rosidl_typesupport_introspection_c__Rotxyz_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "matrix_interfaces/srv/detail/rotxyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "matrix_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "matrix_interfaces/srv/detail/rotxyz__functions.h"
// already included above
// #include "matrix_interfaces/srv/detail/rotxyz__struct.h"


// Include directives for member types
// Member `matrizz`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  matrix_interfaces__srv__Rotxyz_Response__init(message_memory);
}

void matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_fini_function(void * message_memory)
{
  matrix_interfaces__srv__Rotxyz_Response__fini(message_memory);
}

size_t matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__size_function__Rotxyz_Response__matrizz(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__get_const_function__Rotxyz_Response__matrizz(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__get_function__Rotxyz_Response__matrizz(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__fetch_function__Rotxyz_Response__matrizz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__get_const_function__Rotxyz_Response__matrizz(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__assign_function__Rotxyz_Response__matrizz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__get_function__Rotxyz_Response__matrizz(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__resize_function__Rotxyz_Response__matrizz(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_message_member_array[1] = {
  {
    "matrizz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(matrix_interfaces__srv__Rotxyz_Response, matrizz),  // bytes offset in struct
    NULL,  // default value
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__size_function__Rotxyz_Response__matrizz,  // size() function pointer
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__get_const_function__Rotxyz_Response__matrizz,  // get_const(index) function pointer
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__get_function__Rotxyz_Response__matrizz,  // get(index) function pointer
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__fetch_function__Rotxyz_Response__matrizz,  // fetch(index, &value) function pointer
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__assign_function__Rotxyz_Response__matrizz,  // assign(index, value) function pointer
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__resize_function__Rotxyz_Response__matrizz  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_message_members = {
  "matrix_interfaces__srv",  // message namespace
  "Rotxyz_Response",  // message name
  1,  // number of fields
  sizeof(matrix_interfaces__srv__Rotxyz_Response),
  matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_message_member_array,  // message members
  matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_message_type_support_handle = {
  0,
  &matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_matrix_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, matrix_interfaces, srv, Rotxyz_Response)() {
  if (!matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_message_type_support_handle.typesupport_identifier) {
    matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &matrix_interfaces__srv__Rotxyz_Response__rosidl_typesupport_introspection_c__Rotxyz_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "matrix_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "matrix_interfaces/srv/detail/rotxyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_service_members = {
  "matrix_interfaces__srv",  // service namespace
  "Rotxyz",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_Request_message_type_support_handle,
  NULL  // response message
  // matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_Response_message_type_support_handle
};

static rosidl_service_type_support_t matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_service_type_support_handle = {
  0,
  &matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, matrix_interfaces, srv, Rotxyz_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, matrix_interfaces, srv, Rotxyz_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_matrix_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, matrix_interfaces, srv, Rotxyz)() {
  if (!matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_service_type_support_handle.typesupport_identifier) {
    matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, matrix_interfaces, srv, Rotxyz_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, matrix_interfaces, srv, Rotxyz_Response)()->data;
  }

  return &matrix_interfaces__srv__detail__rotxyz__rosidl_typesupport_introspection_c__Rotxyz_service_type_support_handle;
}
