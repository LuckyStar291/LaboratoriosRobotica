// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from matrix_interfaces:srv/Rotxyz.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__BUILDER_HPP_
#define MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "matrix_interfaces/srv/detail/rotxyz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace matrix_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rotxyz_Request_pz
{
public:
  explicit Init_Rotxyz_Request_pz(::matrix_interfaces::srv::Rotxyz_Request & msg)
  : msg_(msg)
  {}
  ::matrix_interfaces::srv::Rotxyz_Request pz(::matrix_interfaces::srv::Rotxyz_Request::_pz_type arg)
  {
    msg_.pz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::matrix_interfaces::srv::Rotxyz_Request msg_;
};

class Init_Rotxyz_Request_py
{
public:
  explicit Init_Rotxyz_Request_py(::matrix_interfaces::srv::Rotxyz_Request & msg)
  : msg_(msg)
  {}
  Init_Rotxyz_Request_pz py(::matrix_interfaces::srv::Rotxyz_Request::_py_type arg)
  {
    msg_.py = std::move(arg);
    return Init_Rotxyz_Request_pz(msg_);
  }

private:
  ::matrix_interfaces::srv::Rotxyz_Request msg_;
};

class Init_Rotxyz_Request_px
{
public:
  Init_Rotxyz_Request_px()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rotxyz_Request_py px(::matrix_interfaces::srv::Rotxyz_Request::_px_type arg)
  {
    msg_.px = std::move(arg);
    return Init_Rotxyz_Request_py(msg_);
  }

private:
  ::matrix_interfaces::srv::Rotxyz_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::matrix_interfaces::srv::Rotxyz_Request>()
{
  return matrix_interfaces::srv::builder::Init_Rotxyz_Request_px();
}

}  // namespace matrix_interfaces


namespace matrix_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rotxyz_Response_matrizz
{
public:
  Init_Rotxyz_Response_matrizz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::matrix_interfaces::srv::Rotxyz_Response matrizz(::matrix_interfaces::srv::Rotxyz_Response::_matrizz_type arg)
  {
    msg_.matrizz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::matrix_interfaces::srv::Rotxyz_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::matrix_interfaces::srv::Rotxyz_Response>()
{
  return matrix_interfaces::srv::builder::Init_Rotxyz_Response_matrizz();
}

}  // namespace matrix_interfaces

#endif  // MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__BUILDER_HPP_
