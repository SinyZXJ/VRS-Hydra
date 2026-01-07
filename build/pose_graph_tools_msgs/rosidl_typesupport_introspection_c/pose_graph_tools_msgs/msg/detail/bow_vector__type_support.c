// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pose_graph_tools_msgs:msg/BowVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pose_graph_tools_msgs/msg/detail/bow_vector__rosidl_typesupport_introspection_c.h"
#include "pose_graph_tools_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pose_graph_tools_msgs/msg/detail/bow_vector__functions.h"
#include "pose_graph_tools_msgs/msg/detail/bow_vector__struct.h"


// Include directives for member types
// Member `word_ids`
// Member `word_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pose_graph_tools_msgs__msg__BowVector__init(message_memory);
}

void pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_fini_function(void * message_memory)
{
  pose_graph_tools_msgs__msg__BowVector__fini(message_memory);
}

size_t pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__size_function__BowVector__word_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_const_function__BowVector__word_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_function__BowVector__word_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__fetch_function__BowVector__word_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_const_function__BowVector__word_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__assign_function__BowVector__word_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_function__BowVector__word_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__resize_function__BowVector__word_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__size_function__BowVector__word_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_const_function__BowVector__word_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_function__BowVector__word_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__fetch_function__BowVector__word_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_const_function__BowVector__word_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__assign_function__BowVector__word_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_function__BowVector__word_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__resize_function__BowVector__word_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_message_member_array[2] = {
  {
    "word_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__BowVector, word_ids),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__size_function__BowVector__word_ids,  // size() function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_const_function__BowVector__word_ids,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_function__BowVector__word_ids,  // get(index) function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__fetch_function__BowVector__word_ids,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__assign_function__BowVector__word_ids,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__resize_function__BowVector__word_ids  // resize(index) function pointer
  },
  {
    "word_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pose_graph_tools_msgs__msg__BowVector, word_values),  // bytes offset in struct
    NULL,  // default value
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__size_function__BowVector__word_values,  // size() function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_const_function__BowVector__word_values,  // get_const(index) function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__get_function__BowVector__word_values,  // get(index) function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__fetch_function__BowVector__word_values,  // fetch(index, &value) function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__assign_function__BowVector__word_values,  // assign(index, value) function pointer
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__resize_function__BowVector__word_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_message_members = {
  "pose_graph_tools_msgs__msg",  // message namespace
  "BowVector",  // message name
  2,  // number of fields
  sizeof(pose_graph_tools_msgs__msg__BowVector),
  false,  // has_any_key_member_
  pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_message_member_array,  // message members
  pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_init_function,  // function to initialize message memory (memory has to be allocated)
  pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_message_type_support_handle = {
  0,
  &pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_message_members,
  get_message_typesupport_handle_function,
  &pose_graph_tools_msgs__msg__BowVector__get_type_hash,
  &pose_graph_tools_msgs__msg__BowVector__get_type_description,
  &pose_graph_tools_msgs__msg__BowVector__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pose_graph_tools_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pose_graph_tools_msgs, msg, BowVector)() {
  if (!pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_message_type_support_handle.typesupport_identifier) {
    pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pose_graph_tools_msgs__msg__BowVector__rosidl_typesupport_introspection_c__BowVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
