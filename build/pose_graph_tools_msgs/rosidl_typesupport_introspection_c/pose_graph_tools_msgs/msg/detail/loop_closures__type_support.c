// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pose_graph_tools_msgs:msg/LoopClosures.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pose_graph_tools_msgs/msg/detail/loop_closures__rosidl_typesupport_introspection_c.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures__functions.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures__struct.h"


// Include directives for member types
// Member `edges`
#include "pose_graph_tools_msgs/msg/pose_graph_edge.h"
// Member `edges`
#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pose_graph_tools_msgs__msg__LoopClosures__init(message_memory);
}

void pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_fini_function(void * message_memory)
{
  pose_graph_tools_msgs__msg__LoopClosures__fini(message_memory);
}

size_t pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__size_function__LoopClosures__edges(
  const void * untyped_member)
{
  const pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * member =
    (const pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__get_const_function__LoopClosures__edges(
  const void * untyped_member, size_t index)
{
  const pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * member =
    (const pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__get_function__LoopClosures__edges(
  void * untyped_member, size_t index)
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * member =
    (pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__fetch_function__LoopClosures__edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pose_graph_tools_msgs__msg__PoseGraphEdge * item =
    ((const pose_graph_tools_msgs__msg__PoseGraphEdge *)
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__get_const_function__LoopClosures__edges(untyped_member, index));
  pose_graph_tools_msgs__msg__PoseGraphEdge * value =
    (pose_graph_tools_msgs__msg__PoseGraphEdge *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__assign_function__LoopClosures__edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pose_graph_tools_msgs__msg__PoseGraphEdge * item =
    ((pose_graph_tools_msgs__msg__PoseGraphEdge *)
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__get_function__LoopClosures__edges(untyped_member, index));
  const pose_graph_tools_msgs__msg__PoseGraphEdge * value =
    (const pose_graph_tools_msgs__msg__PoseGraphEdge *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__resize_function__LoopClosures__edges(
  void * untyped_member, size_t size)
{
  pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence * member =
    (pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence *)(untyped_member);
  pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__fini(member);
  return pose_graph_tools_msgs__msg__PoseGraphEdge__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_member_array[3] = {
  {
    "publishing_robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__LoopClosures, publishing_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__LoopClosures, destination_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__LoopClosures, edges),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__size_function__LoopClosures__edges,  // size() function pointer
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__get_const_function__LoopClosures__edges,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__get_function__LoopClosures__edges,  // get(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__fetch_function__LoopClosures__edges,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__assign_function__LoopClosures__edges,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__resize_function__LoopClosures__edges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_members = {
  "pose_graph_tools_msgs__msg",  // message namespace
  "LoopClosures",  // message name
  3,  // number of fields
  sizeof(pose_graph_tools_msgs__msg__LoopClosures),
  false,  // has_any_key_member_
  pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_member_array,  // message members
  pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_init_function,  // function to initialize message memory (memory has to be allocated)
  pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_type_support_handle = {
  0,
  &pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__LoopClosures__get_type_hash,
  &pose_graph_tools_msgs__msg__LoopClosures__get_type_description,
  &pose_graph_tools_msgs__msg__LoopClosures__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pose_graph_tools_msgs, msg, LoopClosures)() {
  pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pose_graph_tools_msgs, msg, PoseGraphEdge)();
  if (!pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_type_support_handle.typesupport_identifier) {
    pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pose_graph_tools_msgs__msg__LoopClosures__rosidl_typesupport_introspection_c__LoopClosures_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
