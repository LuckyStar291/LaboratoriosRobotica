// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from perro_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice
#include "perro_interfaces/srv/detail/rot__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "perro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "perro_interfaces/srv/detail/rot__struct.h"
#include "perro_interfaces/srv/detail/rot__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Rot_Request__ros_msg_type = perro_interfaces__srv__Rot_Request;

static bool _Rot_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Rot_Request__ros_msg_type * ros_message = static_cast<const _Rot_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: th1_deg
  {
    cdr << ros_message->th1_deg;
  }

  // Field name: th2_deg
  {
    cdr << ros_message->th2_deg;
  }

  // Field name: th3_deg
  {
    cdr << ros_message->th3_deg;
  }

  return true;
}

static bool _Rot_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Rot_Request__ros_msg_type * ros_message = static_cast<_Rot_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: th1_deg
  {
    cdr >> ros_message->th1_deg;
  }

  // Field name: th2_deg
  {
    cdr >> ros_message->th2_deg;
  }

  // Field name: th3_deg
  {
    cdr >> ros_message->th3_deg;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_perro_interfaces
size_t get_serialized_size_perro_interfaces__srv__Rot_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Rot_Request__ros_msg_type * ros_message = static_cast<const _Rot_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name th1_deg
  {
    size_t item_size = sizeof(ros_message->th1_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name th2_deg
  {
    size_t item_size = sizeof(ros_message->th2_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name th3_deg
  {
    size_t item_size = sizeof(ros_message->th3_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Rot_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_perro_interfaces__srv__Rot_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_perro_interfaces
size_t max_serialized_size_perro_interfaces__srv__Rot_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: th1_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: th2_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: th3_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = perro_interfaces__srv__Rot_Request;
    is_plain =
      (
      offsetof(DataType, th3_deg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Rot_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_perro_interfaces__srv__Rot_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Rot_Request = {
  "perro_interfaces::srv",
  "Rot_Request",
  _Rot_Request__cdr_serialize,
  _Rot_Request__cdr_deserialize,
  _Rot_Request__get_serialized_size,
  _Rot_Request__max_serialized_size
};

static rosidl_message_type_support_t _Rot_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Rot_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, perro_interfaces, srv, Rot_Request)() {
  return &_Rot_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "perro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "perro_interfaces/srv/detail/rot__struct.h"
// already included above
// #include "perro_interfaces/srv/detail/rot__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Rot_Response__ros_msg_type = perro_interfaces__srv__Rot_Response;

static bool _Rot_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Rot_Response__ros_msg_type * ros_message = static_cast<const _Rot_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x_mm
  {
    cdr << ros_message->x_mm;
  }

  // Field name: y_mm
  {
    cdr << ros_message->y_mm;
  }

  // Field name: z_mm
  {
    cdr << ros_message->z_mm;
  }

  return true;
}

static bool _Rot_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Rot_Response__ros_msg_type * ros_message = static_cast<_Rot_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x_mm
  {
    cdr >> ros_message->x_mm;
  }

  // Field name: y_mm
  {
    cdr >> ros_message->y_mm;
  }

  // Field name: z_mm
  {
    cdr >> ros_message->z_mm;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_perro_interfaces
size_t get_serialized_size_perro_interfaces__srv__Rot_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Rot_Response__ros_msg_type * ros_message = static_cast<const _Rot_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_mm
  {
    size_t item_size = sizeof(ros_message->x_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_mm
  {
    size_t item_size = sizeof(ros_message->y_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_mm
  {
    size_t item_size = sizeof(ros_message->z_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Rot_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_perro_interfaces__srv__Rot_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_perro_interfaces
size_t max_serialized_size_perro_interfaces__srv__Rot_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: x_mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = perro_interfaces__srv__Rot_Response;
    is_plain =
      (
      offsetof(DataType, z_mm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Rot_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_perro_interfaces__srv__Rot_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Rot_Response = {
  "perro_interfaces::srv",
  "Rot_Response",
  _Rot_Response__cdr_serialize,
  _Rot_Response__cdr_deserialize,
  _Rot_Response__get_serialized_size,
  _Rot_Response__max_serialized_size
};

static rosidl_message_type_support_t _Rot_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Rot_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, perro_interfaces, srv, Rot_Response)() {
  return &_Rot_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "perro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "perro_interfaces/srv/rot.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Rot__callbacks = {
  "perro_interfaces::srv",
  "Rot",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, perro_interfaces, srv, Rot_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, perro_interfaces, srv, Rot_Response)(),
};

static rosidl_service_type_support_t Rot__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Rot__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, perro_interfaces, srv, Rot)() {
  return &Rot__handle;
}

#if defined(__cplusplus)
}
#endif
