// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hydra_msgs:msg/DsgUpdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hydra_msgs/msg/detail/dsg_update__rosidl_typesupport_introspection_c.h"
#include "hydra_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hydra_msgs/msg/detail/dsg_update__functions.h"
#include "hydra_msgs/msg/detail/dsg_update__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `layer_contents`
// Member `deleted_nodes`
// Member `deleted_edges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydra_msgs__msg__DsgUpdate__init(message_memory);
}

void hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_fini_function(void * message_memory)
{
  hydra_msgs__msg__DsgUpdate__fini(message_memory);
}

size_t hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__size_function__DsgUpdate__layer_contents(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__layer_contents(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__layer_contents(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__fetch_function__DsgUpdate__layer_contents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__layer_contents(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__assign_function__DsgUpdate__layer_contents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__layer_contents(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__resize_function__DsgUpdate__layer_contents(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__size_function__DsgUpdate__deleted_nodes(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__deleted_nodes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__deleted_nodes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__fetch_function__DsgUpdate__deleted_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__deleted_nodes(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__assign_function__DsgUpdate__deleted_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__deleted_nodes(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__resize_function__DsgUpdate__deleted_nodes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__size_function__DsgUpdate__deleted_edges(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__deleted_edges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__deleted_edges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__fetch_function__DsgUpdate__deleted_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__deleted_edges(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__assign_function__DsgUpdate__deleted_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__deleted_edges(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__resize_function__DsgUpdate__deleted_edges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__DsgUpdate, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_contents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__DsgUpdate, layer_contents),  // bytes offset in struct
    NULL,  // default value
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__size_function__DsgUpdate__layer_contents,  // size() function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__layer_contents,  // get_const(index) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__layer_contents,  // get(index) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__fetch_function__DsgUpdate__layer_contents,  // fetch(index, &value) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__assign_function__DsgUpdate__layer_contents,  // assign(index, value) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__resize_function__DsgUpdate__layer_contents  // resize(index) function pointer
  },
  {
    "deleted_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__DsgUpdate, deleted_nodes),  // bytes offset in struct
    NULL,  // default value
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__size_function__DsgUpdate__deleted_nodes,  // size() function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__deleted_nodes,  // get_const(index) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__deleted_nodes,  // get(index) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__fetch_function__DsgUpdate__deleted_nodes,  // fetch(index, &value) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__assign_function__DsgUpdate__deleted_nodes,  // assign(index, value) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__resize_function__DsgUpdate__deleted_nodes  // resize(index) function pointer
  },
  {
    "deleted_edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__DsgUpdate, deleted_edges),  // bytes offset in struct
    NULL,  // default value
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__size_function__DsgUpdate__deleted_edges,  // size() function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_const_function__DsgUpdate__deleted_edges,  // get_const(index) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__get_function__DsgUpdate__deleted_edges,  // get(index) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__fetch_function__DsgUpdate__deleted_edges,  // fetch(index, &value) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__assign_function__DsgUpdate__deleted_edges,  // assign(index, value) function pointer
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__resize_function__DsgUpdate__deleted_edges  // resize(index) function pointer
  },
  {
    "full_update",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__DsgUpdate, full_update),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__DsgUpdate, sequence_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_members = {
  "hydra_msgs__msg",  // message namespace
  "DsgUpdate",  // message name
  6,  // number of fields
  sizeof(hydra_msgs__msg__DsgUpdate),
  false,  // has_any_key_member_
  hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_member_array,  // message members
  hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_type_support_handle = {
  0,
  &hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_members,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__DsgUpdate__get_type_hash,
  &hydra_msgs__msg__DsgUpdate__get_type_description,
  &hydra_msgs__msg__DsgUpdate__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydra_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydra_msgs, msg, DsgUpdate)() {
  hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_type_support_handle.typesupport_identifier) {
    hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hydra_msgs__msg__DsgUpdate__rosidl_typesupport_introspection_c__DsgUpdate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
