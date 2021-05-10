// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from anro4_interface:srv/Interpolation.idl
// generated code does not contain a copyright notice
#include "anro4_interface/srv/detail/interpolation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "anro4_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "anro4_interface/srv/detail/interpolation__struct.h"
#include "anro4_interface/srv/detail/interpolation__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // method
#include "rosidl_runtime_c/string_functions.h"  // method

// forward declare type support functions


using _Interpolation_Request__ros_msg_type = anro4_interface__srv__Interpolation_Request;

static bool _Interpolation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Interpolation_Request__ros_msg_type * ros_message = static_cast<const _Interpolation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: position_joint1
  {
    cdr << ros_message->position_joint1;
  }

  // Field name: position_joint2
  {
    cdr << ros_message->position_joint2;
  }

  // Field name: position_joint3
  {
    cdr << ros_message->position_joint3;
  }

  // Field name: interpolation_time
  {
    cdr << ros_message->interpolation_time;
  }

  // Field name: method
  {
    const rosidl_runtime_c__String * str = &ros_message->method;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Interpolation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Interpolation_Request__ros_msg_type * ros_message = static_cast<_Interpolation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: position_joint1
  {
    cdr >> ros_message->position_joint1;
  }

  // Field name: position_joint2
  {
    cdr >> ros_message->position_joint2;
  }

  // Field name: position_joint3
  {
    cdr >> ros_message->position_joint3;
  }

  // Field name: interpolation_time
  {
    cdr >> ros_message->interpolation_time;
  }

  // Field name: method
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->method.data) {
      rosidl_runtime_c__String__init(&ros_message->method);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->method,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'method'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anro4_interface
size_t get_serialized_size_anro4_interface__srv__Interpolation_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Interpolation_Request__ros_msg_type * ros_message = static_cast<const _Interpolation_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name position_joint1
  {
    size_t item_size = sizeof(ros_message->position_joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_joint2
  {
    size_t item_size = sizeof(ros_message->position_joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_joint3
  {
    size_t item_size = sizeof(ros_message->position_joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name interpolation_time
  {
    size_t item_size = sizeof(ros_message->interpolation_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name method
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->method.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Interpolation_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_anro4_interface__srv__Interpolation_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anro4_interface
size_t max_serialized_size_anro4_interface__srv__Interpolation_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: position_joint1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position_joint2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position_joint3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: interpolation_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: method
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Interpolation_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_anro4_interface__srv__Interpolation_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Interpolation_Request = {
  "anro4_interface::srv",
  "Interpolation_Request",
  _Interpolation_Request__cdr_serialize,
  _Interpolation_Request__cdr_deserialize,
  _Interpolation_Request__get_serialized_size,
  _Interpolation_Request__max_serialized_size
};

static rosidl_message_type_support_t _Interpolation_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Interpolation_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anro4_interface, srv, Interpolation_Request)() {
  return &_Interpolation_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "anro4_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "anro4_interface/srv/detail/interpolation__struct.h"
// already included above
// #include "anro4_interface/srv/detail/interpolation__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // server_feedback
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // server_feedback

// forward declare type support functions


using _Interpolation_Response__ros_msg_type = anro4_interface__srv__Interpolation_Response;

static bool _Interpolation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Interpolation_Response__ros_msg_type * ros_message = static_cast<const _Interpolation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: server_feedback
  {
    const rosidl_runtime_c__String * str = &ros_message->server_feedback;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Interpolation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Interpolation_Response__ros_msg_type * ros_message = static_cast<_Interpolation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: server_feedback
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->server_feedback.data) {
      rosidl_runtime_c__String__init(&ros_message->server_feedback);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->server_feedback,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'server_feedback'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anro4_interface
size_t get_serialized_size_anro4_interface__srv__Interpolation_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Interpolation_Response__ros_msg_type * ros_message = static_cast<const _Interpolation_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name server_feedback
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->server_feedback.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Interpolation_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_anro4_interface__srv__Interpolation_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anro4_interface
size_t max_serialized_size_anro4_interface__srv__Interpolation_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: server_feedback
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Interpolation_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_anro4_interface__srv__Interpolation_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Interpolation_Response = {
  "anro4_interface::srv",
  "Interpolation_Response",
  _Interpolation_Response__cdr_serialize,
  _Interpolation_Response__cdr_deserialize,
  _Interpolation_Response__get_serialized_size,
  _Interpolation_Response__max_serialized_size
};

static rosidl_message_type_support_t _Interpolation_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Interpolation_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anro4_interface, srv, Interpolation_Response)() {
  return &_Interpolation_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "anro4_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "anro4_interface/srv/interpolation.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Interpolation__callbacks = {
  "anro4_interface::srv",
  "Interpolation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anro4_interface, srv, Interpolation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anro4_interface, srv, Interpolation_Response)(),
};

static rosidl_service_type_support_t Interpolation__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Interpolation__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anro4_interface, srv, Interpolation)() {
  return &Interpolation__handle;
}

#if defined(__cplusplus)
}
#endif
