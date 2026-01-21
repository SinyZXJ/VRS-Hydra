// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hydra_msgs:msg/NodeLabelUpdate.idl
// generated code does not contain a copyright notice
#include "hydra_msgs/msg/detail/node_label_update__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hydra_msgs/msg/detail/node_label_update__functions.h"
#include "hydra_msgs/msg/detail/node_label_update__struct.hpp"

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

namespace hydra_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
cdr_serialize(
  const hydra_msgs::msg::NodeLabelUpdate & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: node_id
  cdr << ros_message.node_id;

  // Member: label
  cdr << ros_message.label;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hydra_msgs::msg::NodeLabelUpdate & ros_message)
{
  // Member: node_id
  cdr >> ros_message.node_id;

  // Member: label
  cdr >> ros_message.label;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
get_serialized_size(
  const hydra_msgs::msg::NodeLabelUpdate & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: node_id
  {
    size_t item_size = sizeof(ros_message.node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: label
  {
    size_t item_size = sizeof(ros_message.label);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
max_serialized_size_NodeLabelUpdate(
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

  // Member: node_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: label
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hydra_msgs::msg::NodeLabelUpdate;
    is_plain =
      (
      offsetof(DataType, label) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
cdr_serialize_key(
  const hydra_msgs::msg::NodeLabelUpdate & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: node_id
  cdr << ros_message.node_id;

  // Member: label
  cdr << ros_message.label;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
get_serialized_size_key(
  const hydra_msgs::msg::NodeLabelUpdate & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: node_id
  {
    size_t item_size = sizeof(ros_message.node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: label
  {
    size_t item_size = sizeof(ros_message.label);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
max_serialized_size_key_NodeLabelUpdate(
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

  // Member: node_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: label
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hydra_msgs::msg::NodeLabelUpdate;
    is_plain =
      (
      offsetof(DataType, label) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _NodeLabelUpdate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hydra_msgs::msg::NodeLabelUpdate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NodeLabelUpdate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hydra_msgs::msg::NodeLabelUpdate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NodeLabelUpdate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hydra_msgs::msg::NodeLabelUpdate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NodeLabelUpdate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NodeLabelUpdate(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NodeLabelUpdate__callbacks = {
  "hydra_msgs::msg",
  "NodeLabelUpdate",
  _NodeLabelUpdate__cdr_serialize,
  _NodeLabelUpdate__cdr_deserialize,
  _NodeLabelUpdate__get_serialized_size,
  _NodeLabelUpdate__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NodeLabelUpdate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NodeLabelUpdate__callbacks,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_hash,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_description,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hydra_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hydra_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hydra_msgs::msg::NodeLabelUpdate>()
{
  return &hydra_msgs::msg::typesupport_fastrtps_cpp::_NodeLabelUpdate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hydra_msgs, msg, NodeLabelUpdate)() {
  return &hydra_msgs::msg::typesupport_fastrtps_cpp::_NodeLabelUpdate__handle;
}

#ifdef __cplusplus
}
#endif
