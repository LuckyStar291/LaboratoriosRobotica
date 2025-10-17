// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perro_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef PERRO_INTERFACES__SRV__DETAIL__ROT__TRAITS_HPP_
#define PERRO_INTERFACES__SRV__DETAIL__ROT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perro_interfaces/srv/detail/rot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace perro_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: th1_deg
  {
    out << "th1_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.th1_deg, out);
    out << ", ";
  }

  // member: th2_deg
  {
    out << "th2_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.th2_deg, out);
    out << ", ";
  }

  // member: th3_deg
  {
    out << "th3_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.th3_deg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: th1_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "th1_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.th1_deg, out);
    out << "\n";
  }

  // member: th2_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "th2_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.th2_deg, out);
    out << "\n";
  }

  // member: th3_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "th3_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.th3_deg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rot_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace perro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use perro_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perro_interfaces::srv::Rot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  perro_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perro_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const perro_interfaces::srv::Rot_Request & msg)
{
  return perro_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<perro_interfaces::srv::Rot_Request>()
{
  return "perro_interfaces::srv::Rot_Request";
}

template<>
inline const char * name<perro_interfaces::srv::Rot_Request>()
{
  return "perro_interfaces/srv/Rot_Request";
}

template<>
struct has_fixed_size<perro_interfaces::srv::Rot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<perro_interfaces::srv::Rot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<perro_interfaces::srv::Rot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace perro_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_mm
  {
    out << "x_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.x_mm, out);
    out << ", ";
  }

  // member: y_mm
  {
    out << "y_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.y_mm, out);
    out << ", ";
  }

  // member: z_mm
  {
    out << "z_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.z_mm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.x_mm, out);
    out << "\n";
  }

  // member: y_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.y_mm, out);
    out << "\n";
  }

  // member: z_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.z_mm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rot_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace perro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use perro_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perro_interfaces::srv::Rot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  perro_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perro_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const perro_interfaces::srv::Rot_Response & msg)
{
  return perro_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<perro_interfaces::srv::Rot_Response>()
{
  return "perro_interfaces::srv::Rot_Response";
}

template<>
inline const char * name<perro_interfaces::srv::Rot_Response>()
{
  return "perro_interfaces/srv/Rot_Response";
}

template<>
struct has_fixed_size<perro_interfaces::srv::Rot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<perro_interfaces::srv::Rot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<perro_interfaces::srv::Rot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<perro_interfaces::srv::Rot>()
{
  return "perro_interfaces::srv::Rot";
}

template<>
inline const char * name<perro_interfaces::srv::Rot>()
{
  return "perro_interfaces/srv/Rot";
}

template<>
struct has_fixed_size<perro_interfaces::srv::Rot>
  : std::integral_constant<
    bool,
    has_fixed_size<perro_interfaces::srv::Rot_Request>::value &&
    has_fixed_size<perro_interfaces::srv::Rot_Response>::value
  >
{
};

template<>
struct has_bounded_size<perro_interfaces::srv::Rot>
  : std::integral_constant<
    bool,
    has_bounded_size<perro_interfaces::srv::Rot_Request>::value &&
    has_bounded_size<perro_interfaces::srv::Rot_Response>::value
  >
{
};

template<>
struct is_service<perro_interfaces::srv::Rot>
  : std::true_type
{
};

template<>
struct is_service_request<perro_interfaces::srv::Rot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<perro_interfaces::srv::Rot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PERRO_INTERFACES__SRV__DETAIL__ROT__TRAITS_HPP_
