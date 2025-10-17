// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perro_interfaces:srv/Rot.idl
// generated code does not contain a copyright notice

#ifndef PERRO_INTERFACES__SRV__DETAIL__ROT__STRUCT_HPP_
#define PERRO_INTERFACES__SRV__DETAIL__ROT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__perro_interfaces__srv__Rot_Request __attribute__((deprecated))
#else
# define DEPRECATED__perro_interfaces__srv__Rot_Request __declspec(deprecated)
#endif

namespace perro_interfaces
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
      this->th1_deg = 0.0f;
      this->th2_deg = 0.0f;
      this->th3_deg = 0.0f;
    }
  }

  explicit Rot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->th1_deg = 0.0f;
      this->th2_deg = 0.0f;
      this->th3_deg = 0.0f;
    }
  }

  // field types and members
  using _th1_deg_type =
    float;
  _th1_deg_type th1_deg;
  using _th2_deg_type =
    float;
  _th2_deg_type th2_deg;
  using _th3_deg_type =
    float;
  _th3_deg_type th3_deg;

  // setters for named parameter idiom
  Type & set__th1_deg(
    const float & _arg)
  {
    this->th1_deg = _arg;
    return *this;
  }
  Type & set__th2_deg(
    const float & _arg)
  {
    this->th2_deg = _arg;
    return *this;
  }
  Type & set__th3_deg(
    const float & _arg)
  {
    this->th3_deg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perro_interfaces::srv::Rot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const perro_interfaces::srv::Rot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perro_interfaces::srv::Rot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perro_interfaces::srv::Rot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perro_interfaces::srv::Rot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perro_interfaces::srv::Rot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perro_interfaces::srv::Rot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perro_interfaces::srv::Rot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perro_interfaces::srv::Rot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perro_interfaces::srv::Rot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perro_interfaces__srv__Rot_Request
    std::shared_ptr<perro_interfaces::srv::Rot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perro_interfaces__srv__Rot_Request
    std::shared_ptr<perro_interfaces::srv::Rot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rot_Request_ & other) const
  {
    if (this->th1_deg != other.th1_deg) {
      return false;
    }
    if (this->th2_deg != other.th2_deg) {
      return false;
    }
    if (this->th3_deg != other.th3_deg) {
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
  perro_interfaces::srv::Rot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace perro_interfaces


#ifndef _WIN32
# define DEPRECATED__perro_interfaces__srv__Rot_Response __attribute__((deprecated))
#else
# define DEPRECATED__perro_interfaces__srv__Rot_Response __declspec(deprecated)
#endif

namespace perro_interfaces
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
      this->x_mm = 0.0f;
      this->y_mm = 0.0f;
      this->z_mm = 0.0f;
    }
  }

  explicit Rot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_mm = 0.0f;
      this->y_mm = 0.0f;
      this->z_mm = 0.0f;
    }
  }

  // field types and members
  using _x_mm_type =
    float;
  _x_mm_type x_mm;
  using _y_mm_type =
    float;
  _y_mm_type y_mm;
  using _z_mm_type =
    float;
  _z_mm_type z_mm;

  // setters for named parameter idiom
  Type & set__x_mm(
    const float & _arg)
  {
    this->x_mm = _arg;
    return *this;
  }
  Type & set__y_mm(
    const float & _arg)
  {
    this->y_mm = _arg;
    return *this;
  }
  Type & set__z_mm(
    const float & _arg)
  {
    this->z_mm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perro_interfaces::srv::Rot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const perro_interfaces::srv::Rot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perro_interfaces::srv::Rot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perro_interfaces::srv::Rot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perro_interfaces::srv::Rot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perro_interfaces::srv::Rot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perro_interfaces::srv::Rot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perro_interfaces::srv::Rot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perro_interfaces::srv::Rot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perro_interfaces::srv::Rot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perro_interfaces__srv__Rot_Response
    std::shared_ptr<perro_interfaces::srv::Rot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perro_interfaces__srv__Rot_Response
    std::shared_ptr<perro_interfaces::srv::Rot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rot_Response_ & other) const
  {
    if (this->x_mm != other.x_mm) {
      return false;
    }
    if (this->y_mm != other.y_mm) {
      return false;
    }
    if (this->z_mm != other.z_mm) {
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
  perro_interfaces::srv::Rot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace perro_interfaces

namespace perro_interfaces
{

namespace srv
{

struct Rot
{
  using Request = perro_interfaces::srv::Rot_Request;
  using Response = perro_interfaces::srv::Rot_Response;
};

}  // namespace srv

}  // namespace perro_interfaces

#endif  // PERRO_INTERFACES__SRV__DETAIL__ROT__STRUCT_HPP_
