// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_
#define TEST_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test_interfaces/srv/detail/rot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rot_Request_pz
{
public:
  explicit Init_Rot_Request_pz(::test_interfaces::srv::Rot_Request & msg)
  : msg_(msg)
  {}
  ::test_interfaces::srv::Rot_Request pz(::test_interfaces::srv::Rot_Request::_pz_type arg)
  {
    msg_.pz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::srv::Rot_Request msg_;
};

class Init_Rot_Request_py
{
public:
  explicit Init_Rot_Request_py(::test_interfaces::srv::Rot_Request & msg)
  : msg_(msg)
  {}
  Init_Rot_Request_pz py(::test_interfaces::srv::Rot_Request::_py_type arg)
  {
    msg_.py = std::move(arg);
    return Init_Rot_Request_pz(msg_);
  }

private:
  ::test_interfaces::srv::Rot_Request msg_;
};

class Init_Rot_Request_px
{
public:
  explicit Init_Rot_Request_px(::test_interfaces::srv::Rot_Request & msg)
  : msg_(msg)
  {}
  Init_Rot_Request_py px(::test_interfaces::srv::Rot_Request::_px_type arg)
  {
    msg_.px = std::move(arg);
    return Init_Rot_Request_py(msg_);
  }

private:
  ::test_interfaces::srv::Rot_Request msg_;
};

class Init_Rot_Request_angle
{
public:
  Init_Rot_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rot_Request_px angle(::test_interfaces::srv::Rot_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Rot_Request_px(msg_);
  }

private:
  ::test_interfaces::srv::Rot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::srv::Rot_Request>()
{
  return test_interfaces::srv::builder::Init_Rot_Request_angle();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rot_Response_fz
{
public:
  explicit Init_Rot_Response_fz(::test_interfaces::srv::Rot_Response & msg)
  : msg_(msg)
  {}
  ::test_interfaces::srv::Rot_Response fz(::test_interfaces::srv::Rot_Response::_fz_type arg)
  {
    msg_.fz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::srv::Rot_Response msg_;
};

class Init_Rot_Response_fy
{
public:
  explicit Init_Rot_Response_fy(::test_interfaces::srv::Rot_Response & msg)
  : msg_(msg)
  {}
  Init_Rot_Response_fz fy(::test_interfaces::srv::Rot_Response::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_Rot_Response_fz(msg_);
  }

private:
  ::test_interfaces::srv::Rot_Response msg_;
};

class Init_Rot_Response_fx
{
public:
  Init_Rot_Response_fx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rot_Response_fy fx(::test_interfaces::srv::Rot_Response::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_Rot_Response_fy(msg_);
  }

private:
  ::test_interfaces::srv::Rot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::srv::Rot_Response>()
{
  return test_interfaces::srv::builder::Init_Rot_Response_fx();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__SRV__DETAIL__ROT__BUILDER_HPP_
