// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from hydra_msgs:msg/PlaceNode.idl
// generated code does not contain a copyright notice

#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hydra_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "hydra_msgs/msg/detail/place_node__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace hydra_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
cdr_serialize(
  const hydra_msgs::msg::PlaceNode & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hydra_msgs::msg::PlaceNode & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
get_serialized_size(
  const hydra_msgs::msg::PlaceNode & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
max_serialized_size_PlaceNode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
cdr_serialize_key(
  const hydra_msgs::msg::PlaceNode & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
get_serialized_size_key(
  const hydra_msgs::msg::PlaceNode & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
max_serialized_size_key_PlaceNode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hydra_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hydra_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hydra_msgs, msg, PlaceNode)();

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
