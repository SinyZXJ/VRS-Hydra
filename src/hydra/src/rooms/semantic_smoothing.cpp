/* -----------------------------------------------------------------------------
 * Copyright 2022 Massachusetts Institute of Technology.
 * All Rights Reserved
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *  2. Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * -------------------------------------------------------------------------- */
#include "hydra/rooms/semantic_smoothing.h"

#include <glog/logging.h>
#include <spark_dsg/node_attributes.h>

#include <map>

namespace hydra {

using spark_dsg::NodeId;
using spark_dsg::PlaceNodeAttributes;
using spark_dsg::SceneGraphLayer;
using SemanticLabel = spark_dsg::SemanticLabel;

namespace {

// Check if label is a valid VLM room label (10=office, 11=living_room, 12=kitchen, 13=corridor)
bool isValidVlmLabel(SemanticLabel label) {
  return label >= 10 && label <= 13;
}

}  // namespace

size_t smoothSemanticLabels(SceneGraphLayer& layer,
                            const SemanticSmoothingConfig& config) {
  // Stage changes to avoid order dependency during iteration
  std::map<NodeId, SemanticLabel> new_labels;

  for (auto& [node_id, node] : layer.nodes()) {
    const auto* attrs = node->tryAttributes<PlaceNodeAttributes>();
    if (!attrs) {
      continue;
    }

    // Skip nodes without valid VLM labels if configured
    if (config.only_vlm_labels && !isValidVlmLabel(attrs->semantic_label)) {
      continue;
    }

    // Count neighbor labels
    std::map<SemanticLabel, size_t> neighbor_counts;
    size_t total_valid_neighbors = 0;
    
    for (const auto& sibling : node->siblings()) {
      if (!layer.hasNode(sibling)) {
        continue;
      }
      
      const auto* sibling_attrs = layer.getNode(sibling).tryAttributes<PlaceNodeAttributes>();
      if (!sibling_attrs) {
        continue;
      }
      
      SemanticLabel sibling_label = sibling_attrs->semantic_label;
      
      // Only count valid VLM labels if configured
      if (config.only_vlm_labels && !isValidVlmLabel(sibling_label)) {
        continue;
      }
      
      neighbor_counts[sibling_label]++;
      total_valid_neighbors++;
    }

    // Need minimum neighbors to make a decision
    if (total_valid_neighbors < config.min_neighbors) {
      continue;
    }

    // Find majority label
    auto best = std::max_element(neighbor_counts.begin(), neighbor_counts.end(),
        [](const auto& a, const auto& b) { return a.second < b.second; });
    
    if (best == neighbor_counts.end()) {
      continue;
    }
    
    float ratio = static_cast<float>(best->second) / static_cast<float>(total_valid_neighbors);

    // Flip if current label differs and majority is strong enough
    if (attrs->semantic_label != best->first && ratio >= config.smoothing_threshold) {
      new_labels[node_id] = best->first;
      VLOG(5) << "[SemanticSmoothing] Flip node " << node_id 
              << ": " << static_cast<int>(attrs->semantic_label)
              << " -> " << static_cast<int>(best->first)
              << " (ratio=" << ratio << ", threshold=" << config.smoothing_threshold << ")";
    }
  }

  // Apply changes
  for (const auto& [node_id, label] : new_labels) {
    auto& attrs = layer.getNode(node_id).attributes<PlaceNodeAttributes>();
    attrs.semantic_label = label;
  }

  return new_labels.size();
}

}  // namespace hydra
