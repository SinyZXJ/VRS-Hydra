// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from hydra_msgs:msg/PlaceNodeArray.idl
// generated code does not contain a copyright notice
#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hydra_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hydra_msgs/msg/detail/place_node_array__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hydra_msgs
bool cdr_serialize_hydra_msgs__msg__PlaceNodeArray(
  const hydra_msgs__msg__PlaceNodeArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hydra_msgs
bool cdr_deserialize_hydra_msgs__msg__PlaceNodeArray(
  eprosima::fastcdr::Cdr &,
  hydra_msgs__msg__PlaceNodeArray * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hydra_msgs
size_t get_serialized_size_hydra_msgs__msg__PlaceNodeArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hydra_msgs
size_t max_serialized_size_hydra_msgs__msg__PlaceNodeArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hydra_msgs
bool cdr_serialize_key_hydra_msgs__msg__PlaceNodeArray(
  const hydra_msgs__msg__PlaceNodeArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hydra_msgs
size_t get_serialized_size_key_hydra_msgs__msg__PlaceNodeArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hydra_msgs
size_t max_serialized_size_key_hydra_msgs__msg__PlaceNodeArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hydra_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hydra_msgs, msg, PlaceNodeArray)();

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
