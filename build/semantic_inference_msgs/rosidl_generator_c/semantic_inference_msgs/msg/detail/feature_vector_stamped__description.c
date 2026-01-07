// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from semantic_inference_msgs:msg/FeatureVectorStamped.idl
// generated code does not contain a copyright notice

#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_semantic_inference_msgs
const rosidl_type_hash_t *
semantic_inference_msgs__msg__FeatureVectorStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0x0d, 0x19, 0x99, 0x54, 0x13, 0xff, 0x7c,
      0xb2, 0x4a, 0xf6, 0xb1, 0x6d, 0x24, 0x00, 0xd8,
      0x58, 0x05, 0x6c, 0xa6, 0x90, 0xf0, 0x10, 0xc5,
      0x39, 0xd3, 0x4d, 0x5b, 0xb1, 0x72, 0x2c, 0x4a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "semantic_inference_msgs/msg/detail/feature_vector__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t semantic_inference_msgs__msg__FeatureVector__EXPECTED_HASH = {1, {
    0x4c, 0xf5, 0x0f, 0xe3, 0x28, 0xc3, 0xd1, 0x13,
    0x33, 0x17, 0x18, 0xa7, 0x18, 0x61, 0x42, 0x42,
    0x86, 0x10, 0xf9, 0xbc, 0x09, 0x65, 0x24, 0xf0,
    0x14, 0x1d, 0x4e, 0x32, 0xce, 0xfa, 0xf9, 0xce,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char semantic_inference_msgs__msg__FeatureVectorStamped__TYPE_NAME[] = "semantic_inference_msgs/msg/FeatureVectorStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char semantic_inference_msgs__msg__FeatureVector__TYPE_NAME[] = "semantic_inference_msgs/msg/FeatureVector";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char semantic_inference_msgs__msg__FeatureVectorStamped__FIELD_NAME__header[] = "header";
static char semantic_inference_msgs__msg__FeatureVectorStamped__FIELD_NAME__feature[] = "feature";

static rosidl_runtime_c__type_description__Field semantic_inference_msgs__msg__FeatureVectorStamped__FIELDS[] = {
  {
    {semantic_inference_msgs__msg__FeatureVectorStamped__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {semantic_inference_msgs__msg__FeatureVectorStamped__FIELD_NAME__feature, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {semantic_inference_msgs__msg__FeatureVector__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription semantic_inference_msgs__msg__FeatureVectorStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {semantic_inference_msgs__msg__FeatureVector__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
semantic_inference_msgs__msg__FeatureVectorStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {semantic_inference_msgs__msg__FeatureVectorStamped__TYPE_NAME, 48, 48},
      {semantic_inference_msgs__msg__FeatureVectorStamped__FIELDS, 2, 2},
    },
    {semantic_inference_msgs__msg__FeatureVectorStamped__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&semantic_inference_msgs__msg__FeatureVector__EXPECTED_HASH, semantic_inference_msgs__msg__FeatureVector__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = semantic_inference_msgs__msg__FeatureVector__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message contains a stamped arbitrary vector of feature data\n"
  "\n"
  "std_msgs/Header header                           # source header where the feature was extracted from\n"
  "semantic_inference_msgs/FeatureVector feature    # underlying feature vector";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
semantic_inference_msgs__msg__FeatureVectorStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {semantic_inference_msgs__msg__FeatureVectorStamped__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 247, 247},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
semantic_inference_msgs__msg__FeatureVectorStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *semantic_inference_msgs__msg__FeatureVectorStamped__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *semantic_inference_msgs__msg__FeatureVector__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
