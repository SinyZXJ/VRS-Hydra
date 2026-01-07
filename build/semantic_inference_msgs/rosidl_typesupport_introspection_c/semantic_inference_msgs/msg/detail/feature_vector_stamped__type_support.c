// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from semantic_inference_msgs:msg/FeatureVectorStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__rosidl_typesupport_introspection_c.h"
#include "semantic_inference_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__functions.h"
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `feature`
#include "semantic_inference_msgs/msg/feature_vector.h"
// Member `feature`
#include "semantic_inference_msgs/msg/detail/feature_vector__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semantic_inference_msgs__msg__FeatureVectorStamped__init(message_memory);
}

void semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_fini_function(void * message_memory)
{
  semantic_inference_msgs__msg__FeatureVectorStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs__msg__FeatureVectorStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs__msg__FeatureVectorStamped, feature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_members = {
  "semantic_inference_msgs__msg",  // message namespace
  "FeatureVectorStamped",  // message name
  2,  // number of fields
  sizeof(semantic_inference_msgs__msg__FeatureVectorStamped),
  false,  // has_any_key_member_
  semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_member_array,  // message members
  semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_type_support_handle = {
  0,
  &semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_members,
  get_message_typesupport_handle_function,
  &semantic_inference_msgs__msg__FeatureVectorStamped__get_type_hash,
  &semantic_inference_msgs__msg__FeatureVectorStamped__get_type_description,
  &semantic_inference_msgs__msg__FeatureVectorStamped__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semantic_inference_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semantic_inference_msgs, msg, FeatureVectorStamped)() {
  semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semantic_inference_msgs, msg, FeatureVector)();
  if (!semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_type_support_handle.typesupport_identifier) {
    semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semantic_inference_msgs__msg__FeatureVectorStamped__rosidl_typesupport_introspection_c__FeatureVectorStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
