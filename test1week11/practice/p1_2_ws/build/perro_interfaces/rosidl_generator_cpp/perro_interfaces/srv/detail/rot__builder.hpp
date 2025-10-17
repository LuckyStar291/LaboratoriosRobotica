// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perro_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef PERRO_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_
#define PERRO_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perro_interfaces/srv/detail/rot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perro_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rot_Request_th3_deg
{
public:
  explicit Init_Rot_Request_th3_deg(::perro_interfaces::srv::Rot_Request & msg)
  : msg_(msg)
  {}
  ::perro_interfaces::srv::Rot_Request th3_deg(::perro_interfaces::srv::Rot_Request::_th3_deg_type arg)
  {
    msg_.th3_deg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perro_interfaces::srv::Rot_Request msg_;
};

class Init_Rot_Request_th2_deg
{
public:
  explicit Init_Rot_Request_th2_deg(::perro_interfaces::srv::Rot_Request & msg)
  : msg_(msg)
  {}
  Init_Rot_Request_th3_deg th2_deg(::perro_interfaces::srv::Rot_Request::_th2_deg_type arg)
  {
    msg_.th2_deg = std::move(arg);
    return Init_Rot_Request_th3_deg(msg_);
  }

private:
  ::perro_interfaces::srv::Rot_Request msg_;
};

class Init_Rot_Request_th1_deg
{
public:
  Init_Rot_Request_th1_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rot_Request_th2_deg th1_deg(::perro_interfaces::srv::Rot_Request::_th1_deg_type arg)
  {
    msg_.th1_deg = std::move(arg);
    return Init_Rot_Request_th2_deg(msg_);
  }

private:
  ::perro_interfaces::srv::Rot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::perro_interfaces::srv::Rot_Request>()
{
  return perro_interfaces::srv::builder::Init_Rot_Request_th1_deg();
}

}  // namespace perro_interfaces


namespace perro_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rot_Response_z_mm
{
public:
  explicit Init_Rot_Response_z_mm(::perro_interfaces::srv::Rot_Response & msg)
  : msg_(msg)
  {}
  ::perro_interfaces::srv::Rot_Response z_mm(::perro_interfaces::srv::Rot_Response::_z_mm_type arg)
  {
    msg_.z_mm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perro_interfaces::srv::Rot_Response msg_;
};

class Init_Rot_Response_y_mm
{
public:
  explicit Init_Rot_Response_y_mm(::perro_interfaces::srv::Rot_Response & msg)
  : msg_(msg)
  {}
  Init_Rot_Response_z_mm y_mm(::perro_interfaces::srv::Rot_Response::_y_mm_type arg)
  {
    msg_.y_mm = std::move(arg);
    return Init_Rot_Response_z_mm(msg_);
  }

private:
  ::perro_interfaces::srv::Rot_Response msg_;
};

class Init_Rot_Response_x_mm
{
public:
  Init_Rot_Response_x_mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rot_Response_y_mm x_mm(::perro_interfaces::srv::Rot_Response::_x_mm_type arg)
  {
    msg_.x_mm = std::move(arg);
    return Init_Rot_Response_y_mm(msg_);
  }

private:
  ::perro_interfaces::srv::Rot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::perro_interfaces::srv::Rot_Response>()
{
  return perro_interfaces::srv::builder::Init_Rot_Response_x_mm();
}

}  // namespace perro_interfaces

#endif  // PERRO_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_
