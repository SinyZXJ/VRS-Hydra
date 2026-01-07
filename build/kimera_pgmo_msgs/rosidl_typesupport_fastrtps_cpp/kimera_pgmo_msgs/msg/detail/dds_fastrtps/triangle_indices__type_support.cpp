// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kimera_pgmo_msgs:msg/TriangleIndices.idl
// generated code does not contain a copyright notice
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__functions.h"
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace kimera_pgmo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kimera_pgmo_msgs
cdr_serialize(
  const kimera_pgmo_msgs::msg::TriangleIndices & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vertex_indices
  {
    cdr << ros_message.vertex_indices;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kimera_pgmo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kimera_pgmo_msgs::msg::TriangleIndices & ros_message)
{
  // Member: vertex_indices
  {
    cdr >> ros_message.vertex_indices;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kimera_pgmo_msgs
get_serialized_size(
  const kimera_pgmo_msgs::msg::TriangleIndices & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vertex_indices
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.vertex_indices[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kimera_pgmo_msgs
max_serialized_size_TriangleIndices(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: vertex_indices
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs::msg::TriangleIndices;
    is_plain =
      (
      offsetof(DataType, vertex_indices) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kimera_pgmo_msgs
cdr_serialize_key(
  const kimera_pgmo_msgs::msg::TriangleIndices & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vertex_indices
  {
    cdr << ros_message.vertex_indices;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kimera_pgmo_msgs
get_serialized_size_key(
  const kimera_pgmo_msgs::msg::TriangleIndices & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vertex_indices
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.vertex_indices[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kimera_pgmo_msgs
max_serialized_size_key_TriangleIndices(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: vertex_indices
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs::msg::TriangleIndices;
    is_plain =
      (
      offsetof(DataType, vertex_indices) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _TriangleIndices__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kimera_pgmo_msgs::msg::TriangleIndices *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TriangleIndices__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kimera_pgmo_msgs::msg::TriangleIndices *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TriangleIndices__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kimera_pgmo_msgs::msg::TriangleIndices *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TriangleIndices__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TriangleIndices(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TriangleIndices__callbacks = {
  "kimera_pgmo_msgs::msg",
  "TriangleIndices",
  _TriangleIndices__cdr_serialize,
  _TriangleIndices__cdr_deserialize,
  _TriangleIndices__get_serialized_size,
  _TriangleIndices__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TriangleIndices__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TriangleIndices__callbacks,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__TriangleIndices__get_type_hash,
  &kimera_pgmo_msgs__msg__TriangleIndices__get_type_description,
  &kimera_pgmo_msgs__msg__TriangleIndices__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kimera_pgmo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<kimera_pgmo_msgs::msg::TriangleIndices>()
{
  return &kimera_pgmo_msgs::msg::typesupport_fastrtps_cpp::_TriangleIndices__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kimera_pgmo_msgs, msg, TriangleIndices)() {
  return &kimera_pgmo_msgs::msg::typesupport_fastrtps_cpp::_TriangleIndices__handle;
}

#ifdef __cplusplus
}
#endif
