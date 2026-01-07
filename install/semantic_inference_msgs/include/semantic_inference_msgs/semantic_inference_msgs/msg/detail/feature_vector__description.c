// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from semantic_inference_msgs:msg/FeatureVector.idl
// generated code does not contain a copyright notice

#include "semantic_inference_msgs/msg/detail/feature_vector__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_type_hash_t *
semantic_inference_msgs__msg__FeatureVector__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xf5, 0x0f, 0xe3, 0x28, 0xc3, 0xd1, 0x13,
      0x33, 0x17, 0x18, 0xa7, 0x18, 0x61, 0x42, 0x42,
      0x86, 0x10, 0xf9, 0xbc, 0x09, 0x65, 0x24, 0xf0,
      0x14, 0x1d, 0x4e, 0x32, 0xce, 0xfa, 0xf9, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char semantic_inference_msgs__msg__FeatureVector__TYPE_NAME[] = "semantic_inference_msgs/msg/FeatureVector";

// Define type names, field names, and default values
static char semantic_inference_msgs__msg__FeatureVector__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field semantic_inference_msgs__msg__FeatureVector__FIELDS[] = {
  {
    {semantic_inference_msgs__msg__FeatureVector__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
semantic_inference_msgs__msg__FeatureVector__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {semantic_inference_msgs__msg__FeatureVector__TYPE_NAME, 41, 41},
      {semantic_inference_msgs__msg__FeatureVector__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message contains an arbitrary vector of feature data\n"
  "\n"
  "float32[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
semantic_inference_msgs__msg__FeatureVector__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {semantic_inference_msgs__msg__FeatureVector__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 76, 76},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
semantic_inference_msgs__msg__FeatureVector__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *semantic_inference_msgs__msg__FeatureVector__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
