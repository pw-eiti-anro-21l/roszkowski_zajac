// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anro4_interface:srv/Interpolation.idl
// generated code does not contain a copyright notice

#ifndef ANRO4_INTERFACE__SRV__DETAIL__INTERPOLATION__BUILDER_HPP_
#define ANRO4_INTERFACE__SRV__DETAIL__INTERPOLATION__BUILDER_HPP_

#include "anro4_interface/srv/detail/interpolation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace anro4_interface
{

namespace srv
{

namespace builder
{

class Init_Interpolation_Request_method
{
public:
  explicit Init_Interpolation_Request_method(::anro4_interface::srv::Interpolation_Request & msg)
  : msg_(msg)
  {}
  ::anro4_interface::srv::Interpolation_Request method(::anro4_interface::srv::Interpolation_Request::_method_type arg)
  {
    msg_.method = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anro4_interface::srv::Interpolation_Request msg_;
};

class Init_Interpolation_Request_interpolation_time
{
public:
  explicit Init_Interpolation_Request_interpolation_time(::anro4_interface::srv::Interpolation_Request & msg)
  : msg_(msg)
  {}
  Init_Interpolation_Request_method interpolation_time(::anro4_interface::srv::Interpolation_Request::_interpolation_time_type arg)
  {
    msg_.interpolation_time = std::move(arg);
    return Init_Interpolation_Request_method(msg_);
  }

private:
  ::anro4_interface::srv::Interpolation_Request msg_;
};

class Init_Interpolation_Request_position_joint3
{
public:
  explicit Init_Interpolation_Request_position_joint3(::anro4_interface::srv::Interpolation_Request & msg)
  : msg_(msg)
  {}
  Init_Interpolation_Request_interpolation_time position_joint3(::anro4_interface::srv::Interpolation_Request::_position_joint3_type arg)
  {
    msg_.position_joint3 = std::move(arg);
    return Init_Interpolation_Request_interpolation_time(msg_);
  }

private:
  ::anro4_interface::srv::Interpolation_Request msg_;
};

class Init_Interpolation_Request_position_joint2
{
public:
  explicit Init_Interpolation_Request_position_joint2(::anro4_interface::srv::Interpolation_Request & msg)
  : msg_(msg)
  {}
  Init_Interpolation_Request_position_joint3 position_joint2(::anro4_interface::srv::Interpolation_Request::_position_joint2_type arg)
  {
    msg_.position_joint2 = std::move(arg);
    return Init_Interpolation_Request_position_joint3(msg_);
  }

private:
  ::anro4_interface::srv::Interpolation_Request msg_;
};

class Init_Interpolation_Request_position_joint1
{
public:
  Init_Interpolation_Request_position_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Interpolation_Request_position_joint2 position_joint1(::anro4_interface::srv::Interpolation_Request::_position_joint1_type arg)
  {
    msg_.position_joint1 = std::move(arg);
    return Init_Interpolation_Request_position_joint2(msg_);
  }

private:
  ::anro4_interface::srv::Interpolation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anro4_interface::srv::Interpolation_Request>()
{
  return anro4_interface::srv::builder::Init_Interpolation_Request_position_joint1();
}

}  // namespace anro4_interface


namespace anro4_interface
{

namespace srv
{

namespace builder
{

class Init_Interpolation_Response_server_feedback
{
public:
  Init_Interpolation_Response_server_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anro4_interface::srv::Interpolation_Response server_feedback(::anro4_interface::srv::Interpolation_Response::_server_feedback_type arg)
  {
    msg_.server_feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anro4_interface::srv::Interpolation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anro4_interface::srv::Interpolation_Response>()
{
  return anro4_interface::srv::builder::Init_Interpolation_Response_server_feedback();
}

}  // namespace anro4_interface

#endif  // ANRO4_INTERFACE__SRV__DETAIL__INTERPOLATION__BUILDER_HPP_
