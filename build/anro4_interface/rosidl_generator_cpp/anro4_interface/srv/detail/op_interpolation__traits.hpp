// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anro4_interface:srv/OpInterpolation.idl
// generated code does not contain a copyright notice

#ifndef ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__TRAITS_HPP_
#define ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__TRAITS_HPP_

#include "anro4_interface/srv/detail/op_interpolation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anro4_interface::srv::OpInterpolation_Request>()
{
  return "anro4_interface::srv::OpInterpolation_Request";
}

template<>
inline const char * name<anro4_interface::srv::OpInterpolation_Request>()
{
  return "anro4_interface/srv/OpInterpolation_Request";
}

template<>
struct has_fixed_size<anro4_interface::srv::OpInterpolation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anro4_interface::srv::OpInterpolation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anro4_interface::srv::OpInterpolation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anro4_interface::srv::OpInterpolation_Response>()
{
  return "anro4_interface::srv::OpInterpolation_Response";
}

template<>
inline const char * name<anro4_interface::srv::OpInterpolation_Response>()
{
  return "anro4_interface/srv/OpInterpolation_Response";
}

template<>
struct has_fixed_size<anro4_interface::srv::OpInterpolation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anro4_interface::srv::OpInterpolation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anro4_interface::srv::OpInterpolation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anro4_interface::srv::OpInterpolation>()
{
  return "anro4_interface::srv::OpInterpolation";
}

template<>
inline const char * name<anro4_interface::srv::OpInterpolation>()
{
  return "anro4_interface/srv/OpInterpolation";
}

template<>
struct has_fixed_size<anro4_interface::srv::OpInterpolation>
  : std::integral_constant<
    bool,
    has_fixed_size<anro4_interface::srv::OpInterpolation_Request>::value &&
    has_fixed_size<anro4_interface::srv::OpInterpolation_Response>::value
  >
{
};

template<>
struct has_bounded_size<anro4_interface::srv::OpInterpolation>
  : std::integral_constant<
    bool,
    has_bounded_size<anro4_interface::srv::OpInterpolation_Request>::value &&
    has_bounded_size<anro4_interface::srv::OpInterpolation_Response>::value
  >
{
};

template<>
struct is_service<anro4_interface::srv::OpInterpolation>
  : std::true_type
{
};

template<>
struct is_service_request<anro4_interface::srv::OpInterpolation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anro4_interface::srv::OpInterpolation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__TRAITS_HPP_
