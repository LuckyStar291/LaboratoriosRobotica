// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from matrix_interfaces:srv/Rotxyz.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__TRAITS_HPP_
#define MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "matrix_interfaces/srv/detail/rotxyz__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace matrix_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rotxyz_Request & msg,
  std::ostream & out)
{
  out << "{";
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
  const Rotxyz_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const Rotxyz_Request & msg, bool use_flow_style = false)
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

}  // namespace matrix_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use matrix_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const matrix_interfaces::srv::Rotxyz_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  matrix_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use matrix_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const matrix_interfaces::srv::Rotxyz_Request & msg)
{
  return matrix_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<matrix_interfaces::srv::Rotxyz_Request>()
{
  return "matrix_interfaces::srv::Rotxyz_Request";
}

template<>
inline const char * name<matrix_interfaces::srv::Rotxyz_Request>()
{
  return "matrix_interfaces/srv/Rotxyz_Request";
}

template<>
struct has_fixed_size<matrix_interfaces::srv::Rotxyz_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<matrix_interfaces::srv::Rotxyz_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<matrix_interfaces::srv::Rotxyz_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace matrix_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rotxyz_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: matrizz
  {
    if (msg.matrizz.size() == 0) {
      out << "matrizz: []";
    } else {
      out << "matrizz: [";
      size_t pending_items = msg.matrizz.size();
      for (auto item : msg.matrizz) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rotxyz_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: matrizz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.matrizz.size() == 0) {
      out << "matrizz: []\n";
    } else {
      out << "matrizz:\n";
      for (auto item : msg.matrizz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rotxyz_Response & msg, bool use_flow_style = false)
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

}  // namespace matrix_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use matrix_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const matrix_interfaces::srv::Rotxyz_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  matrix_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use matrix_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const matrix_interfaces::srv::Rotxyz_Response & msg)
{
  return matrix_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<matrix_interfaces::srv::Rotxyz_Response>()
{
  return "matrix_interfaces::srv::Rotxyz_Response";
}

template<>
inline const char * name<matrix_interfaces::srv::Rotxyz_Response>()
{
  return "matrix_interfaces/srv/Rotxyz_Response";
}

template<>
struct has_fixed_size<matrix_interfaces::srv::Rotxyz_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<matrix_interfaces::srv::Rotxyz_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<matrix_interfaces::srv::Rotxyz_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<matrix_interfaces::srv::Rotxyz>()
{
  return "matrix_interfaces::srv::Rotxyz";
}

template<>
inline const char * name<matrix_interfaces::srv::Rotxyz>()
{
  return "matrix_interfaces/srv/Rotxyz";
}

template<>
struct has_fixed_size<matrix_interfaces::srv::Rotxyz>
  : std::integral_constant<
    bool,
    has_fixed_size<matrix_interfaces::srv::Rotxyz_Request>::value &&
    has_fixed_size<matrix_interfaces::srv::Rotxyz_Response>::value
  >
{
};

template<>
struct has_bounded_size<matrix_interfaces::srv::Rotxyz>
  : std::integral_constant<
    bool,
    has_bounded_size<matrix_interfaces::srv::Rotxyz_Request>::value &&
    has_bounded_size<matrix_interfaces::srv::Rotxyz_Response>::value
  >
{
};

template<>
struct is_service<matrix_interfaces::srv::Rotxyz>
  : std::true_type
{
};

template<>
struct is_service_request<matrix_interfaces::srv::Rotxyz_Request>
  : std::true_type
{
};

template<>
struct is_service_response<matrix_interfaces::srv::Rotxyz_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__TRAITS_HPP_
