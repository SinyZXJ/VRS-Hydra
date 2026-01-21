// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hydra_msgs:msg/LabelUpdateRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hydra_msgs/msg/detail/label_update_request__rosidl_typesupport_introspection_c.h"
#include "hydra_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hydra_msgs/msg/detail/label_update_request__functions.h"
#include "hydra_msgs/msg/detail/label_update_request__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `updates`
#include "hydra_msgs/msg/node_label_update.h"
// Member `updates`
#include "hydra_msgs/msg/detail/node_label_update__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hydra_msgs__msg__LabelUpdateRequest__init(message_memory);
}

void hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_fini_function(void * message_memory)
{
  hydra_msgs__msg__LabelUpdateRequest__fini(message_memory);
}

size_t hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__size_function__LabelUpdateRequest__updates(
  const void * untyped_member)
{
  const hydra_msgs__msg__NodeLabelUpdate__Sequence * member =
    (const hydra_msgs__msg__NodeLabelUpdate__Sequence *)(untyped_member);
  return member->size;
}

const void * hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__get_const_function__LabelUpdateRequest__updates(
  const void * untyped_member, size_t index)
{
  const hydra_msgs__msg__NodeLabelUpdate__Sequence * member =
    (const hydra_msgs__msg__NodeLabelUpdate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__get_function__LabelUpdateRequest__updates(
  void * untyped_member, size_t index)
{
  hydra_msgs__msg__NodeLabelUpdate__Sequence * member =
    (hydra_msgs__msg__NodeLabelUpdate__Sequence *)(untyped_member);
  return &member->data[index];
}

void hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__fetch_function__LabelUpdateRequest__updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hydra_msgs__msg__NodeLabelUpdate * item =
    ((const hydra_msgs__msg__NodeLabelUpdate *)
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__get_const_function__LabelUpdateRequest__updates(untyped_member, index));
  hydra_msgs__msg__NodeLabelUpdate * value =
    (hydra_msgs__msg__NodeLabelUpdate *)(untyped_value);
  *value = *item;
}

void hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__assign_function__LabelUpdateRequest__updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hydra_msgs__msg__NodeLabelUpdate * item =
    ((hydra_msgs__msg__NodeLabelUpdate *)
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__get_function__LabelUpdateRequest__updates(untyped_member, index));
  const hydra_msgs__msg__NodeLabelUpdate * value =
    (const hydra_msgs__msg__NodeLabelUpdate *)(untyped_value);
  *item = *value;
}

bool hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__resize_function__LabelUpdateRequest__updates(
  void * untyped_member, size_t size)
{
  hydra_msgs__msg__NodeLabelUpdate__Sequence * member =
    (hydra_msgs__msg__NodeLabelUpdate__Sequence *)(untyped_member);
  hydra_msgs__msg__NodeLabelUpdate__Sequence__fini(member);
  return hydra_msgs__msg__NodeLabelUpdate__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__LabelUpdateRequest, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs__msg__LabelUpdateRequest, updates),  // bytes offset in struct
    NULL,  // default value
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__size_function__LabelUpdateRequest__updates,  // size() function pointer
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__get_const_function__LabelUpdateRequest__updates,  // get_const(index) function pointer
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__get_function__LabelUpdateRequest__updates,  // get(index) function pointer
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__fetch_function__LabelUpdateRequest__updates,  // fetch(index, &value) function pointer
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__assign_function__LabelUpdateRequest__updates,  // assign(index, value) function pointer
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__resize_function__LabelUpdateRequest__updates  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_members = {
  "hydra_msgs__msg",  // message namespace
  "LabelUpdateRequest",  // message name
  2,  // number of fields
  sizeof(hydra_msgs__msg__LabelUpdateRequest),
  false,  // has_any_key_member_
  hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_member_array,  // message members
  hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_type_support_handle = {
  0,
  &hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_members,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__LabelUpdateRequest__get_type_hash,
  &hydra_msgs__msg__LabelUpdateRequest__get_type_description,
  &hydra_msgs__msg__LabelUpdateRequest__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hydra_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydra_msgs, msg, LabelUpdateRequest)() {
  hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hydra_msgs, msg, NodeLabelUpdate)();
  if (!hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_type_support_handle.typesupport_identifier) {
    hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hydra_msgs__msg__LabelUpdateRequest__rosidl_typesupport_introspection_c__LabelUpdateRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
