// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from perro_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice
#include "perro_interfaces/srv/detail/rot__rosidl_typesupport_fastrtps_cpp.hpp"
#include "perro_interfaces/srv/detail/rot__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace perro_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perro_interfaces
cdr_serialize(
  const perro_interfaces::srv::Rot_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: th1_deg
  cdr << ros_message.th1_deg;
  // Member: th2_deg
  cdr << ros_message.th2_deg;
  // Member: th3_deg
  cdr << ros_message.th3_deg;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perro_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  perro_interfaces::srv::Rot_Request & ros_message)
{
  // Member: th1_deg
  cdr >> ros_message.th1_deg;

  // Member: th2_deg
  cdr >> ros_message.th2_deg;

  // Member: th3_deg
  cdr >> ros_message.th3_deg;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perro_interfaces
get_serialized_size(
  const perro_interfaces::srv::Rot_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: th1_deg
  {
    size_t item_size = sizeof(ros_message.th1_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: th2_deg
  {
    size_t item_size = sizeof(ros_message.th2_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: th3_deg
  {
    size_t item_size = sizeof(ros_message.th3_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perro_interfaces
max_serialized_size_Rot_Request(
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


  // Member: th1_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: th2_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: th3_deg
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
    using DataType = perro_interfaces::srv::Rot_Request;
    is_plain =
      (
      offsetof(DataType, th3_deg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Rot_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const perro_interfaces::srv::Rot_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Rot_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<perro_interfaces::srv::Rot_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Rot_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const perro_interfaces::srv::Rot_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Rot_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Rot_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Rot_Request__callbacks = {
  "perro_interfaces::srv",
  "Rot_Request",
  _Rot_Request__cdr_serialize,
  _Rot_Request__cdr_deserialize,
  _Rot_Request__get_serialized_size,
  _Rot_Request__max_serialized_size
};

static rosidl_message_type_support_t _Rot_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rot_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace perro_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_perro_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<perro_interfaces::srv::Rot_Request>()
{
  return &perro_interfaces::srv::typesupport_fastrtps_cpp::_Rot_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, perro_interfaces, srv, Rot_Request)() {
  return &perro_interfaces::srv::typesupport_fastrtps_cpp::_Rot_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace perro_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perro_interfaces
cdr_serialize(
  const perro_interfaces::srv::Rot_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_mm
  cdr << ros_message.x_mm;
  // Member: y_mm
  cdr << ros_message.y_mm;
  // Member: z_mm
  cdr << ros_message.z_mm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perro_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  perro_interfaces::srv::Rot_Response & ros_message)
{
  // Member: x_mm
  cdr >> ros_message.x_mm;

  // Member: y_mm
  cdr >> ros_message.y_mm;

  // Member: z_mm
  cdr >> ros_message.z_mm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perro_interfaces
get_serialized_size(
  const perro_interfaces::srv::Rot_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_mm
  {
    size_t item_size = sizeof(ros_message.x_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_mm
  {
    size_t item_size = sizeof(ros_message.y_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_mm
  {
    size_t item_size = sizeof(ros_message.z_mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perro_interfaces
max_serialized_size_Rot_Response(
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


  // Member: x_mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_mm
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
    using DataType = perro_interfaces::srv::Rot_Response;
    is_plain =
      (
      offsetof(DataType, z_mm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Rot_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const perro_interfaces::srv::Rot_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Rot_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<perro_interfaces::srv::Rot_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Rot_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const perro_interfaces::srv::Rot_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Rot_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Rot_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Rot_Response__callbacks = {
  "perro_interfaces::srv",
  "Rot_Response",
  _Rot_Response__cdr_serialize,
  _Rot_Response__cdr_deserialize,
  _Rot_Response__get_serialized_size,
  _Rot_Response__max_serialized_size
};

static rosidl_message_type_support_t _Rot_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rot_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace perro_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_perro_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<perro_interfaces::srv::Rot_Response>()
{
  return &perro_interfaces::srv::typesupport_fastrtps_cpp::_Rot_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, perro_interfaces, srv, Rot_Response)() {
  return &perro_interfaces::srv::typesupport_fastrtps_cpp::_Rot_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace perro_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Rot__callbacks = {
  "perro_interfaces::srv",
  "Rot",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, perro_interfaces, srv, Rot_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, perro_interfaces, srv, Rot_Response)(),
};

static rosidl_service_type_support_t _Rot__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rot__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace perro_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_perro_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<perro_interfaces::srv::Rot>()
{
  return &perro_interfaces::srv::typesupport_fastrtps_cpp::_Rot__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, perro_interfaces, srv, Rot)() {
  return &perro_interfaces::srv::typesupport_fastrtps_cpp::_Rot__handle;
}

#ifdef __cplusplus
}
#endif
