// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from semantic_inference_msgs:msg/FeatureImage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "semantic_inference_msgs/msg/detail/feature_image__functions.h"
#include "semantic_inference_msgs/msg/detail/feature_image__struct.hpp"
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

void FeatureImage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semantic_inference_msgs::msg::FeatureImage(_init);
}

void FeatureImage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semantic_inference_msgs::msg::FeatureImage *>(message_memory);
  typed_message->~FeatureImage();
}

size_t size_function__FeatureImage__mask_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeatureImage__mask_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FeatureImage__mask_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeatureImage__mask_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FeatureImage__mask_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FeatureImage__mask_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FeatureImage__mask_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FeatureImage__mask_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FeatureImage__features(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<semantic_inference_msgs::msg::FeatureVector> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeatureImage__features(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<semantic_inference_msgs::msg::FeatureVector> *>(untyped_member);
  return &member[index];
}

void * get_function__FeatureImage__features(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<semantic_inference_msgs::msg::FeatureVector> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeatureImage__features(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const semantic_inference_msgs::msg::FeatureVector *>(
    get_const_function__FeatureImage__features(untyped_member, index));
  auto & value = *reinterpret_cast<semantic_inference_msgs::msg::FeatureVector *>(untyped_value);
  value = item;
}

void assign_function__FeatureImage__features(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<semantic_inference_msgs::msg::FeatureVector *>(
    get_function__FeatureImage__features(untyped_member, index));
  const auto & value = *reinterpret_cast<const semantic_inference_msgs::msg::FeatureVector *>(untyped_value);
  item = value;
}

void resize_function__FeatureImage__features(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<semantic_inference_msgs::msg::FeatureVector> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FeatureImage_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs::msg::FeatureImage, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mask_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs::msg::FeatureImage, mask_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeatureImage__mask_ids,  // size() function pointer
    get_const_function__FeatureImage__mask_ids,  // get_const(index) function pointer
    get_function__FeatureImage__mask_ids,  // get(index) function pointer
    fetch_function__FeatureImage__mask_ids,  // fetch(index, &value) function pointer
    assign_function__FeatureImage__mask_ids,  // assign(index, value) function pointer
    resize_function__FeatureImage__mask_ids  // resize(index) function pointer
  },
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs::msg::FeatureImage, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "features",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<semantic_inference_msgs::msg::FeatureVector>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semantic_inference_msgs::msg::FeatureImage, features),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeatureImage__features,  // size() function pointer
    get_const_function__FeatureImage__features,  // get_const(index) function pointer
    get_function__FeatureImage__features,  // get(index) function pointer
    fetch_function__FeatureImage__features,  // fetch(index, &value) function pointer
    assign_function__FeatureImage__features,  // assign(index, value) function pointer
    resize_function__FeatureImage__features  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FeatureImage_message_members = {
  "semantic_inference_msgs::msg",  // message namespace
  "FeatureImage",  // message name
  4,  // number of fields
  sizeof(semantic_inference_msgs::msg::FeatureImage),
  false,  // has_any_key_member_
  FeatureImage_message_member_array,  // message members
  FeatureImage_init_function,  // function to initialize message memory (memory has to be allocated)
  FeatureImage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FeatureImage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FeatureImage_message_members,
  get_message_typesupport_handle_function,
  &semantic_inference_msgs__msg__FeatureImage__get_type_hash,
  &semantic_inference_msgs__msg__FeatureImage__get_type_description,
  &semantic_inference_msgs__msg__FeatureImage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace semantic_inference_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<semantic_inference_msgs::msg::FeatureImage>()
{
  return &::semantic_inference_msgs::msg::rosidl_typesupport_introspection_cpp::FeatureImage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semantic_inference_msgs, msg, FeatureImage)() {
  return &::semantic_inference_msgs::msg::rosidl_typesupport_introspection_cpp::FeatureImage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
