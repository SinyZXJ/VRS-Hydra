// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hydra_msgs:msg/NodeLabelUpdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hydra_msgs/msg/detail/node_label_update__rosidl_typesupport_introspection_c.h"
#include "hydra_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hydra_msgs/msg/detail/node_label_update__functions.h"
#include "hydra_msgs/msg/detail/node_label_update__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydra_msgs__msg__NodeLabelUpdate__init(message_memory);
}

void hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_fini_function(void * message_memory)
{
  hydra_msgs__msg__NodeLabelUpdate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_message_member_array[2] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__NodeLabelUpdate, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__NodeLabelUpdate, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_message_members = {
  "hydra_msgs__msg",  // message namespace
  "NodeLabelUpdate",  // message name
  2,  // number of fields
  sizeof(hydra_msgs__msg__NodeLabelUpdate),
  false,  // has_any_key_member_
  hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_message_member_array,  // message members
  hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_message_type_support_handle = {
  0,
  &hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_message_members,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_hash,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_description,
  &hydra_msgs__msg__NodeLabelUpdate__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydra_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydra_msgs, msg, NodeLabelUpdate)() {
  if (!hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_message_type_support_handle.typesupport_identifier) {
    hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hydra_msgs__msg__NodeLabelUpdate__rosidl_typesupport_introspection_c__NodeLabelUpdate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
