// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ucb_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACES__SRV__DETAIL__ROT__TRAITS_HPP_
#define UCB_INTERFACES__SRV__DETAIL__ROT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ucb_interfaces/srv/detail/rot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ucb_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: px
  {
    out << "px: ";
    rosidl_generator_traits::value_to_yaml(msg.px, out);
    out << ", ";
  }

  // member: py
  {
    out << "py: ";
    rosidl_generator_traits::value_to_yaml(msg.py, out);
    out << ", ";
  }

  // member: pz
  {
    out << "pz: ";
    rosidl_generator_traits::value_to_yaml(msg.pz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: px
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "px: ";
    rosidl_generator_traits::value_to_yaml(msg.px, out);
    out << "\n";
  }

  // member: py
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "py: ";
    rosidl_generator_traits::value_to_yaml(msg.py, out);
    out << "\n";
  }

  // member: pz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pz: ";
    rosidl_generator_traits::value_to_yaml(msg.pz, out);
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

}  // namespace ucb_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ucb_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ucb_interfaces::srv::Rot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ucb_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ucb_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ucb_interfaces::srv::Rot_Request & msg)
{
  return ucb_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ucb_interfaces::srv::Rot_Request>()
{
  return "ucb_interfaces::srv::Rot_Request";
}

template<>
inline const char * name<ucb_interfaces::srv::Rot_Request>()
{
  return "ucb_interfaces/srv/Rot_Request";
}

template<>
struct has_fixed_size<ucb_interfaces::srv::Rot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ucb_interfaces::srv::Rot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ucb_interfaces::srv::Rot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ucb_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: fx
  {
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << ", ";
  }

  // member: fy
  {
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << ", ";
  }

  // member: fz
  {
    out << "fz: ";
    rosidl_generator_traits::value_to_yaml(msg.fz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << "\n";
  }

  // member: fy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << "\n";
  }

  // member: fz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fz: ";
    rosidl_generator_traits::value_to_yaml(msg.fz, out);
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

}  // namespace ucb_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ucb_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ucb_interfaces::srv::Rot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ucb_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ucb_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ucb_interfaces::srv::Rot_Response & msg)
{
  return ucb_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ucb_interfaces::srv::Rot_Response>()
{
  return "ucb_interfaces::srv::Rot_Response";
}

template<>
inline const char * name<ucb_interfaces::srv::Rot_Response>()
{
  return "ucb_interfaces/srv/Rot_Response";
}

template<>
struct has_fixed_size<ucb_interfaces::srv::Rot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ucb_interfaces::srv::Rot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ucb_interfaces::srv::Rot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ucb_interfaces::srv::Rot>()
{
  return "ucb_interfaces::srv::Rot";
}

template<>
inline const char * name<ucb_interfaces::srv::Rot>()
{
  return "ucb_interfaces/srv/Rot";
}

template<>
struct has_fixed_size<ucb_interfaces::srv::Rot>
  : std::integral_constant<
    bool,
    has_fixed_size<ucb_interfaces::srv::Rot_Request>::value &&
    has_fixed_size<ucb_interfaces::srv::Rot_Response>::value
  >
{
};

template<>
struct has_bounded_size<ucb_interfaces::srv::Rot>
  : std::integral_constant<
    bool,
    has_bounded_size<ucb_interfaces::srv::Rot_Request>::value &&
    has_bounded_size<ucb_interfaces::srv::Rot_Response>::value
  >
{
};

template<>
struct is_service<ucb_interfaces::srv::Rot>
  : std::true_type
{
};

template<>
struct is_service_request<ucb_interfaces::srv::Rot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ucb_interfaces::srv::Rot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UCB_INTERFACES__SRV__DETAIL__ROT__TRAITS_HPP_
