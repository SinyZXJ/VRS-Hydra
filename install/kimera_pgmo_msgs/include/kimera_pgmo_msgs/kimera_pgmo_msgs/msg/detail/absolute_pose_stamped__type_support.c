// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kimera_pgmo_msgs:msg/AbsolutePoseStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kimera_pgmo_msgs/msg/detail/absolute_pose_stamped__rosidl_typesupport_introspection_c.h"
#include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kimera_pgmo_msgs/msg/detail/absolute_pose_stamped__functions.h"
#include "kimera_pgmo_msgs/msg/detail/absolute_pose_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__init(message_memory);
}

void kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__AbsolutePoseStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__AbsolutePoseStamped, idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__msg__AbsolutePoseStamped, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_members = {
  "kimera_pgmo_msgs__msg",  // message namespace
  "AbsolutePoseStamped",  // message name
  3,  // number of fields
  sizeof(kimera_pgmo_msgs__msg__AbsolutePoseStamped),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_member_array,  // message members
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__AbsolutePoseStamped__get_type_hash,
  &kimera_pgmo_msgs__msg__AbsolutePoseStamped__get_type_description,
  &kimera_pgmo_msgs__msg__AbsolutePoseStamped__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, msg, AbsolutePoseStamped)() {
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__msg__AbsolutePoseStamped__rosidl_typesupport_introspection_c__AbsolutePoseStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
