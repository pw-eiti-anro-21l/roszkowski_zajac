// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anro4_interface:srv/Interpolation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anro4_interface/srv/detail/interpolation__rosidl_typesupport_introspection_c.h"
#include "anro4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anro4_interface/srv/detail/interpolation__functions.h"
#include "anro4_interface/srv/detail/interpolation__struct.h"


// Include directives for member types
// Member `method`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anro4_interface__srv__Interpolation_Request__init(message_memory);
}

void Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_fini_function(void * message_memory)
{
  anro4_interface__srv__Interpolation_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_message_member_array[5] = {
  {
    "position_joint1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__Interpolation_Request, position_joint1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_joint2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__Interpolation_Request, position_joint2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_joint3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__Interpolation_Request, position_joint3),  // bytes offset in struct
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
    offsetof(anro4_interface__srv__Interpolation_Request, interpolation_time),  // bytes offset in struct
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
    offsetof(anro4_interface__srv__Interpolation_Request, method),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_message_members = {
  "anro4_interface__srv",  // message namespace
  "Interpolation_Request",  // message name
  5,  // number of fields
  sizeof(anro4_interface__srv__Interpolation_Request),
  Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_message_member_array,  // message members
  Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_message_type_support_handle = {
  0,
  &Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anro4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, Interpolation_Request)() {
  if (!Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_message_type_support_handle.typesupport_identifier) {
    Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Interpolation_Request__rosidl_typesupport_introspection_c__Interpolation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "anro4_interface/srv/detail/interpolation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "anro4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "anro4_interface/srv/detail/interpolation__functions.h"
// already included above
// #include "anro4_interface/srv/detail/interpolation__struct.h"


// Include directives for member types
// Member `server_feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anro4_interface__srv__Interpolation_Response__init(message_memory);
}

void Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_fini_function(void * message_memory)
{
  anro4_interface__srv__Interpolation_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_message_member_array[1] = {
  {
    "server_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anro4_interface__srv__Interpolation_Response, server_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_message_members = {
  "anro4_interface__srv",  // message namespace
  "Interpolation_Response",  // message name
  1,  // number of fields
  sizeof(anro4_interface__srv__Interpolation_Response),
  Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_message_member_array,  // message members
  Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_message_type_support_handle = {
  0,
  &Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anro4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, Interpolation_Response)() {
  if (!Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_message_type_support_handle.typesupport_identifier) {
    Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Interpolation_Response__rosidl_typesupport_introspection_c__Interpolation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "anro4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "anro4_interface/srv/detail/interpolation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_service_members = {
  "anro4_interface__srv",  // service namespace
  "Interpolation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_Request_message_type_support_handle,
  NULL  // response message
  // anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_Response_message_type_support_handle
};

static rosidl_service_type_support_t anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_service_type_support_handle = {
  0,
  &anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, Interpolation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, Interpolation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anro4_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, Interpolation)() {
  if (!anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_service_type_support_handle.typesupport_identifier) {
    anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, Interpolation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anro4_interface, srv, Interpolation_Response)()->data;
  }

  return &anro4_interface__srv__detail__interpolation__rosidl_typesupport_introspection_c__Interpolation_service_type_support_handle;
}
