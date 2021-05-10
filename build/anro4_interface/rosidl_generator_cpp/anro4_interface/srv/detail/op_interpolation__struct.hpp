// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anro4_interface:srv/OpInterpolation.idl
// generated code does not contain a copyright notice

#ifndef ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__STRUCT_HPP_
#define ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__anro4_interface__srv__OpInterpolation_Request __attribute__((deprecated))
#else
# define DEPRECATED__anro4_interface__srv__OpInterpolation_Request __declspec(deprecated)
#endif

namespace anro4_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpInterpolation_Request_
{
  using Type = OpInterpolation_Request_<ContainerAllocator>;

  explicit OpInterpolation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_goal = 0.0;
      this->y_goal = 0.0;
      this->z_goal = 0.0;
      this->roll_goal = 0.0;
      this->pitch_goal = 0.0;
      this->yaw_goal = 0.0;
      this->interpolation_time = 0.0;
      this->method = "";
      this->version = "";
    }
  }

  explicit OpInterpolation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : method(_alloc),
    version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_goal = 0.0;
      this->y_goal = 0.0;
      this->z_goal = 0.0;
      this->roll_goal = 0.0;
      this->pitch_goal = 0.0;
      this->yaw_goal = 0.0;
      this->interpolation_time = 0.0;
      this->method = "";
      this->version = "";
    }
  }

  // field types and members
  using _x_goal_type =
    double;
  _x_goal_type x_goal;
  using _y_goal_type =
    double;
  _y_goal_type y_goal;
  using _z_goal_type =
    double;
  _z_goal_type z_goal;
  using _roll_goal_type =
    double;
  _roll_goal_type roll_goal;
  using _pitch_goal_type =
    double;
  _pitch_goal_type pitch_goal;
  using _yaw_goal_type =
    double;
  _yaw_goal_type yaw_goal;
  using _interpolation_time_type =
    double;
  _interpolation_time_type interpolation_time;
  using _method_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _method_type method;
  using _version_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _version_type version;

  // setters for named parameter idiom
  Type & set__x_goal(
    const double & _arg)
  {
    this->x_goal = _arg;
    return *this;
  }
  Type & set__y_goal(
    const double & _arg)
  {
    this->y_goal = _arg;
    return *this;
  }
  Type & set__z_goal(
    const double & _arg)
  {
    this->z_goal = _arg;
    return *this;
  }
  Type & set__roll_goal(
    const double & _arg)
  {
    this->roll_goal = _arg;
    return *this;
  }
  Type & set__pitch_goal(
    const double & _arg)
  {
    this->pitch_goal = _arg;
    return *this;
  }
  Type & set__yaw_goal(
    const double & _arg)
  {
    this->yaw_goal = _arg;
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
  Type & set__version(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anro4_interface__srv__OpInterpolation_Request
    std::shared_ptr<anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anro4_interface__srv__OpInterpolation_Request
    std::shared_ptr<anro4_interface::srv::OpInterpolation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpInterpolation_Request_ & other) const
  {
    if (this->x_goal != other.x_goal) {
      return false;
    }
    if (this->y_goal != other.y_goal) {
      return false;
    }
    if (this->z_goal != other.z_goal) {
      return false;
    }
    if (this->roll_goal != other.roll_goal) {
      return false;
    }
    if (this->pitch_goal != other.pitch_goal) {
      return false;
    }
    if (this->yaw_goal != other.yaw_goal) {
      return false;
    }
    if (this->interpolation_time != other.interpolation_time) {
      return false;
    }
    if (this->method != other.method) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpInterpolation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpInterpolation_Request_

// alias to use template instance with default allocator
using OpInterpolation_Request =
  anro4_interface::srv::OpInterpolation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anro4_interface


#ifndef _WIN32
# define DEPRECATED__anro4_interface__srv__OpInterpolation_Response __attribute__((deprecated))
#else
# define DEPRECATED__anro4_interface__srv__OpInterpolation_Response __declspec(deprecated)
#endif

namespace anro4_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpInterpolation_Response_
{
  using Type = OpInterpolation_Response_<ContainerAllocator>;

  explicit OpInterpolation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_feedback = "";
    }
  }

  explicit OpInterpolation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anro4_interface__srv__OpInterpolation_Response
    std::shared_ptr<anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anro4_interface__srv__OpInterpolation_Response
    std::shared_ptr<anro4_interface::srv::OpInterpolation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpInterpolation_Response_ & other) const
  {
    if (this->server_feedback != other.server_feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpInterpolation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpInterpolation_Response_

// alias to use template instance with default allocator
using OpInterpolation_Response =
  anro4_interface::srv::OpInterpolation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anro4_interface

namespace anro4_interface
{

namespace srv
{

struct OpInterpolation
{
  using Request = anro4_interface::srv::OpInterpolation_Request;
  using Response = anro4_interface::srv::OpInterpolation_Response;
};

}  // namespace srv

}  // namespace anro4_interface

#endif  // ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__STRUCT_HPP_
