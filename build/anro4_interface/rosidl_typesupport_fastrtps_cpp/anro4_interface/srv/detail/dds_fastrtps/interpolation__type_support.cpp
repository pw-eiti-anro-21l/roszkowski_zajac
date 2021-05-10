// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from anro4_interface:srv/Interpolation.idl
// generated code does not contain a copyright notice
#include "anro4_interface/srv/detail/interpolation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "anro4_interface/srv/detail/interpolation__struct.hpp"

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
  const anro4_interface::srv::Interpolation_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: position_joint1
  cdr << ros_message.position_joint1;
  // Member: position_joint2
  cdr << ros_message.position_joint2;
  // Member: position_joint3
  cdr << ros_message.position_joint3;
  // Member: interpolation_time
  cdr << ros_message.interpolation_time;
  // Member: method
  cdr << ros_message.method;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anro4_interface::srv::Interpolation_Request & ros_message)
{
  // Member: position_joint1
  cdr >> ros_message.position_joint1;

  // Member: position_joint2
  cdr >> ros_message.position_joint2;

  // Member: position_joint3
  cdr >> ros_message.position_joint3;

  // Member: interpolation_time
  cdr >> ros_message.interpolation_time;

  // Member: method
  cdr >> ros_message.method;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
get_serialized_size(
  const anro4_interface::srv::Interpolation_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: position_joint1
  {
    size_t item_size = sizeof(ros_message.position_joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_joint2
  {
    size_t item_size = sizeof(ros_message.position_joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_joint3
  {
    size_t item_size = sizeof(ros_message.position_joint3);
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

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
max_serialized_size_Interpolation_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: position_joint1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: position_joint2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: position_joint3
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

  return current_alignment - initial_alignment;
}

static bool _Interpolation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anro4_interface::srv::Interpolation_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Interpolation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anro4_interface::srv::Interpolation_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Interpolation_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anro4_interface::srv::Interpolation_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Interpolation_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Interpolation_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Interpolation_Request__callbacks = {
  "anro4_interface::srv",
  "Interpolation_Request",
  _Interpolation_Request__cdr_serialize,
  _Interpolation_Request__cdr_deserialize,
  _Interpolation_Request__get_serialized_size,
  _Interpolation_Request__max_serialized_size
};

static rosidl_message_type_support_t _Interpolation_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Interpolation_Request__callbacks,
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
get_message_type_support_handle<anro4_interface::srv::Interpolation_Request>()
{
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_Interpolation_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, Interpolation_Request)() {
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_Interpolation_Request__handle;
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
  const anro4_interface::srv::Interpolation_Response & ros_message,
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
  anro4_interface::srv::Interpolation_Response & ros_message)
{
  // Member: server_feedback
  cdr >> ros_message.server_feedback;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anro4_interface
get_serialized_size(
  const anro4_interface::srv::Interpolation_Response & ros_message,
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
max_serialized_size_Interpolation_Response(
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

static bool _Interpolation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anro4_interface::srv::Interpolation_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Interpolation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anro4_interface::srv::Interpolation_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Interpolation_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anro4_interface::srv::Interpolation_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Interpolation_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Interpolation_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Interpolation_Response__callbacks = {
  "anro4_interface::srv",
  "Interpolation_Response",
  _Interpolation_Response__cdr_serialize,
  _Interpolation_Response__cdr_deserialize,
  _Interpolation_Response__get_serialized_size,
  _Interpolation_Response__max_serialized_size
};

static rosidl_message_type_support_t _Interpolation_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Interpolation_Response__callbacks,
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
get_message_type_support_handle<anro4_interface::srv::Interpolation_Response>()
{
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_Interpolation_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, Interpolation_Response)() {
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_Interpolation_Response__handle;
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

static service_type_support_callbacks_t _Interpolation__callbacks = {
  "anro4_interface::srv",
  "Interpolation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, Interpolation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, Interpolation_Response)(),
};

static rosidl_service_type_support_t _Interpolation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Interpolation__callbacks,
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
get_service_type_support_handle<anro4_interface::srv::Interpolation>()
{
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_Interpolation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anro4_interface, srv, Interpolation)() {
  return &anro4_interface::srv::typesupport_fastrtps_cpp::_Interpolation__handle;
}

#ifdef __cplusplus
}
#endif
