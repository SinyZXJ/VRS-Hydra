// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from semantic_inference_msgs:msg/FeatureVector.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "semantic_inference_msgs/msg/detail/feature_vector__functions.h"
#include "semantic_inference_msgs/msg/detail/feature_vector__struct.hpp"
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

void FeatureVector_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semantic_inference_msgs::msg::FeatureVector(_init);
}

void FeatureVector_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semantic_inference_msgs::msg::FeatureVector *>(message_memory);
  typed_message->~FeatureVector();
}

size_t size_function__FeatureVector__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeatureVector__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__FeatureVector__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeatureVector__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__FeatureVector__data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__FeatureVector__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__FeatureVector__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__FeatureVector__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FeatureVector_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs::msg::FeatureVector, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeatureVector__data,  // size() function pointer
    get_const_function__FeatureVector__data,  // get_const(index) function pointer
    get_function__FeatureVector__data,  // get(index) function pointer
    fetch_function__FeatureVector__data,  // fetch(index, &value) function pointer
    assign_function__FeatureVector__data,  // assign(index, value) function pointer
    resize_function__FeatureVector__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FeatureVector_message_members = {
  "semantic_inference_msgs::msg",  // message namespace
  "FeatureVector",  // message name
  1,  // number of fields
  sizeof(semantic_inference_msgs::msg::FeatureVector),
  false,  // has_any_key_member_
  FeatureVector_message_member_array,  // message members
  FeatureVector_init_function,  // function to initialize message memory (memory has to be allocated)
  FeatureVector_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FeatureVector_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FeatureVector_message_members,
  get_message_typesupport_handle_function,
  &semantic_inference_msgs__msg__FeatureVector__get_type_hash,
  &semantic_inference_msgs__msg__FeatureVector__get_type_description,
  &semantic_inference_msgs__msg__FeatureVector__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace semantic_inference_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<semantic_inference_msgs::msg::FeatureVector>()
{
  return &::semantic_inference_msgs::msg::rosidl_typesupport_introspection_cpp::FeatureVector_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semantic_inference_msgs, msg, FeatureVector)() {
  return &::semantic_inference_msgs::msg::rosidl_typesupport_introspection_cpp::FeatureVector_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
