// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hydra_msgs:msg/NodeLabelUpdate.idl
// generated code does not contain a copyright notice

#include "hydra_msgs/msg/detail/node_label_update__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__msg__NodeLabelUpdate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0x10, 0x10, 0x5f, 0x11, 0x60, 0xbf, 0xb6,
      0x2e, 0x4b, 0x97, 0x5c, 0xa9, 0x0e, 0x69, 0x5d,
      0xb7, 0xbe, 0x74, 0x38, 0x2c, 0x39, 0x84, 0x81,
      0x26, 0x08, 0x23, 0x73, 0xda, 0xc4, 0x96, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hydra_msgs__msg__NodeLabelUpdate__TYPE_NAME[] = "hydra_msgs/msg/NodeLabelUpdate";

// Define type names, field names, and default values
static char hydra_msgs__msg__NodeLabelUpdate__FIELD_NAME__node_id[] = "node_id";
static char hydra_msgs__msg__NodeLabelUpdate__FIELD_NAME__label[] = "label";

static rosidl_runtime_c__type_description__Field hydra_msgs__msg__NodeLabelUpdate__FIELDS[] = {
  {
    {hydra_msgs__msg__NodeLabelUpdate__FIELD_NAME__node_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__msg__NodeLabelUpdate__FIELD_NAME__label, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__msg__NodeLabelUpdate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hydra_msgs__msg__NodeLabelUpdate__TYPE_NAME, 30, 30},
      {hydra_msgs__msg__NodeLabelUpdate__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 node_id\n"
  "uint32 label";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__msg__NodeLabelUpdate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hydra_msgs__msg__NodeLabelUpdate__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__msg__NodeLabelUpdate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hydra_msgs__msg__NodeLabelUpdate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
