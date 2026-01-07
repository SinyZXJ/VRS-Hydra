// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pose_graph_tools_msgs:msg/VLCRequests.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pose_graph_tools_msgs/msg/detail/vlc_requests__rosidl_typesupport_introspection_c.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pose_graph_tools_msgs/msg/detail/vlc_requests__functions.h"
#include "pose_graph_tools_msgs/msg/detail/vlc_requests__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pose_graph_tools_msgs__msg__VLCRequests__init(message_memory);
}

void pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_fini_function(void * message_memory)
{
  pose_graph_tools_msgs__msg__VLCRequests__fini(message_memory);
}

size_t pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__size_function__VLCRequests__pose_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__get_const_function__VLCRequests__pose_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__get_function__VLCRequests__pose_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__fetch_function__VLCRequests__pose_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__get_const_function__VLCRequests__pose_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__assign_function__VLCRequests__pose_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__get_function__VLCRequests__pose_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__resize_function__VLCRequests__pose_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCRequests, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCRequests, source_robot_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCRequests, destination_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__VLCRequests, pose_ids),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__size_function__VLCRequests__pose_ids,  // size() function pointer
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__get_const_function__VLCRequests__pose_ids,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__get_function__VLCRequests__pose_ids,  // get(index) function pointer
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__fetch_function__VLCRequests__pose_ids,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__assign_function__VLCRequests__pose_ids,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__resize_function__VLCRequests__pose_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_members = {
  "pose_graph_tools_msgs__msg",  // message namespace
  "VLCRequests",  // message name
  4,  // number of fields
  sizeof(pose_graph_tools_msgs__msg__VLCRequests),
  false,  // has_any_key_member_
  pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_member_array,  // message members
  pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_init_function,  // function to initialize message memory (memory has to be allocated)
  pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_type_support_handle = {
  0,
  &pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__VLCRequests__get_type_hash,
  &pose_graph_tools_msgs__msg__VLCRequests__get_type_description,
  &pose_graph_tools_msgs__msg__VLCRequests__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pose_graph_tools_msgs, msg, VLCRequests)() {
  pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_type_support_handle.typesupport_identifier) {
    pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pose_graph_tools_msgs__msg__VLCRequests__rosidl_typesupport_introspection_c__VLCRequests_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
