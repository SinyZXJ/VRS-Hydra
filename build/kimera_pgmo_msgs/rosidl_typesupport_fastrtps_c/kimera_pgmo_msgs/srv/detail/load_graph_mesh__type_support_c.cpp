// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kimera_pgmo_msgs:srv/LoadGraphMesh.idl
// generated code does not contain a copyright notice
#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kimera_pgmo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.h"
#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // dgrf_file, ply_file
#include "rosidl_runtime_c/string_functions.h"  // dgrf_file, ply_file

// forward declare type support functions


using _LoadGraphMesh_Request__ros_msg_type = kimera_pgmo_msgs__srv__LoadGraphMesh_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: dgrf_file
  {
    const rosidl_runtime_c__String * str = &ros_message->dgrf_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ply_file
  {
    const rosidl_runtime_c__String * str = &ros_message->ply_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  eprosima::fastcdr::Cdr & cdr,
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request * ros_message)
{
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: dgrf_file
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dgrf_file.data) {
      rosidl_runtime_c__String__init(&ros_message->dgrf_file);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->dgrf_file,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dgrf_file'\n");
      return false;
    }
  }

  // Field name: ply_file
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ply_file.data) {
      rosidl_runtime_c__String__init(&ros_message->ply_file);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ply_file,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ply_file'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadGraphMesh_Request__ros_msg_type * ros_message = static_cast<const _LoadGraphMesh_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dgrf_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dgrf_file.size + 1);

  // Field name: ply_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ply_file.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: dgrf_file
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: ply_file
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs__srv__LoadGraphMesh_Request;
    is_plain =
      (
      offsetof(DataType, ply_file) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: dgrf_file
  {
    const rosidl_runtime_c__String * str = &ros_message->dgrf_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ply_file
  {
    const rosidl_runtime_c__String * str = &ros_message->ply_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadGraphMesh_Request__ros_msg_type * ros_message = static_cast<const _LoadGraphMesh_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dgrf_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dgrf_file.size + 1);

  // Field name: ply_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ply_file.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: dgrf_file
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: ply_file
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs__srv__LoadGraphMesh_Request;
    is_plain =
      (
      offsetof(DataType, ply_file) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LoadGraphMesh_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request * ros_message = static_cast<const kimera_pgmo_msgs__srv__LoadGraphMesh_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(ros_message, cdr);
}

static bool _LoadGraphMesh_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request * ros_message = static_cast<kimera_pgmo_msgs__srv__LoadGraphMesh_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(cdr, ros_message);
}

static uint32_t _LoadGraphMesh_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
      untyped_ros_message, 0));
}

static size_t _LoadGraphMesh_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadGraphMesh_Request = {
  "kimera_pgmo_msgs::srv",
  "LoadGraphMesh_Request",
  _LoadGraphMesh_Request__cdr_serialize,
  _LoadGraphMesh_Request__cdr_deserialize,
  _LoadGraphMesh_Request__get_serialized_size,
  _LoadGraphMesh_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LoadGraphMesh_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadGraphMesh_Request,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Request)() {
  return &_LoadGraphMesh_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _LoadGraphMesh_Response__ros_msg_type = kimera_pgmo_msgs__srv__LoadGraphMesh_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  eprosima::fastcdr::Cdr & cdr,
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadGraphMesh_Response__ros_msg_type * ros_message = static_cast<const _LoadGraphMesh_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs__srv__LoadGraphMesh_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadGraphMesh_Response__ros_msg_type * ros_message = static_cast<const _LoadGraphMesh_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs__srv__LoadGraphMesh_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LoadGraphMesh_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response * ros_message = static_cast<const kimera_pgmo_msgs__srv__LoadGraphMesh_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(ros_message, cdr);
}

static bool _LoadGraphMesh_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response * ros_message = static_cast<kimera_pgmo_msgs__srv__LoadGraphMesh_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(cdr, ros_message);
}

static uint32_t _LoadGraphMesh_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
      untyped_ros_message, 0));
}

static size_t _LoadGraphMesh_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadGraphMesh_Response = {
  "kimera_pgmo_msgs::srv",
  "LoadGraphMesh_Response",
  _LoadGraphMesh_Response__cdr_serialize,
  _LoadGraphMesh_Response__cdr_deserialize,
  _LoadGraphMesh_Response__get_serialized_size,
  _LoadGraphMesh_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LoadGraphMesh_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadGraphMesh_Response,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Response)() {
  return &_LoadGraphMesh_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  eprosima::fastcdr::Cdr & cdr,
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request * ros_message);

size_t get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Request)();

bool cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  eprosima::fastcdr::Cdr & cdr,
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response * ros_message);

size_t get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _LoadGraphMesh_Event__ros_msg_type = kimera_pgmo_msgs__srv__LoadGraphMesh_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
  eprosima::fastcdr::Cdr & cdr,
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence__fini(&ros_message->request);
    }
    if (!kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence__fini(&ros_message->response);
    }
    if (!kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadGraphMesh_Event__ros_msg_type * ros_message = static_cast<const _LoadGraphMesh_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs__srv__LoadGraphMesh_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadGraphMesh_Event__ros_msg_type * ros_message = static_cast<const _LoadGraphMesh_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_kimera_pgmo_msgs__srv__LoadGraphMesh_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs__srv__LoadGraphMesh_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LoadGraphMesh_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Event * ros_message = static_cast<const kimera_pgmo_msgs__srv__LoadGraphMesh_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(ros_message, cdr);
}

static bool _LoadGraphMesh_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event * ros_message = static_cast<kimera_pgmo_msgs__srv__LoadGraphMesh_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(cdr, ros_message);
}

static uint32_t _LoadGraphMesh_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
      untyped_ros_message, 0));
}

static size_t _LoadGraphMesh_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kimera_pgmo_msgs__srv__LoadGraphMesh_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadGraphMesh_Event = {
  "kimera_pgmo_msgs::srv",
  "LoadGraphMesh_Event",
  _LoadGraphMesh_Event__cdr_serialize,
  _LoadGraphMesh_Event__cdr_deserialize,
  _LoadGraphMesh_Event__get_serialized_size,
  _LoadGraphMesh_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LoadGraphMesh_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadGraphMesh_Event,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Event)() {
  return &_LoadGraphMesh_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kimera_pgmo_msgs/srv/load_graph_mesh.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LoadGraphMesh__callbacks = {
  "kimera_pgmo_msgs::srv",
  "LoadGraphMesh",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Response)(),
};

static rosidl_service_type_support_t LoadGraphMesh__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LoadGraphMesh__callbacks,
  get_service_typesupport_handle_function,
  &_LoadGraphMesh_Request__type_support,
  &_LoadGraphMesh_Response__type_support,
  &_LoadGraphMesh_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    kimera_pgmo_msgs,
    srv,
    LoadGraphMesh
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    kimera_pgmo_msgs,
    srv,
    LoadGraphMesh
  ),
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, srv, LoadGraphMesh)() {
  return &LoadGraphMesh__handle;
}

#if defined(__cplusplus)
}
#endif
