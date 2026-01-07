// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__rosidl_typesupport_introspection_c.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__functions.h"
#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__struct.h"


// Include directives for member types
// Member `robot_src`
// Member `frame_src`
// Member `robot_dst`
// Member `frame_dst`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pose_graph_tools_msgs__msg__LoopClosuresAck__init(message_memory);
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_fini_function(void * message_memory)
{
  pose_graph_tools_msgs__msg__LoopClosuresAck__fini(message_memory);
}

size_t pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__size_function__LoopClosuresAck__robot_src(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__robot_src(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__robot_src(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__fetch_function__LoopClosuresAck__robot_src(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__robot_src(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__assign_function__LoopClosuresAck__robot_src(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__robot_src(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__resize_function__LoopClosuresAck__robot_src(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__size_function__LoopClosuresAck__frame_src(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__frame_src(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__frame_src(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__fetch_function__LoopClosuresAck__frame_src(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__frame_src(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__assign_function__LoopClosuresAck__frame_src(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__frame_src(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__resize_function__LoopClosuresAck__frame_src(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__size_function__LoopClosuresAck__robot_dst(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__robot_dst(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__robot_dst(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__fetch_function__LoopClosuresAck__robot_dst(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__robot_dst(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__assign_function__LoopClosuresAck__robot_dst(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__robot_dst(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__resize_function__LoopClosuresAck__robot_dst(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__size_function__LoopClosuresAck__frame_dst(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__frame_dst(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__frame_dst(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__fetch_function__LoopClosuresAck__frame_dst(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__frame_dst(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__assign_function__LoopClosuresAck__frame_dst(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__frame_dst(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__resize_function__LoopClosuresAck__frame_dst(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_message_member_array[6] = {
  {
    "publishing_robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__LoopClosuresAck, publishing_robot_id),  // bytes offset in struct
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
    offsetof(pose_graph_tools_msgs__msg__LoopClosuresAck, destination_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_src",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__LoopClosuresAck, robot_src),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__size_function__LoopClosuresAck__robot_src,  // size() function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__robot_src,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__robot_src,  // get(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__fetch_function__LoopClosuresAck__robot_src,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__assign_function__LoopClosuresAck__robot_src,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__resize_function__LoopClosuresAck__robot_src  // resize(index) function pointer
  },
  {
    "frame_src",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__LoopClosuresAck, frame_src),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__size_function__LoopClosuresAck__frame_src,  // size() function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__frame_src,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__frame_src,  // get(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__fetch_function__LoopClosuresAck__frame_src,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__assign_function__LoopClosuresAck__frame_src,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__resize_function__LoopClosuresAck__frame_src  // resize(index) function pointer
  },
  {
    "robot_dst",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__LoopClosuresAck, robot_dst),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__size_function__LoopClosuresAck__robot_dst,  // size() function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__robot_dst,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__robot_dst,  // get(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__fetch_function__LoopClosuresAck__robot_dst,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__assign_function__LoopClosuresAck__robot_dst,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__resize_function__LoopClosuresAck__robot_dst  // resize(index) function pointer
  },
  {
    "frame_dst",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__LoopClosuresAck, frame_dst),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__size_function__LoopClosuresAck__frame_dst,  // size() function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_const_function__LoopClosuresAck__frame_dst,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__get_function__LoopClosuresAck__frame_dst,  // get(index) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__fetch_function__LoopClosuresAck__frame_dst,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__assign_function__LoopClosuresAck__frame_dst,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__resize_function__LoopClosuresAck__frame_dst  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_message_members = {
  "pose_graph_tools_msgs__msg",  // message namespace
  "LoopClosuresAck",  // message name
  6,  // number of fields
  sizeof(pose_graph_tools_msgs__msg__LoopClosuresAck),
  false,  // has_any_key_member_
  pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_message_member_array,  // message members
  pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_init_function,  // function to initialize message memory (memory has to be allocated)
  pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_message_type_support_handle = {
  0,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_hash,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_description,
  &pose_graph_tools_msgs__msg__LoopClosuresAck__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pose_graph_tools_msgs, msg, LoopClosuresAck)() {
  if (!pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_message_type_support_handle.typesupport_identifier) {
    pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pose_graph_tools_msgs__msg__LoopClosuresAck__rosidl_typesupport_introspection_c__LoopClosuresAck_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
