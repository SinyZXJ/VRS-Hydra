// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from semantic_inference_msgs:msg/FeatureImage.idl
// generated code does not contain a copyright notice
#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "semantic_inference_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "semantic_inference_msgs/msg/detail/feature_image__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semantic_inference_msgs
bool cdr_serialize_semantic_inference_msgs__msg__FeatureImage(
  const semantic_inference_msgs__msg__FeatureImage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semantic_inference_msgs
bool cdr_deserialize_semantic_inference_msgs__msg__FeatureImage(
  eprosima::fastcdr::Cdr &,
  semantic_inference_msgs__msg__FeatureImage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semantic_inference_msgs
size_t get_serialized_size_semantic_inference_msgs__msg__FeatureImage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semantic_inference_msgs
size_t max_serialized_size_semantic_inference_msgs__msg__FeatureImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semantic_inference_msgs
bool cdr_serialize_key_semantic_inference_msgs__msg__FeatureImage(
  const semantic_inference_msgs__msg__FeatureImage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semantic_inference_msgs
size_t get_serialized_size_key_semantic_inference_msgs__msg__FeatureImage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semantic_inference_msgs
size_t max_serialized_size_key_semantic_inference_msgs__msg__FeatureImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semantic_inference_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, semantic_inference_msgs, msg, FeatureImage)();

#ifdef __cplusplus
}
#endif

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
