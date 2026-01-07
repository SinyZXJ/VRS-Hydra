// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kimera_pgmo_msgs:msg/AbsolutePoseStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kimera_pgmo_msgs/msg/detail/absolute_pose_stamped__functions.h"
#include "kimera_pgmo_msgs/msg/detail/absolute_pose_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kimera_pgmo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AbsolutePoseStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kimera_pgmo_msgs::msg::AbsolutePoseStamped(_init);
}

void AbsolutePoseStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kimera_pgmo_msgs::msg::AbsolutePoseStamped *>(message_memory);
  typed_message->~AbsolutePoseStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AbsolutePoseStamped_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::AbsolutePoseStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "idx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::AbsolutePoseStamped, idx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::msg::AbsolutePoseStamped, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AbsolutePoseStamped_message_members = {
  "kimera_pgmo_msgs::msg",  // message namespace
  "AbsolutePoseStamped",  // message name
  3,  // number of fields
  sizeof(kimera_pgmo_msgs::msg::AbsolutePoseStamped),
  false,  // has_any_key_member_
  AbsolutePoseStamped_message_member_array,  // message members
  AbsolutePoseStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  AbsolutePoseStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AbsolutePoseStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AbsolutePoseStamped_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__AbsolutePoseStamped__get_type_hash,
  &kimera_pgmo_msgs__msg__AbsolutePoseStamped__get_type_description,
  &kimera_pgmo_msgs__msg__AbsolutePoseStamped__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kimera_pgmo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kimera_pgmo_msgs::msg::AbsolutePoseStamped>()
{
  return &::kimera_pgmo_msgs::msg::rosidl_typesupport_introspection_cpp::AbsolutePoseStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kimera_pgmo_msgs, msg, AbsolutePoseStamped)() {
  return &::kimera_pgmo_msgs::msg::rosidl_typesupport_introspection_cpp::AbsolutePoseStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
