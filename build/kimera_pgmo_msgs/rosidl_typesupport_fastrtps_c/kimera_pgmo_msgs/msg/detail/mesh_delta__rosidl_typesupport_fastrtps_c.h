// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice
#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "kimera_pgmo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_kimera_pgmo_msgs__msg__MeshDelta(
  const kimera_pgmo_msgs__msg__MeshDelta * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_deserialize_kimera_pgmo_msgs__msg__MeshDelta(
  eprosima::fastcdr::Cdr &,
  kimera_pgmo_msgs__msg__MeshDelta * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_kimera_pgmo_msgs__msg__MeshDelta(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_kimera_pgmo_msgs__msg__MeshDelta(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_key_kimera_pgmo_msgs__msg__MeshDelta(
  const kimera_pgmo_msgs__msg__MeshDelta * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_key_kimera_pgmo_msgs__msg__MeshDelta(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_key_kimera_pgmo_msgs__msg__MeshDelta(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, msg, MeshDelta)();

#ifdef __cplusplus
}
#endif

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
