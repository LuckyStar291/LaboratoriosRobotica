// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ucb_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_
#define UCB_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ucb_interfaces/srv/detail/rot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ucb_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rot_Request_pz
{
public:
  explicit Init_Rot_Request_pz(::ucb_interfaces::srv::Rot_Request & msg)
  : msg_(msg)
  {}
  ::ucb_interfaces::srv::Rot_Request pz(::ucb_interfaces::srv::Rot_Request::_pz_type arg)
  {
    msg_.pz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interfaces::srv::Rot_Request msg_;
};

class Init_Rot_Request_py
{
public:
  explicit Init_Rot_Request_py(::ucb_interfaces::srv::Rot_Request & msg)
  : msg_(msg)
  {}
  Init_Rot_Request_pz py(::ucb_interfaces::srv::Rot_Request::_py_type arg)
  {
    msg_.py = std::move(arg);
    return Init_Rot_Request_pz(msg_);
  }

private:
  ::ucb_interfaces::srv::Rot_Request msg_;
};

class Init_Rot_Request_px
{
public:
  explicit Init_Rot_Request_px(::ucb_interfaces::srv::Rot_Request & msg)
  : msg_(msg)
  {}
  Init_Rot_Request_py px(::ucb_interfaces::srv::Rot_Request::_px_type arg)
  {
    msg_.px = std::move(arg);
    return Init_Rot_Request_py(msg_);
  }

private:
  ::ucb_interfaces::srv::Rot_Request msg_;
};

class Init_Rot_Request_angle
{
public:
  Init_Rot_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rot_Request_px angle(::ucb_interfaces::srv::Rot_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Rot_Request_px(msg_);
  }

private:
  ::ucb_interfaces::srv::Rot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interfaces::srv::Rot_Request>()
{
  return ucb_interfaces::srv::builder::Init_Rot_Request_angle();
}

}  // namespace ucb_interfaces


namespace ucb_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rot_Response_fz
{
public:
  explicit Init_Rot_Response_fz(::ucb_interfaces::srv::Rot_Response & msg)
  : msg_(msg)
  {}
  ::ucb_interfaces::srv::Rot_Response fz(::ucb_interfaces::srv::Rot_Response::_fz_type arg)
  {
    msg_.fz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interfaces::srv::Rot_Response msg_;
};

class Init_Rot_Response_fy
{
public:
  explicit Init_Rot_Response_fy(::ucb_interfaces::srv::Rot_Response & msg)
  : msg_(msg)
  {}
  Init_Rot_Response_fz fy(::ucb_interfaces::srv::Rot_Response::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_Rot_Response_fz(msg_);
  }

private:
  ::ucb_interfaces::srv::Rot_Response msg_;
};

class Init_Rot_Response_fx
{
public:
  Init_Rot_Response_fx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rot_Response_fy fx(::ucb_interfaces::srv::Rot_Response::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_Rot_Response_fy(msg_);
  }

private:
  ::ucb_interfaces::srv::Rot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interfaces::srv::Rot_Response>()
{
  return ucb_interfaces::srv::builder::Init_Rot_Response_fx();
}

}  // namespace ucb_interfaces

#endif  // UCB_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_
