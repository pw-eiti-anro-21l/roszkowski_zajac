// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anro4_interface:srv/OpInterpolation.idl
// generated code does not contain a copyright notice

#ifndef ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__BUILDER_HPP_
#define ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__BUILDER_HPP_

#include "anro4_interface/srv/detail/op_interpolation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace anro4_interface
{

namespace srv
{

namespace builder
{

class Init_OpInterpolation_Request_version
{
public:
  explicit Init_OpInterpolation_Request_version(::anro4_interface::srv::OpInterpolation_Request & msg)
  : msg_(msg)
  {}
  ::anro4_interface::srv::OpInterpolation_Request version(::anro4_interface::srv::OpInterpolation_Request::_version_type arg)
  {
    msg_.version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

class Init_OpInterpolation_Request_method
{
public:
  explicit Init_OpInterpolation_Request_method(::anro4_interface::srv::OpInterpolation_Request & msg)
  : msg_(msg)
  {}
  Init_OpInterpolation_Request_version method(::anro4_interface::srv::OpInterpolation_Request::_method_type arg)
  {
    msg_.method = std::move(arg);
    return Init_OpInterpolation_Request_version(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

class Init_OpInterpolation_Request_interpolation_time
{
public:
  explicit Init_OpInterpolation_Request_interpolation_time(::anro4_interface::srv::OpInterpolation_Request & msg)
  : msg_(msg)
  {}
  Init_OpInterpolation_Request_method interpolation_time(::anro4_interface::srv::OpInterpolation_Request::_interpolation_time_type arg)
  {
    msg_.interpolation_time = std::move(arg);
    return Init_OpInterpolation_Request_method(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

class Init_OpInterpolation_Request_yaw_goal
{
public:
  explicit Init_OpInterpolation_Request_yaw_goal(::anro4_interface::srv::OpInterpolation_Request & msg)
  : msg_(msg)
  {}
  Init_OpInterpolation_Request_interpolation_time yaw_goal(::anro4_interface::srv::OpInterpolation_Request::_yaw_goal_type arg)
  {
    msg_.yaw_goal = std::move(arg);
    return Init_OpInterpolation_Request_interpolation_time(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

class Init_OpInterpolation_Request_pitch_goal
{
public:
  explicit Init_OpInterpolation_Request_pitch_goal(::anro4_interface::srv::OpInterpolation_Request & msg)
  : msg_(msg)
  {}
  Init_OpInterpolation_Request_yaw_goal pitch_goal(::anro4_interface::srv::OpInterpolation_Request::_pitch_goal_type arg)
  {
    msg_.pitch_goal = std::move(arg);
    return Init_OpInterpolation_Request_yaw_goal(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

class Init_OpInterpolation_Request_roll_goal
{
public:
  explicit Init_OpInterpolation_Request_roll_goal(::anro4_interface::srv::OpInterpolation_Request & msg)
  : msg_(msg)
  {}
  Init_OpInterpolation_Request_pitch_goal roll_goal(::anro4_interface::srv::OpInterpolation_Request::_roll_goal_type arg)
  {
    msg_.roll_goal = std::move(arg);
    return Init_OpInterpolation_Request_pitch_goal(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

class Init_OpInterpolation_Request_z_goal
{
public:
  explicit Init_OpInterpolation_Request_z_goal(::anro4_interface::srv::OpInterpolation_Request & msg)
  : msg_(msg)
  {}
  Init_OpInterpolation_Request_roll_goal z_goal(::anro4_interface::srv::OpInterpolation_Request::_z_goal_type arg)
  {
    msg_.z_goal = std::move(arg);
    return Init_OpInterpolation_Request_roll_goal(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

class Init_OpInterpolation_Request_y_goal
{
public:
  explicit Init_OpInterpolation_Request_y_goal(::anro4_interface::srv::OpInterpolation_Request & msg)
  : msg_(msg)
  {}
  Init_OpInterpolation_Request_z_goal y_goal(::anro4_interface::srv::OpInterpolation_Request::_y_goal_type arg)
  {
    msg_.y_goal = std::move(arg);
    return Init_OpInterpolation_Request_z_goal(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

class Init_OpInterpolation_Request_x_goal
{
public:
  Init_OpInterpolation_Request_x_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpInterpolation_Request_y_goal x_goal(::anro4_interface::srv::OpInterpolation_Request::_x_goal_type arg)
  {
    msg_.x_goal = std::move(arg);
    return Init_OpInterpolation_Request_y_goal(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anro4_interface::srv::OpInterpolation_Request>()
{
  return anro4_interface::srv::builder::Init_OpInterpolation_Request_x_goal();
}

}  // namespace anro4_interface


namespace anro4_interface
{

namespace srv
{

namespace builder
{

class Init_OpInterpolation_Response_server_feedback
{
public:
  Init_OpInterpolation_Response_server_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anro4_interface::srv::OpInterpolation_Response server_feedback(::anro4_interface::srv::OpInterpolation_Response::_server_feedback_type arg)
  {
    msg_.server_feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anro4_interface::srv::OpInterpolation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anro4_interface::srv::OpInterpolation_Response>()
{
  return anro4_interface::srv::builder::Init_OpInterpolation_Response_server_feedback();
}

}  // namespace anro4_interface

#endif  // ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__BUILDER_HPP_
