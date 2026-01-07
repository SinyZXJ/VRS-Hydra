// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kimera_pgmo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__struct.h"
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // vertex_updates
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__functions.h"  // face_archive_updates, face_updates
#include "rosidl_runtime_c/primitives_sequence.h"  // curr_indices, deleted_indices, prev_indices, semantic_updates, stamp_updates
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // curr_indices, deleted_indices, prev_indices, semantic_updates, stamp_updates
#include "std_msgs/msg/detail/color_rgba__functions.h"  // vertex_updates_colors
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

bool cdr_serialize_kimera_pgmo_msgs__msg__TriangleIndices(
  const kimera_pgmo_msgs__msg__TriangleIndices * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_kimera_pgmo_msgs__msg__TriangleIndices(
  eprosima::fastcdr::Cdr & cdr,
  kimera_pgmo_msgs__msg__TriangleIndices * ros_message);

size_t get_serialized_size_kimera_pgmo_msgs__msg__TriangleIndices(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_kimera_pgmo_msgs__msg__TriangleIndices(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_kimera_pgmo_msgs__msg__TriangleIndices(
  const kimera_pgmo_msgs__msg__TriangleIndices * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_kimera_pgmo_msgs__msg__TriangleIndices(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_kimera_pgmo_msgs__msg__TriangleIndices(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, msg, TriangleIndices)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_serialize_std_msgs__msg__ColorRGBA(
  const std_msgs__msg__ColorRGBA * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_deserialize_std_msgs__msg__ColorRGBA(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__ColorRGBA * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t get_serialized_size_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t max_serialized_size_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_serialize_key_std_msgs__msg__ColorRGBA(
  const std_msgs__msg__ColorRGBA * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t get_serialized_size_key_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t max_serialized_size_key_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MeshDelta__ros_msg_type = kimera_pgmo_msgs__msg__MeshDelta;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_kimera_pgmo_msgs__msg__MeshDelta(
  const kimera_pgmo_msgs__msg__MeshDelta * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: vertex_updates
  {
    size_t size = ros_message->vertex_updates.size;
    auto array_ptr = ros_message->vertex_updates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: vertex_updates_colors
  {
    size_t size = ros_message->vertex_updates_colors.size;
    auto array_ptr = ros_message->vertex_updates_colors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_std_msgs__msg__ColorRGBA(
        &array_ptr[i], cdr);
    }
  }

  // Field name: stamp_updates
  {
    size_t size = ros_message->stamp_updates.size;
    auto array_ptr = ros_message->stamp_updates.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: semantic_updates
  {
    size_t size = ros_message->semantic_updates.size;
    auto array_ptr = ros_message->semantic_updates.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: face_updates
  {
    size_t size = ros_message->face_updates.size;
    auto array_ptr = ros_message->face_updates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_kimera_pgmo_msgs__msg__TriangleIndices(
        &array_ptr[i], cdr);
    }
  }

  // Field name: face_archive_updates
  {
    size_t size = ros_message->face_archive_updates.size;
    auto array_ptr = ros_message->face_archive_updates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_kimera_pgmo_msgs__msg__TriangleIndices(
        &array_ptr[i], cdr);
    }
  }

  // Field name: deleted_indices
  {
    size_t size = ros_message->deleted_indices.size;
    auto array_ptr = ros_message->deleted_indices.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: prev_indices
  {
    size_t size = ros_message->prev_indices.size;
    auto array_ptr = ros_message->prev_indices.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: curr_indices
  {
    size_t size = ros_message->curr_indices.size;
    auto array_ptr = ros_message->curr_indices.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: vertex_start
  {
    cdr << ros_message->vertex_start;
  }

  // Field name: face_start
  {
    cdr << ros_message->face_start;
  }

  // Field name: sequence_number
  {
    cdr << ros_message->sequence_number;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_deserialize_kimera_pgmo_msgs__msg__MeshDelta(
  eprosima::fastcdr::Cdr & cdr,
  kimera_pgmo_msgs__msg__MeshDelta * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: vertex_updates
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

    if (ros_message->vertex_updates.data) {
      geometry_msgs__msg__Point__Sequence__fini(&ros_message->vertex_updates);
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&ros_message->vertex_updates, size)) {
      fprintf(stderr, "failed to create array for field 'vertex_updates'");
      return false;
    }
    auto array_ptr = ros_message->vertex_updates.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Point(cdr, &array_ptr[i]);
    }
  }

  // Field name: vertex_updates_colors
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

    if (ros_message->vertex_updates_colors.data) {
      std_msgs__msg__ColorRGBA__Sequence__fini(&ros_message->vertex_updates_colors);
    }
    if (!std_msgs__msg__ColorRGBA__Sequence__init(&ros_message->vertex_updates_colors, size)) {
      fprintf(stderr, "failed to create array for field 'vertex_updates_colors'");
      return false;
    }
    auto array_ptr = ros_message->vertex_updates_colors.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_std_msgs__msg__ColorRGBA(cdr, &array_ptr[i]);
    }
  }

  // Field name: stamp_updates
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

    if (ros_message->stamp_updates.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->stamp_updates);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->stamp_updates, size)) {
      fprintf(stderr, "failed to create array for field 'stamp_updates'");
      return false;
    }
    auto array_ptr = ros_message->stamp_updates.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: semantic_updates
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

    if (ros_message->semantic_updates.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->semantic_updates);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->semantic_updates, size)) {
      fprintf(stderr, "failed to create array for field 'semantic_updates'");
      return false;
    }
    auto array_ptr = ros_message->semantic_updates.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: face_updates
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

    if (ros_message->face_updates.data) {
      kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(&ros_message->face_updates);
    }
    if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(&ros_message->face_updates, size)) {
      fprintf(stderr, "failed to create array for field 'face_updates'");
      return false;
    }
    auto array_ptr = ros_message->face_updates.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_kimera_pgmo_msgs__msg__TriangleIndices(cdr, &array_ptr[i]);
    }
  }

  // Field name: face_archive_updates
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

    if (ros_message->face_archive_updates.data) {
      kimera_pgmo_msgs__msg__TriangleIndices__Sequence__fini(&ros_message->face_archive_updates);
    }
    if (!kimera_pgmo_msgs__msg__TriangleIndices__Sequence__init(&ros_message->face_archive_updates, size)) {
      fprintf(stderr, "failed to create array for field 'face_archive_updates'");
      return false;
    }
    auto array_ptr = ros_message->face_archive_updates.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_kimera_pgmo_msgs__msg__TriangleIndices(cdr, &array_ptr[i]);
    }
  }

  // Field name: deleted_indices
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

    if (ros_message->deleted_indices.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->deleted_indices);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->deleted_indices, size)) {
      fprintf(stderr, "failed to create array for field 'deleted_indices'");
      return false;
    }
    auto array_ptr = ros_message->deleted_indices.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: prev_indices
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

    if (ros_message->prev_indices.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->prev_indices);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->prev_indices, size)) {
      fprintf(stderr, "failed to create array for field 'prev_indices'");
      return false;
    }
    auto array_ptr = ros_message->prev_indices.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: curr_indices
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

    if (ros_message->curr_indices.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->curr_indices);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->curr_indices, size)) {
      fprintf(stderr, "failed to create array for field 'curr_indices'");
      return false;
    }
    auto array_ptr = ros_message->curr_indices.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: vertex_start
  {
    cdr >> ros_message->vertex_start;
  }

  // Field name: face_start
  {
    cdr >> ros_message->face_start;
  }

  // Field name: sequence_number
  {
    cdr >> ros_message->sequence_number;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_kimera_pgmo_msgs__msg__MeshDelta(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MeshDelta__ros_msg_type * ros_message = static_cast<const _MeshDelta__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: vertex_updates
  {
    size_t array_size = ros_message->vertex_updates.size;
    auto array_ptr = ros_message->vertex_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: vertex_updates_colors
  {
    size_t array_size = ros_message->vertex_updates_colors.size;
    auto array_ptr = ros_message->vertex_updates_colors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: stamp_updates
  {
    size_t array_size = ros_message->stamp_updates.size;
    auto array_ptr = ros_message->stamp_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: semantic_updates
  {
    size_t array_size = ros_message->semantic_updates.size;
    auto array_ptr = ros_message->semantic_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: face_updates
  {
    size_t array_size = ros_message->face_updates.size;
    auto array_ptr = ros_message->face_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_kimera_pgmo_msgs__msg__TriangleIndices(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: face_archive_updates
  {
    size_t array_size = ros_message->face_archive_updates.size;
    auto array_ptr = ros_message->face_archive_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_kimera_pgmo_msgs__msg__TriangleIndices(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: deleted_indices
  {
    size_t array_size = ros_message->deleted_indices.size;
    auto array_ptr = ros_message->deleted_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prev_indices
  {
    size_t array_size = ros_message->prev_indices.size;
    auto array_ptr = ros_message->prev_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: curr_indices
  {
    size_t array_size = ros_message->curr_indices.size;
    auto array_ptr = ros_message->curr_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertex_start
  {
    size_t item_size = sizeof(ros_message->vertex_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: face_start
  {
    size_t item_size = sizeof(ros_message->face_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sequence_number
  {
    size_t item_size = sizeof(ros_message->sequence_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_kimera_pgmo_msgs__msg__MeshDelta(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vertex_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vertex_updates_colors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: stamp_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: semantic_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: face_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kimera_pgmo_msgs__msg__TriangleIndices(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: face_archive_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kimera_pgmo_msgs__msg__TriangleIndices(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: deleted_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: prev_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: curr_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertex_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: face_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sequence_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs__msg__MeshDelta;
    is_plain =
      (
      offsetof(DataType, sequence_number) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
bool cdr_serialize_key_kimera_pgmo_msgs__msg__MeshDelta(
  const kimera_pgmo_msgs__msg__MeshDelta * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: vertex_updates
  {
    size_t size = ros_message->vertex_updates.size;
    auto array_ptr = ros_message->vertex_updates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: vertex_updates_colors
  {
    size_t size = ros_message->vertex_updates_colors.size;
    auto array_ptr = ros_message->vertex_updates_colors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_std_msgs__msg__ColorRGBA(
        &array_ptr[i], cdr);
    }
  }

  // Field name: stamp_updates
  {
    size_t size = ros_message->stamp_updates.size;
    auto array_ptr = ros_message->stamp_updates.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: semantic_updates
  {
    size_t size = ros_message->semantic_updates.size;
    auto array_ptr = ros_message->semantic_updates.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: face_updates
  {
    size_t size = ros_message->face_updates.size;
    auto array_ptr = ros_message->face_updates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_kimera_pgmo_msgs__msg__TriangleIndices(
        &array_ptr[i], cdr);
    }
  }

  // Field name: face_archive_updates
  {
    size_t size = ros_message->face_archive_updates.size;
    auto array_ptr = ros_message->face_archive_updates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_kimera_pgmo_msgs__msg__TriangleIndices(
        &array_ptr[i], cdr);
    }
  }

  // Field name: deleted_indices
  {
    size_t size = ros_message->deleted_indices.size;
    auto array_ptr = ros_message->deleted_indices.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: prev_indices
  {
    size_t size = ros_message->prev_indices.size;
    auto array_ptr = ros_message->prev_indices.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: curr_indices
  {
    size_t size = ros_message->curr_indices.size;
    auto array_ptr = ros_message->curr_indices.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: vertex_start
  {
    cdr << ros_message->vertex_start;
  }

  // Field name: face_start
  {
    cdr << ros_message->face_start;
  }

  // Field name: sequence_number
  {
    cdr << ros_message->sequence_number;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t get_serialized_size_key_kimera_pgmo_msgs__msg__MeshDelta(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MeshDelta__ros_msg_type * ros_message = static_cast<const _MeshDelta__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: vertex_updates
  {
    size_t array_size = ros_message->vertex_updates.size;
    auto array_ptr = ros_message->vertex_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: vertex_updates_colors
  {
    size_t array_size = ros_message->vertex_updates_colors.size;
    auto array_ptr = ros_message->vertex_updates_colors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_std_msgs__msg__ColorRGBA(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: stamp_updates
  {
    size_t array_size = ros_message->stamp_updates.size;
    auto array_ptr = ros_message->stamp_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: semantic_updates
  {
    size_t array_size = ros_message->semantic_updates.size;
    auto array_ptr = ros_message->semantic_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: face_updates
  {
    size_t array_size = ros_message->face_updates.size;
    auto array_ptr = ros_message->face_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_kimera_pgmo_msgs__msg__TriangleIndices(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: face_archive_updates
  {
    size_t array_size = ros_message->face_archive_updates.size;
    auto array_ptr = ros_message->face_archive_updates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_kimera_pgmo_msgs__msg__TriangleIndices(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: deleted_indices
  {
    size_t array_size = ros_message->deleted_indices.size;
    auto array_ptr = ros_message->deleted_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prev_indices
  {
    size_t array_size = ros_message->prev_indices.size;
    auto array_ptr = ros_message->prev_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: curr_indices
  {
    size_t array_size = ros_message->curr_indices.size;
    auto array_ptr = ros_message->curr_indices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertex_start
  {
    size_t item_size = sizeof(ros_message->vertex_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: face_start
  {
    size_t item_size = sizeof(ros_message->face_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sequence_number
  {
    size_t item_size = sizeof(ros_message->sequence_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kimera_pgmo_msgs
size_t max_serialized_size_key_kimera_pgmo_msgs__msg__MeshDelta(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vertex_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vertex_updates_colors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: stamp_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: semantic_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: face_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_kimera_pgmo_msgs__msg__TriangleIndices(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: face_archive_updates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_kimera_pgmo_msgs__msg__TriangleIndices(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: deleted_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: prev_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: curr_indices
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: vertex_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: face_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sequence_number
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kimera_pgmo_msgs__msg__MeshDelta;
    is_plain =
      (
      offsetof(DataType, sequence_number) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MeshDelta__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const kimera_pgmo_msgs__msg__MeshDelta * ros_message = static_cast<const kimera_pgmo_msgs__msg__MeshDelta *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_kimera_pgmo_msgs__msg__MeshDelta(ros_message, cdr);
}

static bool _MeshDelta__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  kimera_pgmo_msgs__msg__MeshDelta * ros_message = static_cast<kimera_pgmo_msgs__msg__MeshDelta *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_kimera_pgmo_msgs__msg__MeshDelta(cdr, ros_message);
}

static uint32_t _MeshDelta__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kimera_pgmo_msgs__msg__MeshDelta(
      untyped_ros_message, 0));
}

static size_t _MeshDelta__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kimera_pgmo_msgs__msg__MeshDelta(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MeshDelta = {
  "kimera_pgmo_msgs::msg",
  "MeshDelta",
  _MeshDelta__cdr_serialize,
  _MeshDelta__cdr_deserialize,
  _MeshDelta__get_serialized_size,
  _MeshDelta__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MeshDelta__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MeshDelta,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_hash,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_description,
  &kimera_pgmo_msgs__msg__MeshDelta__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kimera_pgmo_msgs, msg, MeshDelta)() {
  return &_MeshDelta__type_support;
}

#if defined(__cplusplus)
}
#endif
