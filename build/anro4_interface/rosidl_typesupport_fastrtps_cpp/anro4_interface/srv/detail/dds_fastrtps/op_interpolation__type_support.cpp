// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from anro4_interface:srv/OpInterpolation.idl
// generated code does not contain a copyright notice
#include "anro4_interface/srv/detail/op_interpolation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "anro4_interface/srv/detail/op_interpolation__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace anro4_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
cdr_serialize(
  const anro4_interface::srv::OpInterpolation_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_goal
  cdr << ros_message.x_goal;
  // Member: y_goal
  cdr << ros_message.y_goal;
  // Member: z_goal
  cdr << ros_message.z_goal;
  // Member: roll_goal
  cdr << ros_message.roll_goal;
  // Member: pitch_goal
  cdr << ros_message.pitch_goal;
  // Member: yaw_goal
  cdr << ros_message.yaw_goal;
  // Member: interpolation_time
  cdr << ros_message.interpolation_time;
  // Member: method
  cdr << ros_message.method;
  // Member: version
  cdr << ros_message.version;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anro4_interface::srv::OpInterpolation_Request & ros_message)
{
  // Member: x_goal
  cdr >> ros_message.x_goal;

  // Member: y_goal
  cdr >> ros_message.y_goal;

  // Member: z_goal
  cdr >> ros_message.z_goal;

  // Member: roll_goal
  cdr >> ros_message.roll_goal;

  // Member: pitch_goal
  cdr >> ros_message.pitch_goal;

  // Member: yaw_goal
  cdr >> ros_message.yaw_goal;

  // Member: interpolation_time
  cdr >> ros_message.interpolation_time;

  // Member: method
  cdr >> ros_message.method;

  // Member: version
  cdr >> ros_message.version;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
get_serialized_size(
  const anro4_interface::srv::OpInterpolation_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_goal
  {
    size_t item_size = sizeof(ros_message.x_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_goal
  {
    size_t item_size = sizeof(ros_message.y_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_goal
  {
    size_t item_size = sizeof(ros_message.z_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_goal
  {
    size_t item_size = sizeof(ros_message.roll_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_goal
  {
    size_t item_size = sizeof(ros_message.pitch_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_goal
  {
    size_t item_size = sizeof(ros_message.yaw_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: interpolation_time
  {
    size_t item_size = sizeof(ros_message.interpolation_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: method
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.method.size() + 1);
  // Member: version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.version.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
max_serialized_size_OpInterpolation_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: roll_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pitch_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: interpolation_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: method
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: version
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

static bool _OpInterpolation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anro4_interface::srv::OpInterpolation_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpInterpolation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anro4_interface::srv::OpInterpolation_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpInterpolation_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anro4_interface::srv::OpInterpolation_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpInterpolation_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OpInterpolation_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _OpInterpolation_Request__callbacks = {
  "anro4_interface::srv",
  "OpInterpolation_Request",
  _OpInterpolation_Request__cdr_serialize,
  _OpInterpolation_Request__cdr_deserialize,
  _OpInterpolation_Request__get_serialized_size,
  _OpInterpolation_Request__max_serialized_size
};

static rosidl_message_type_support_t _OpInterpolation_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpInterpolation_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace anro4_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_anro4_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<anro4_interface::srv::OpInterpolation_Request>()
{
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_OpInterpolation_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, OpInterpolation_Request)() {
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_OpInterpolation_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace anro4_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
cdr_serialize(
  const anro4_interface::srv::OpInterpolation_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: server_feedback
  cdr << ros_message.server_feedback;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anro4_interface::srv::OpInterpolation_Response & ros_message)
{
  // Member: server_feedback
  cdr >> ros_message.server_feedback;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
get_serialized_size(
  const anro4_interface::srv::OpInterpolation_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: server_feedback
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.server_feedback.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
max_serialized_size_OpInterpolation_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: server_feedback
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

static bool _OpInterpolation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anro4_interface::srv::OpInterpolation_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpInterpolation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anro4_interface::srv::OpInterpolation_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpInterpolation_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anro4_interface::srv::OpInterpolation_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpInterpolation_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OpInterpolation_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _OpInterpolation_Response__callbacks = {
  "anro4_interface::srv",
  "OpInterpolation_Response",
  _OpInterpolation_Response__cdr_serialize,
  _OpInterpolation_Response__cdr_deserialize,
  _OpInterpolation_Response__get_serialized_size,
  _OpInterpolation_Response__max_serialized_size
};

static rosidl_message_type_support_t _OpInterpolation_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpInterpolation_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace anro4_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_anro4_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<anro4_interface::srv::OpInterpolation_Response>()
{
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_OpInterpolation_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, OpInterpolation_Response)() {
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_OpInterpolation_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace anro4_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _OpInterpolation__callbacks = {
  "anro4_interface::srv",
  "OpInterpolation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, OpInterpolation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, OpInterpolation_Response)(),
};

static rosidl_service_type_support_t _OpInterpolation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpInterpolation__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace anro4_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_anro4_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<anro4_interface::srv::OpInterpolation>()
{
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_OpInterpolation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, OpInterpolation)() {
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_OpInterpolation__handle;
}

#ifdef __cplusplus
}
#endif
