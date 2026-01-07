// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from semantic_inference_msgs:msg/FeatureVectorStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__functions.h"
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace semantic_inference_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FeatureVectorStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semantic_inference_msgs::msg::FeatureVectorStamped(_init);
}

void FeatureVectorStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semantic_inference_msgs::msg::FeatureVectorStamped *>(message_memory);
  typed_message->~FeatureVectorStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FeatureVectorStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs::msg::FeatureVectorStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<semantic_inference_msgs::msg::FeatureVector>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs::msg::FeatureVectorStamped, feature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FeatureVectorStamped_message_members = {
  "semantic_inference_msgs::msg",  // message namespace
  "FeatureVectorStamped",  // message name
  2,  // number of fields
  sizeof(semantic_inference_msgs::msg::FeatureVectorStamped),
  false,  // has_any_key_member_
  FeatureVectorStamped_message_member_array,  // message members
  FeatureVectorStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  FeatureVectorStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FeatureVectorStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FeatureVectorStamped_message_members,
  get_message_typesupport_handle_function,
  &semantic_inference_msgs__msg__FeatureVectorStamped__get_type_hash,
  &semantic_inference_msgs__msg__FeatureVectorStamped__get_type_description,
  &semantic_inference_msgs__msg__FeatureVectorStamped__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace semantic_inference_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<semantic_inference_msgs::msg::FeatureVectorStamped>()
{
  return &::semantic_inference_msgs::msg::rosidl_typesupport_introspection_cpp::FeatureVectorStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semantic_inference_msgs, msg, FeatureVectorStamped)() {
  return &::semantic_inference_msgs::msg::rosidl_typesupport_introspection_cpp::FeatureVectorStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
