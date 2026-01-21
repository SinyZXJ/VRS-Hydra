// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hydra_msgs:msg/LabelUpdateRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hydra_msgs/msg/detail/label_update_request__functions.h"
#include "hydra_msgs/msg/detail/label_update_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hydra_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LabelUpdateRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hydra_msgs::msg::LabelUpdateRequest(_init);
}

void LabelUpdateRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hydra_msgs::msg::LabelUpdateRequest *>(message_memory);
  typed_message->~LabelUpdateRequest();
}

size_t size_function__LabelUpdateRequest__updates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<hydra_msgs::msg::NodeLabelUpdate> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LabelUpdateRequest__updates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<hydra_msgs::msg::NodeLabelUpdate> *>(untyped_member);
  return &member[index];
}

void * get_function__LabelUpdateRequest__updates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<hydra_msgs::msg::NodeLabelUpdate> *>(untyped_member);
  return &member[index];
}

void fetch_function__LabelUpdateRequest__updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const hydra_msgs::msg::NodeLabelUpdate *>(
    get_const_function__LabelUpdateRequest__updates(untyped_member, index));
  auto & value = *reinterpret_cast<hydra_msgs::msg::NodeLabelUpdate *>(untyped_value);
  value = item;
}

void assign_function__LabelUpdateRequest__updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<hydra_msgs::msg::NodeLabelUpdate *>(
    get_function__LabelUpdateRequest__updates(untyped_member, index));
  const auto & value = *reinterpret_cast<const hydra_msgs::msg::NodeLabelUpdate *>(untyped_value);
  item = value;
}

void resize_function__LabelUpdateRequest__updates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<hydra_msgs::msg::NodeLabelUpdate> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LabelUpdateRequest_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::LabelUpdateRequest, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "updates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hydra_msgs::msg::NodeLabelUpdate>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hydra_msgs::msg::LabelUpdateRequest, updates),  // bytes offset in struct
    nullptr,  // default value
    size_function__LabelUpdateRequest__updates,  // size() function pointer
    get_const_function__LabelUpdateRequest__updates,  // get_const(index) function pointer
    get_function__LabelUpdateRequest__updates,  // get(index) function pointer
    fetch_function__LabelUpdateRequest__updates,  // fetch(index, &value) function pointer
    assign_function__LabelUpdateRequest__updates,  // assign(index, value) function pointer
    resize_function__LabelUpdateRequest__updates  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LabelUpdateRequest_message_members = {
  "hydra_msgs::msg",  // message namespace
  "LabelUpdateRequest",  // message name
  2,  // number of fields
  sizeof(hydra_msgs::msg::LabelUpdateRequest),
  false,  // has_any_key_member_
  LabelUpdateRequest_message_member_array,  // message members
  LabelUpdateRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  LabelUpdateRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LabelUpdateRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LabelUpdateRequest_message_members,
  get_message_typesupport_handle_function,
  &hydra_msgs__msg__LabelUpdateRequest__get_type_hash,
  &hydra_msgs__msg__LabelUpdateRequest__get_type_description,
  &hydra_msgs__msg__LabelUpdateRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hydra_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hydra_msgs::msg::LabelUpdateRequest>()
{
  return &::hydra_msgs::msg::rosidl_typesupport_introspection_cpp::LabelUpdateRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hydra_msgs, msg, LabelUpdateRequest)() {
  return &::hydra_msgs::msg::rosidl_typesupport_introspection_cpp::LabelUpdateRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
