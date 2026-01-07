// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from pose_graph_tools_msgs:srv/LcdFrameRegistration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/lcd_frame_registration.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__TYPE_SUPPORT_H_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "pose_graph_tools_msgs/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  pose_graph_tools_msgs,
  srv,
  LcdFrameRegistration_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  pose_graph_tools_msgs,
  srv,
  LcdFrameRegistration_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  pose_graph_tools_msgs,
  srv,
  LcdFrameRegistration_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  pose_graph_tools_msgs,
  srv,
  LcdFrameRegistration
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  pose_graph_tools_msgs,
  srv,
  LcdFrameRegistration
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_pose_graph_tools_msgs
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  pose_graph_tools_msgs,
  srv,
  LcdFrameRegistration
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__TYPE_SUPPORT_H_
