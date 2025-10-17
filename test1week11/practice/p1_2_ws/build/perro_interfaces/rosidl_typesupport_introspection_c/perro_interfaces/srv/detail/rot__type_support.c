// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from perro_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "perro_interfaces/srv/detail/rot__rosidl_typesupport_introspection_c.h"
#include "perro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "perro_interfaces/srv/detail/rot__functions.h"
#include "perro_interfaces/srv/detail/rot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perro_interfaces__srv__Rot_Request__init(message_memory);
}

void perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_fini_function(void * message_memory)
{
  perro_interfaces__srv__Rot_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_message_member_array[3] = {
  {
    "th1_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perro_interfaces__srv__Rot_Request, th1_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "th2_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perro_interfaces__srv__Rot_Request, th2_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "th3_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perro_interfaces__srv__Rot_Request, th3_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_message_members = {
  "perro_interfaces__srv",  // message namespace
  "Rot_Request",  // message name
  3,  // number of fields
  sizeof(perro_interfaces__srv__Rot_Request),
  perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_message_member_array,  // message members
  perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_message_type_support_handle = {
  0,
  &perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perro_interfaces, srv, Rot_Request)() {
  if (!perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_message_type_support_handle.typesupport_identifier) {
    perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perro_interfaces__srv__Rot_Request__rosidl_typesupport_introspection_c__Rot_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "perro_interfaces/srv/detail/rot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "perro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "perro_interfaces/srv/detail/rot__functions.h"
// already included above
// #include "perro_interfaces/srv/detail/rot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perro_interfaces__srv__Rot_Response__init(message_memory);
}

void perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_fini_function(void * message_memory)
{
  perro_interfaces__srv__Rot_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_message_member_array[3] = {
  {
    "x_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perro_interfaces__srv__Rot_Response, x_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perro_interfaces__srv__Rot_Response, y_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perro_interfaces__srv__Rot_Response, z_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_message_members = {
  "perro_interfaces__srv",  // message namespace
  "Rot_Response",  // message name
  3,  // number of fields
  sizeof(perro_interfaces__srv__Rot_Response),
  perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_message_member_array,  // message members
  perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_message_type_support_handle = {
  0,
  &perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perro_interfaces, srv, Rot_Response)() {
  if (!perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_message_type_support_handle.typesupport_identifier) {
    perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perro_interfaces__srv__Rot_Response__rosidl_typesupport_introspection_c__Rot_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "perro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "perro_interfaces/srv/detail/rot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_service_members = {
  "perro_interfaces__srv",  // service namespace
  "Rot",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_Request_message_type_support_handle,
  NULL  // response message
  // perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_Response_message_type_support_handle
};

static rosidl_service_type_support_t perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_service_type_support_handle = {
  0,
  &perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perro_interfaces, srv, Rot_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perro_interfaces, srv, Rot_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perro_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perro_interfaces, srv, Rot)() {
  if (!perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_service_type_support_handle.typesupport_identifier) {
    perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perro_interfaces, srv, Rot_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perro_interfaces, srv, Rot_Response)()->data;
  }

  return &perro_interfaces__srv__detail__rot__rosidl_typesupport_introspection_c__Rot_service_type_support_handle;
}
