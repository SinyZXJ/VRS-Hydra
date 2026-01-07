// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from semantic_inference_msgs:msg/FeatureVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "semantic_inference_msgs/msg/detail/feature_vector__rosidl_typesupport_introspection_c.h"
#include "semantic_inference_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "semantic_inference_msgs/msg/detail/feature_vector__functions.h"
#include "semantic_inference_msgs/msg/detail/feature_vector__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semantic_inference_msgs__msg__FeatureVector__init(message_memory);
}

void semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_fini_function(void * message_memory)
{
  semantic_inference_msgs__msg__FeatureVector__fini(message_memory);
}

size_t semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__size_function__FeatureVector__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__get_const_function__FeatureVector__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__get_function__FeatureVector__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__fetch_function__FeatureVector__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__get_const_function__FeatureVector__data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__assign_function__FeatureVector__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__get_function__FeatureVector__data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__resize_function__FeatureVector__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs__msg__FeatureVector, data),  // bytes offset in struct
    NULL,  // default value
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__size_function__FeatureVector__data,  // size() function pointer
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__get_const_function__FeatureVector__data,  // get_const(index) function pointer
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__get_function__FeatureVector__data,  // get(index) function pointer
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__fetch_function__FeatureVector__data,  // fetch(index, &value) function pointer
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__assign_function__FeatureVector__data,  // assign(index, value) function pointer
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__resize_function__FeatureVector__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_message_members = {
  "semantic_inference_msgs__msg",  // message namespace
  "FeatureVector",  // message name
  1,  // number of fields
  sizeof(semantic_inference_msgs__msg__FeatureVector),
  false,  // has_any_key_member_
  semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_message_member_array,  // message members
  semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_init_function,  // function to initialize message memory (memory has to be allocated)
  semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_message_type_support_handle = {
  0,
  &semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_message_members,
  get_message_typesupport_handle_function,
  &semantic_inference_msgs__msg__FeatureVector__get_type_hash,
  &semantic_inference_msgs__msg__FeatureVector__get_type_description,
  &semantic_inference_msgs__msg__FeatureVector__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semantic_inference_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semantic_inference_msgs, msg, FeatureVector)() {
  if (!semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_message_type_support_handle.typesupport_identifier) {
    semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semantic_inference_msgs__msg__FeatureVector__rosidl_typesupport_introspection_c__FeatureVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
