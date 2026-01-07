// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice
#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_serialize_pose_graph_tools_msgs__msg__LoopClosuresAck(
  const pose_graph_tools_msgs__msg__LoopClosuresAck * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_deserialize_pose_graph_tools_msgs__msg__LoopClosuresAck(
  eprosima::fastcdr::Cdr &,
  pose_graph_tools_msgs__msg__LoopClosuresAck * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t get_serialized_size_pose_graph_tools_msgs__msg__LoopClosuresAck(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t max_serialized_size_pose_graph_tools_msgs__msg__LoopClosuresAck(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
bool cdr_serialize_key_pose_graph_tools_msgs__msg__LoopClosuresAck(
  const pose_graph_tools_msgs__msg__LoopClosuresAck * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t get_serialized_size_key_pose_graph_tools_msgs__msg__LoopClosuresAck(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
size_t max_serialized_size_key_pose_graph_tools_msgs__msg__LoopClosuresAck(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pose_graph_tools_msgs, msg, LoopClosuresAck)();

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
