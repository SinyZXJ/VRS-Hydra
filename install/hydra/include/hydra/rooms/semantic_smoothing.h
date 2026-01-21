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
#pragma once

#include <spark_dsg/scene_graph_layer.h>

namespace hydra {

/**
 * @brief Configuration for spatial semantic label smoothing.
 */
struct SemanticSmoothingConfig {
  //! Majority ratio threshold (τ_smooth) - flip if neighbor majority exceeds this
  float smoothing_threshold = 0.8f;
  
  //! Minimum number of neighbors needed to consider smoothing
  size_t min_neighbors = 2;
  
  //! Only consider nodes with valid VLM labels (10-13) for smoothing
  bool only_vlm_labels = true;
};

/**
 * @brief Smooth semantic labels using k-NN majority voting.
 * 
 * For each node, if the fraction of neighbors with the dominant label
 * exceeds smoothing_threshold, flip the node's label to match.
 * This eliminates "speckle noise" where isolated nodes have different
 * labels from their neighbors.
 * 
 * @param layer The Places layer to smooth (modified in-place)
 * @param config Smoothing configuration
 * @return Number of labels that were changed
 */
size_t smoothSemanticLabels(spark_dsg::SceneGraphLayer& layer,
                            const SemanticSmoothingConfig& config);

}  // namespace hydra
