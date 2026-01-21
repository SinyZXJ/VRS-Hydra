// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hydra_msgs:msg/PlaceNode.idl
// generated code does not contain a copyright notice

#include "hydra_msgs/msg/detail/place_node__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hydra_msgs
const rosidl_type_hash_t *
hydra_msgs__msg__PlaceNode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6d, 0x48, 0xcc, 0x98, 0x10, 0x81, 0x4f, 0x6f,
      0xeb, 0xc6, 0x19, 0xe0, 0x87, 0xae, 0xa3, 0x49,
      0x83, 0xf8, 0x94, 0x07, 0x1c, 0xd4, 0x5f, 0xcb,
      0x16, 0x42, 0xe3, 0x98, 0xa5, 0x6a, 0x9c, 0x82,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char hydra_msgs__msg__PlaceNode__TYPE_NAME[] = "hydra_msgs/msg/PlaceNode";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char hydra_msgs__msg__PlaceNode__FIELD_NAME__node_id[] = "node_id";
static char hydra_msgs__msg__PlaceNode__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field hydra_msgs__msg__PlaceNode__FIELDS[] = {
  {
    {hydra_msgs__msg__PlaceNode__FIELD_NAME__node_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hydra_msgs__msg__PlaceNode__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hydra_msgs__msg__PlaceNode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hydra_msgs__msg__PlaceNode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hydra_msgs__msg__PlaceNode__TYPE_NAME, 24, 24},
      {hydra_msgs__msg__PlaceNode__FIELDS, 2, 2},
    },
    {hydra_msgs__msg__PlaceNode__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 node_id\n"
  "geometry_msgs/Point position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hydra_msgs__msg__PlaceNode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hydra_msgs__msg__PlaceNode__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hydra_msgs__msg__PlaceNode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hydra_msgs__msg__PlaceNode__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
