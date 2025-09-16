// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ucb_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACES__SRV__DETAIL__ROT__STRUCT_HPP_
#define UCB_INTERFACES__SRV__DETAIL__ROT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ucb_interfaces__srv__Rot_Request __attribute__((deprecated))
#else
# define DEPRECATED__ucb_interfaces__srv__Rot_Request __declspec(deprecated)
#endif

namespace ucb_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Rot_Request_
{
  using Type = Rot_Request_<ContainerAllocator>;

  explicit Rot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0ll;
      this->px = 0ll;
      this->py = 0ll;
      this->pz = 0ll;
    }
  }

  explicit Rot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0ll;
      this->px = 0ll;
      this->py = 0ll;
      this->pz = 0ll;
    }
  }

  // field types and members
  using _angle_type =
    int64_t;
  _angle_type angle;
  using _px_type =
    int64_t;
  _px_type px;
  using _py_type =
    int64_t;
  _py_type py;
  using _pz_type =
    int64_t;
  _pz_type pz;

  // setters for named parameter idiom
  Type & set__angle(
    const int64_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__px(
    const int64_t & _arg)
  {
    this->px = _arg;
    return *this;
  }
  Type & set__py(
    const int64_t & _arg)
  {
    this->py = _arg;
    return *this;
  }
  Type & set__pz(
    const int64_t & _arg)
  {
    this->pz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ucb_interfaces::srv::Rot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ucb_interfaces::srv::Rot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ucb_interfaces::srv::Rot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ucb_interfaces::srv::Rot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ucb_interfaces::srv::Rot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ucb_interfaces::srv::Rot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ucb_interfaces::srv::Rot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ucb_interfaces::srv::Rot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ucb_interfaces::srv::Rot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ucb_interfaces::srv::Rot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ucb_interfaces__srv__Rot_Request
    std::shared_ptr<ucb_interfaces::srv::Rot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ucb_interfaces__srv__Rot_Request
    std::shared_ptr<ucb_interfaces::srv::Rot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rot_Request_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    if (this->px != other.px) {
      return false;
    }
    if (this->py != other.py) {
      return false;
    }
    if (this->pz != other.pz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rot_Request_

// alias to use template instance with default allocator
using Rot_Request =
  ucb_interfaces::srv::Rot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ucb_interfaces


#ifndef _WIN32
# define DEPRECATED__ucb_interfaces__srv__Rot_Response __attribute__((deprecated))
#else
# define DEPRECATED__ucb_interfaces__srv__Rot_Response __declspec(deprecated)
#endif

namespace ucb_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Rot_Response_
{
  using Type = Rot_Response_<ContainerAllocator>;

  explicit Rot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fx = 0.0;
      this->fy = 0.0;
      this->fz = 0.0;
    }
  }

  explicit Rot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fx = 0.0;
      this->fy = 0.0;
      this->fz = 0.0;
    }
  }

  // field types and members
  using _fx_type =
    double;
  _fx_type fx;
  using _fy_type =
    double;
  _fy_type fy;
  using _fz_type =
    double;
  _fz_type fz;

  // setters for named parameter idiom
  Type & set__fx(
    const double & _arg)
  {
    this->fx = _arg;
    return *this;
  }
  Type & set__fy(
    const double & _arg)
  {
    this->fy = _arg;
    return *this;
  }
  Type & set__fz(
    const double & _arg)
  {
    this->fz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ucb_interfaces::srv::Rot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ucb_interfaces::srv::Rot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ucb_interfaces::srv::Rot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ucb_interfaces::srv::Rot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ucb_interfaces::srv::Rot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ucb_interfaces::srv::Rot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ucb_interfaces::srv::Rot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ucb_interfaces::srv::Rot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ucb_interfaces::srv::Rot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ucb_interfaces::srv::Rot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ucb_interfaces__srv__Rot_Response
    std::shared_ptr<ucb_interfaces::srv::Rot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ucb_interfaces__srv__Rot_Response
    std::shared_ptr<ucb_interfaces::srv::Rot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rot_Response_ & other) const
  {
    if (this->fx != other.fx) {
      return false;
    }
    if (this->fy != other.fy) {
      return false;
    }
    if (this->fz != other.fz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rot_Response_

// alias to use template instance with default allocator
using Rot_Response =
  ucb_interfaces::srv::Rot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ucb_interfaces

namespace ucb_interfaces
{

namespace srv
{

struct Rot
{
  using Request = ucb_interfaces::srv::Rot_Request;
  using Response = ucb_interfaces::srv::Rot_Response;
};

}  // namespace srv

}  // namespace ucb_interfaces

#endif  // UCB_INTERFACES__SRV__DETAIL__ROT__STRUCT_HPP_
