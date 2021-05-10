// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anro4_interface:srv/Interpolation.idl
// generated code does not contain a copyright notice

#ifndef ANRO4_INTERFACE__SRV__DETAIL__INTERPOLATION__STRUCT_HPP_
#define ANRO4_INTERFACE__SRV__DETAIL__INTERPOLATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__anro4_interface__srv__Interpolation_Request __attribute__((deprecated))
#else
# define DEPRECATED__anro4_interface__srv__Interpolation_Request __declspec(deprecated)
#endif

namespace anro4_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Interpolation_Request_
{
  using Type = Interpolation_Request_<ContainerAllocator>;

  explicit Interpolation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_joint1 = 0.0;
      this->position_joint2 = 0.0;
      this->position_joint3 = 0.0;
      this->interpolation_time = 0.0;
      this->method = "";
    }
  }

  explicit Interpolation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : method(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_joint1 = 0.0;
      this->position_joint2 = 0.0;
      this->position_joint3 = 0.0;
      this->interpolation_time = 0.0;
      this->method = "";
    }
  }

  // field types and members
  using _position_joint1_type =
    double;
  _position_joint1_type position_joint1;
  using _position_joint2_type =
    double;
  _position_joint2_type position_joint2;
  using _position_joint3_type =
    double;
  _position_joint3_type position_joint3;
  using _interpolation_time_type =
    double;
  _interpolation_time_type interpolation_time;
  using _method_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _method_type method;

  // setters for named parameter idiom
  Type & set__position_joint1(
    const double & _arg)
  {
    this->position_joint1 = _arg;
    return *this;
  }
  Type & set__position_joint2(
    const double & _arg)
  {
    this->position_joint2 = _arg;
    return *this;
  }
  Type & set__position_joint3(
    const double & _arg)
  {
    this->position_joint3 = _arg;
    return *this;
  }
  Type & set__interpolation_time(
    const double & _arg)
  {
    this->interpolation_time = _arg;
    return *this;
  }
  Type & set__method(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->method = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anro4_interface::srv::Interpolation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anro4_interface::srv::Interpolation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anro4_interface::srv::Interpolation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anro4_interface::srv::Interpolation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anro4_interface::srv::Interpolation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anro4_interface::srv::Interpolation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anro4_interface::srv::Interpolation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anro4_interface::srv::Interpolation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anro4_interface::srv::Interpolation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anro4_interface::srv::Interpolation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anro4_interface__srv__Interpolation_Request
    std::shared_ptr<anro4_interface::srv::Interpolation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anro4_interface__srv__Interpolation_Request
    std::shared_ptr<anro4_interface::srv::Interpolation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Interpolation_Request_ & other) const
  {
    if (this->position_joint1 != other.position_joint1) {
      return false;
    }
    if (this->position_joint2 != other.position_joint2) {
      return false;
    }
    if (this->position_joint3 != other.position_joint3) {
      return false;
    }
    if (this->interpolation_time != other.interpolation_time) {
      return false;
    }
    if (this->method != other.method) {
      return false;
    }
    return true;
  }
  bool operator!=(const Interpolation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Interpolation_Request_

// alias to use template instance with default allocator
using Interpolation_Request =
  anro4_interface::srv::Interpolation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anro4_interface


#ifndef _WIN32
# define DEPRECATED__anro4_interface__srv__Interpolation_Response __attribute__((deprecated))
#else
# define DEPRECATED__anro4_interface__srv__Interpolation_Response __declspec(deprecated)
#endif

namespace anro4_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Interpolation_Response_
{
  using Type = Interpolation_Response_<ContainerAllocator>;

  explicit Interpolation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_feedback = "";
    }
  }

  explicit Interpolation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : server_feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_feedback = "";
    }
  }

  // field types and members
  using _server_feedback_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _server_feedback_type server_feedback;

  // setters for named parameter idiom
  Type & set__server_feedback(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->server_feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anro4_interface::srv::Interpolation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anro4_interface::srv::Interpolation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anro4_interface::srv::Interpolation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anro4_interface::srv::Interpolation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anro4_interface::srv::Interpolation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anro4_interface::srv::Interpolation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anro4_interface::srv::Interpolation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anro4_interface::srv::Interpolation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anro4_interface::srv::Interpolation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anro4_interface::srv::Interpolation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anro4_interface__srv__Interpolation_Response
    std::shared_ptr<anro4_interface::srv::Interpolation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anro4_interface__srv__Interpolation_Response
    std::shared_ptr<anro4_interface::srv::Interpolation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Interpolation_Response_ & other) const
  {
    if (this->server_feedback != other.server_feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Interpolation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Interpolation_Response_

// alias to use template instance with default allocator
using Interpolation_Response =
  anro4_interface::srv::Interpolation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anro4_interface

namespace anro4_interface
{

namespace srv
{

struct Interpolation
{
  using Request = anro4_interface::srv::Interpolation_Request;
  using Response = anro4_interface::srv::Interpolation_Response;
};

}  // namespace srv

}  // namespace anro4_interface

#endif  // ANRO4_INTERFACE__SRV__DETAIL__INTERPOLATION__STRUCT_HPP_
