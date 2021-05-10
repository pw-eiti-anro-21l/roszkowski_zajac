// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anro4_interface:srv/OpInterpolation.idl
// generated code does not contain a copyright notice

#ifndef ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__STRUCT_H_
#define ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'method'
// Member 'version'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/OpInterpolation in the package anro4_interface.
typedef struct anro4_interface__srv__OpInterpolation_Request
{
  double x_goal;
  double y_goal;
  double z_goal;
  double roll_goal;
  double pitch_goal;
  double yaw_goal;
  double interpolation_time;
  rosidl_runtime_c__String method;
  rosidl_runtime_c__String version;
} anro4_interface__srv__OpInterpolation_Request;

// Struct for a sequence of anro4_interface__srv__OpInterpolation_Request.
typedef struct anro4_interface__srv__OpInterpolation_Request__Sequence
{
  anro4_interface__srv__OpInterpolation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anro4_interface__srv__OpInterpolation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'server_feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/OpInterpolation in the package anro4_interface.
typedef struct anro4_interface__srv__OpInterpolation_Response
{
  rosidl_runtime_c__String server_feedback;
} anro4_interface__srv__OpInterpolation_Response;

// Struct for a sequence of anro4_interface__srv__OpInterpolation_Response.
typedef struct anro4_interface__srv__OpInterpolation_Response__Sequence
{
  anro4_interface__srv__OpInterpolation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anro4_interface__srv__OpInterpolation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__STRUCT_H_
