// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from semantic_inference_msgs:msg/FeatureVectors.idl
// generated code does not contain a copyright notice

#include "semantic_inference_msgs/msg/detail/feature_vectors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_type_hash_t *
semantic_inference_msgs__msg__FeatureVectors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x70, 0x41, 0x07, 0x68, 0xc4, 0x87, 0x1b,
      0x7f, 0xf4, 0xa0, 0x66, 0x7a, 0x48, 0x25, 0x4c,
      0x0b, 0x2c, 0x44, 0x49, 0x2e, 0x74, 0x92, 0xc5,
      0x98, 0x33, 0xb0, 0xb2, 0x95, 0x15, 0x3b, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "semantic_inference_msgs/msg/detail/feature_vector__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t semantic_inference_msgs__msg__FeatureVector__EXPECTED_HASH = {1, {
    0x4c, 0xf5, 0x0f, 0xe3, 0x28, 0xc3, 0xd1, 0x13,
    0x33, 0x17, 0x18, 0xa7, 0x18, 0x61, 0x42, 0x42,
    0x86, 0x10, 0xf9, 0xbc, 0x09, 0x65, 0x24, 0xf0,
    0x14, 0x1d, 0x4e, 0x32, 0xce, 0xfa, 0xf9, 0xce,
  }};
#endif

static char semantic_inference_msgs__msg__FeatureVectors__TYPE_NAME[] = "semantic_inference_msgs/msg/FeatureVectors";
static char semantic_inference_msgs__msg__FeatureVector__TYPE_NAME[] = "semantic_inference_msgs/msg/FeatureVector";

// Define type names, field names, and default values
static char semantic_inference_msgs__msg__FeatureVectors__FIELD_NAME__names[] = "names";
static char semantic_inference_msgs__msg__FeatureVectors__FIELD_NAME__features[] = "features";

static rosidl_runtime_c__type_description__Field semantic_inference_msgs__msg__FeatureVectors__FIELDS[] = {
  {
    {semantic_inference_msgs__msg__FeatureVectors__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {semantic_inference_msgs__msg__FeatureVectors__FIELD_NAME__features, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {semantic_inference_msgs__msg__FeatureVector__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription semantic_inference_msgs__msg__FeatureVectors__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {semantic_inference_msgs__msg__FeatureVector__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
semantic_inference_msgs__msg__FeatureVectors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {semantic_inference_msgs__msg__FeatureVectors__TYPE_NAME, 42, 42},
      {semantic_inference_msgs__msg__FeatureVectors__FIELDS, 2, 2},
    },
    {semantic_inference_msgs__msg__FeatureVectors__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&semantic_inference_msgs__msg__FeatureVector__EXPECTED_HASH, semantic_inference_msgs__msg__FeatureVector__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = semantic_inference_msgs__msg__FeatureVector__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] names  # optional\n"
  "semantic_inference_msgs/FeatureVector[] features";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
semantic_inference_msgs__msg__FeatureVectors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {semantic_inference_msgs__msg__FeatureVectors__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 76, 76},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
semantic_inference_msgs__msg__FeatureVectors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *semantic_inference_msgs__msg__FeatureVectors__get_individual_type_description_source(NULL),
    sources[1] = *semantic_inference_msgs__msg__FeatureVector__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
