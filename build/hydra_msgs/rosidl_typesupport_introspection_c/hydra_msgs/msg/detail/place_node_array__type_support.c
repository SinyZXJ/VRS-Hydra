// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hydra_msgs:msg/PlaceNodeArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hydra_msgs/msg/detail/place_node_array__rosidl_typesupport_introspection_c.h"
#include "hydra_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hydra_msgs/msg/detail/place_node_array__functions.h"
#include "hydra_msgs/msg/detail/place_node_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `nodes`
#include "hydra_msgs/msg/place_node.h"
// Member `nodes`
#include "hydra_msgs/msg/detail/place_node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydra_msgs__msg__PlaceNodeArray__init(message_memory);
}

void hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_fini_function(void * message_memory)
{
  hydra_msgs__msg__PlaceNodeArray__fini(message_memory);
}

size_t hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__size_function__PlaceNodeArray__nodes(
  const void * untyped_member)
{
  const hydra_msgs__msg__PlaceNode__Sequence * member =
    (const hydra_msgs__msg__PlaceNode__Sequence *)(untyped_member);
  return member->size;
}

const void * hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__get_const_function__PlaceNodeArray__nodes(
  const void * untyped_member, size_t index)
{
  const hydra_msgs__msg__PlaceNode__Sequence * member =
    (const hydra_msgs__msg__PlaceNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__get_function__PlaceNodeArray__nodes(
  void * untyped_member, size_t index)
{
  hydra_msgs__msg__PlaceNode__Sequence * member =
    (hydra_msgs__msg__PlaceNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__fetch_function__PlaceNodeArray__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hydra_msgs__msg__PlaceNode * item =
    ((const hydra_msgs__msg__PlaceNode *)
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__get_const_function__PlaceNodeArray__nodes(untyped_member, index));
  hydra_msgs__msg__PlaceNode * value =
    (hydra_msgs__msg__PlaceNode *)(untyped_value);
  *value = *item;
}

void hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__assign_function__PlaceNodeArray__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hydra_msgs__msg__PlaceNode * item =
    ((hydra_msgs__msg__PlaceNode *)
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__get_function__PlaceNodeArray__nodes(untyped_member, index));
  const hydra_msgs__msg__PlaceNode * value =
    (const hydra_msgs__msg__PlaceNode *)(untyped_value);
  *item = *value;
}

bool hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__resize_function__PlaceNodeArray__nodes(
  void * untyped_member, size_t size)
{
  hydra_msgs__msg__PlaceNode__Sequence * member =
    (hydra_msgs__msg__PlaceNode__Sequence *)(untyped_member);
  hydra_msgs__msg__PlaceNode__Sequence__fini(member);
  return hydra_msgs__msg__PlaceNode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__PlaceNodeArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__PlaceNodeArray, nodes),  // bytes offset in struct
    NULL,  // default value
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__size_function__PlaceNodeArray__nodes,  // size() function pointer
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__get_const_function__PlaceNodeArray__nodes,  // get_const(index) function pointer
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__get_function__PlaceNodeArray__nodes,  // get(index) function pointer
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__fetch_function__PlaceNodeArray__nodes,  // fetch(index, &value) function pointer
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__assign_function__PlaceNodeArray__nodes,  // assign(index, value) function pointer
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__resize_function__PlaceNodeArray__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_members = {
  "hydra_msgs__msg",  // message namespace
  "PlaceNodeArray",  // message name
  2,  // number of fields
  sizeof(hydra_msgs__msg__PlaceNodeArray),
  false,  // has_any_key_member_
  hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_member_array,  // message members
  hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_init_function,  // function to initialize message memory (memory has to be allocated)
  hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_type_support_handle = {
  0,
  &hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_members,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__PlaceNodeArray__get_type_hash,
  &hydra_msgs__msg__PlaceNodeArray__get_type_description,
  &hydra_msgs__msg__PlaceNodeArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydra_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydra_msgs, msg, PlaceNodeArray)() {
  hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydra_msgs, msg, PlaceNode)();
  if (!hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_type_support_handle.typesupport_identifier) {
    hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hydra_msgs__msg__PlaceNodeArray__rosidl_typesupport_introspection_c__PlaceNodeArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
