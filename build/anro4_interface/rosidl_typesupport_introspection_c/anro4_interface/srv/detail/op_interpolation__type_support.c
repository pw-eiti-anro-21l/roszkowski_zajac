// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anro4_interface:srv/OpInterpolation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anro4_interface/srv/detail/op_interpolation__rosidl_typesupport_introspection_c.h"
#include "anro4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anro4_interface/srv/detail/op_interpolation__functions.h"
#include "anro4_interface/srv/detail/op_interpolation__struct.h"


// Include directives for member types
// Member `method`
// Member `version`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anro4_interface__srv__OpInterpolation_Request__init(message_memory);
}

void OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_fini_function(void * message_memory)
{
  anro4_interface__srv__OpInterpolation_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_member_array[9] = {
  {
    "x_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, x_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, y_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, z_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, roll_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, pitch_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, yaw_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interpolation_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, interpolation_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "method",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, method),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Request, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_members = {
  "anro4_interface__srv",  // message namespace
  "OpInterpolation_Request",  // message name
  9,  // number of fields
  sizeof(anro4_interface__srv__OpInterpolation_Request),
  OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_member_array,  // message members
  OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_type_support_handle = {
  0,
  &OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anro4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, OpInterpolation_Request)() {
  if (!OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_type_support_handle.typesupport_identifier) {
    OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OpInterpolation_Request__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "anro4_interface/srv/detail/op_interpolation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "anro4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "anro4_interface/srv/detail/op_interpolation__functions.h"
// already included above
// #include "anro4_interface/srv/detail/op_interpolation__struct.h"


// Include directives for member types
// Member `server_feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anro4_interface__srv__OpInterpolation_Response__init(message_memory);
}

void OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_fini_function(void * message_memory)
{
  anro4_interface__srv__OpInterpolation_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_member_array[1] = {
  {
    "server_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__OpInterpolation_Response, server_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_members = {
  "anro4_interface__srv",  // message namespace
  "OpInterpolation_Response",  // message name
  1,  // number of fields
  sizeof(anro4_interface__srv__OpInterpolation_Response),
  OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_member_array,  // message members
  OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_type_support_handle = {
  0,
  &OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anro4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, OpInterpolation_Response)() {
  if (!OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_type_support_handle.typesupport_identifier) {
    OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OpInterpolation_Response__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "anro4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "anro4_interface/srv/detail/op_interpolation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_service_members = {
  "anro4_interface__srv",  // service namespace
  "OpInterpolation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_Request_message_type_support_handle,
  NULL  // response message
  // anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_Response_message_type_support_handle
};

static rosidl_service_type_support_t anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_service_type_support_handle = {
  0,
  &anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, OpInterpolation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, OpInterpolation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anro4_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, OpInterpolation)() {
  if (!anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_service_type_support_handle.typesupport_identifier) {
    anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, OpInterpolation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, OpInterpolation_Response)()->data;
  }

  return &anro4_interface__srv__detail__op_interpolation__rosidl_typesupport_introspection_c__OpInterpolation_service_type_support_handle;
}
