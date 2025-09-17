// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from matrix_interfaces:srv/Rotxyz.idl
// generated code does not contain a copyright notice

#ifndef MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__STRUCT_HPP_
#define MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__matrix_interfaces__srv__Rotxyz_Request __attribute__((deprecated))
#else
# define DEPRECATED__matrix_interfaces__srv__Rotxyz_Request __declspec(deprecated)
#endif

namespace matrix_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Rotxyz_Request_
{
  using Type = Rotxyz_Request_<ContainerAllocator>;

  explicit Rotxyz_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->px = 0ll;
      this->py = 0ll;
      this->pz = 0ll;
    }
  }

  explicit Rotxyz_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->px = 0ll;
      this->py = 0ll;
      this->pz = 0ll;
    }
  }

  // field types and members
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
    matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__matrix_interfaces__srv__Rotxyz_Request
    std::shared_ptr<matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__matrix_interfaces__srv__Rotxyz_Request
    std::shared_ptr<matrix_interfaces::srv::Rotxyz_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rotxyz_Request_ & other) const
  {
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
  bool operator!=(const Rotxyz_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rotxyz_Request_

// alias to use template instance with default allocator
using Rotxyz_Request =
  matrix_interfaces::srv::Rotxyz_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace matrix_interfaces


#ifndef _WIN32
# define DEPRECATED__matrix_interfaces__srv__Rotxyz_Response __attribute__((deprecated))
#else
# define DEPRECATED__matrix_interfaces__srv__Rotxyz_Response __declspec(deprecated)
#endif

namespace matrix_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Rotxyz_Response_
{
  using Type = Rotxyz_Response_<ContainerAllocator>;

  explicit Rotxyz_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Rotxyz_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _matrizz_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _matrizz_type matrizz;

  // setters for named parameter idiom
  Type & set__matrizz(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->matrizz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__matrix_interfaces__srv__Rotxyz_Response
    std::shared_ptr<matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__matrix_interfaces__srv__Rotxyz_Response
    std::shared_ptr<matrix_interfaces::srv::Rotxyz_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rotxyz_Response_ & other) const
  {
    if (this->matrizz != other.matrizz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rotxyz_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rotxyz_Response_

// alias to use template instance with default allocator
using Rotxyz_Response =
  matrix_interfaces::srv::Rotxyz_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace matrix_interfaces

namespace matrix_interfaces
{

namespace srv
{

struct Rotxyz
{
  using Request = matrix_interfaces::srv::Rotxyz_Request;
  using Response = matrix_interfaces::srv::Rotxyz_Response;
};

}  // namespace srv

}  // namespace matrix_interfaces

#endif  // MATRIX_INTERFACES__SRV__DETAIL__ROTXYZ__STRUCT_HPP_
