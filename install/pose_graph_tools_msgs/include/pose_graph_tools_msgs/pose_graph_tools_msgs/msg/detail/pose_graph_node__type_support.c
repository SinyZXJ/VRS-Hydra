// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pose_graph_tools_msgs:msg/PoseGraphNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__rosidl_typesupport_introspection_c.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__functions.h"
#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pose_graph_tools_msgs__msg__PoseGraphNode__init(message_memory);
}

void pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_fini_function(void * message_memory)
{
  pose_graph_tools_msgs__msg__PoseGraphNode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__PoseGraphNode, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__PoseGraphNode, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__PoseGraphNode, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__PoseGraphNode, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_members = {
  "pose_graph_tools_msgs__msg",  // message namespace
  "PoseGraphNode",  // message name
  4,  // number of fields
  sizeof(pose_graph_tools_msgs__msg__PoseGraphNode),
  false,  // has_any_key_member_
  pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_member_array,  // message members
  pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_init_function,  // function to initialize message memory (memory has to be allocated)
  pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_type_support_handle = {
  0,
  &pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__PoseGraphNode__get_type_hash,
  &pose_graph_tools_msgs__msg__PoseGraphNode__get_type_description,
  &pose_graph_tools_msgs__msg__PoseGraphNode__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pose_graph_tools_msgs, msg, PoseGraphNode)() {
  pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_type_support_handle.typesupport_identifier) {
    pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pose_graph_tools_msgs__msg__PoseGraphNode__rosidl_typesupport_introspection_c__PoseGraphNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
