// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pose_graph_tools_msgs:msg/VLCFrameMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__rosidl_typesupport_introspection_c.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__functions.h"
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__struct.h"


// Include directives for member types
// Member `descriptors_mat`
#include "sensor_msgs/msg/image.h"
// Member `descriptors_mat`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `versors`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `versors`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `submap_from_pose`
#include "geometry_msgs/msg/pose.h"
// Member `submap_from_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pose_graph_tools_msgs__msg__VLCFrameMsg__init(message_memory);
}

void pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_fini_function(void * message_memory)
{
  pose_graph_tools_msgs__msg__VLCFrameMsg__fini(message_memory);
}

size_t pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__size_function__VLCFrameMsg__depths(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__get_const_function__VLCFrameMsg__depths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__get_function__VLCFrameMsg__depths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__fetch_function__VLCFrameMsg__depths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__get_const_function__VLCFrameMsg__depths(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__assign_function__VLCFrameMsg__depths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__get_function__VLCFrameMsg__depths(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__resize_function__VLCFrameMsg__depths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_member_array[7] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCFrameMsg, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCFrameMsg, pose_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "submap_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCFrameMsg, submap_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "descriptors_mat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCFrameMsg, descriptors_mat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "versors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCFrameMsg, versors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCFrameMsg, depths),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__size_function__VLCFrameMsg__depths,  // size() function pointer
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__get_const_function__VLCFrameMsg__depths,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__get_function__VLCFrameMsg__depths,  // get(index) function pointer
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__fetch_function__VLCFrameMsg__depths,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__assign_function__VLCFrameMsg__depths,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__resize_function__VLCFrameMsg__depths  // resize(index) function pointer
  },
  {
    "submap_from_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCFrameMsg, submap_from_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_members = {
  "pose_graph_tools_msgs__msg",  // message namespace
  "VLCFrameMsg",  // message name
  7,  // number of fields
  sizeof(pose_graph_tools_msgs__msg__VLCFrameMsg),
  false,  // has_any_key_member_
  pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_member_array,  // message members
  pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_type_support_handle = {
  0,
  &pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__VLCFrameMsg__get_type_hash,
  &pose_graph_tools_msgs__msg__VLCFrameMsg__get_type_description,
  &pose_graph_tools_msgs__msg__VLCFrameMsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pose_graph_tools_msgs, msg, VLCFrameMsg)() {
  pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_type_support_handle.typesupport_identifier) {
    pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pose_graph_tools_msgs__msg__VLCFrameMsg__rosidl_typesupport_introspection_c__VLCFrameMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
