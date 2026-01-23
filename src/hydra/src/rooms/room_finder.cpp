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
 *
 * Research was sponsored by the United States Air Force Research Laboratory and
 * the United States Air Force Artificial Intelligence Accelerator and was
 * accomplished under Cooperative Agreement Number FA8750-19-2-1000. The views
 * and conclusions contained in this document are those of the authors and should
 * not be interpreted as representing the official policies, either expressed or
 * implied, of the United States Air Force or the U.S. Government. The U.S.
 * Government is authorized to reproduce and distribute reprints for Government
 * purposes notwithstanding any copyright notation herein.
 * -------------------------------------------------------------------------- */
#include "hydra/rooms/room_finder.h"

#include <glog/logging.h>
#include <spark_dsg/graph_utilities.h>

#include <Eigen/Dense>
#include <algorithm>
#include <queue>

#include "hydra/rooms/graph_filtration.h"
#include "hydra/rooms/room_utilities.h"

namespace hydra {

struct IndexTimePair {
  size_t index;
  uint64_t time_ns;

  bool operator>(const IndexTimePair& other) const { return time_ns > other.time_ns; }
};

using Cluster = ClusterResults::Cluster;
using Clusters = ClusterResults::Clusters;
using IndexTimePairQueue = std::priority_queue<IndexTimePair,
                                               std::vector<IndexTimePair>,
                                               std::greater<IndexTimePair>>;

void fillIndexQueue(const SceneGraphLayer& places,
                    const Clusters& clusters,
                    IndexTimePairQueue& queue,
                    size_t min_room_size) {
  for (const auto& id_cluster_pair : clusters) {
    if (id_cluster_pair.second.size() < min_room_size) {
      continue;
    }

    uint64_t oldest_time_ns = std::numeric_limits<uint64_t>::max();
    for (const auto& place : id_cluster_pair.second) {
      const auto& attrs = places.getNode(place).attributes();
      if (attrs.last_update_time_ns < oldest_time_ns) {
        oldest_time_ns = attrs.last_update_time_ns;
      }
    }

    queue.push({id_cluster_pair.first, oldest_time_ns});
  }
}

void logFiltration(std::ostream& fout,
                   const Filtration& filtration,
                   const std::pair<size_t, size_t>& window,
                   double distance) {
  fout << "{";
  fout << "\"start\":" << window.first << ",\"end\":" << window.second
       << ",\"threshold\":" << distance << ",\"filtration\":[";
  auto iter = filtration.begin();
  while (iter != filtration.end()) {
    fout << "{\"c\":" << iter->num_components << ",\"d\":" << iter->distance << "}";
    ++iter;
    if (iter != filtration.end()) {
      fout << ",";
    }
  }
  fout << "]},";
}

RoomFinder::RoomFinder(const RoomFinderConfig& config) : config_(config) {}

RoomFinder::~RoomFinder() {
  if (log_file_) {
    if (logged_once_) {
      const size_t curr_pos = log_file_->tellp();
      log_file_->seekp(curr_pos - 1);
    }

    (*log_file_) << "]";
    if (graph_log_file_) {
      graph_log_file_->flush();
      graph_log_file_->close();
      graph_log_file_.reset();

      auto& fout = *log_file_;
      fout << ",\"offsets\":[";
      for (size_t i = 0; i < graph_entries_.size(); ++i) {
        const auto& entry = graph_entries_[i];
        fout << "{\"index\":" << i;
        fout << ",\"offset\":" << entry.offset;
        fout << ",\"size\":" << entry.size;
        fout << ",\"num_nodes\":" << entry.num_nodes;
        fout << ",\"num_edges\":" << entry.num_edges;
        fout << "}";
        if (i + 1 < graph_entries_.size()) {
          fout << ",";
        }
      }
      fout << "]";
    }

    (*log_file_) << "}" << std::endl;
    log_file_->flush();
    log_file_->close();
    log_file_.reset();
  }
}

void RoomFinder::enableLogging(const std::string& log_path) {
  if (!config_.log_filtrations) {
    return;
  }

  log_file_.reset(new std::ofstream(log_path + ".json"));
  (*log_file_) << "{\"contents\":[";

  if (!config_.log_place_graphs) {
    return;
  }

  const std::string gname = log_path + ".graphs";
  graph_log_file_.reset(new std::ofstream(gname, std::ios::binary));
}

InitialClusters RoomFinder::getBestComponents(const SceneGraphLayer& places) const {
  BarcodeTracker tracker(config_.min_component_size);
  const auto filtration = getGraphFiltration(
      places,
      tracker,
      config_.dilation_diff_threshold_m,
      [this](const DisjointSet& components) -> size_t {
        size_t num_components = 0;
        for (const auto id_size_pair : components.sizes) {
          if (id_size_pair.second >= config_.min_component_size) {
            ++num_components;
          }
        }
        return num_components;
      },
      false);

  VLOG(10) << "[RoomFinder] Filtration: " << filtration;

  auto window = getTrimmedFiltration(filtration,
                                     config_.min_dilation_m,
                                     config_.max_dilation_m,
                                     config_.clip_dilation_window_to_max);
  if (window.first >= filtration.size()) {
    return {};
  }

  if (config_.clip_dilation_window_to_max) {
    const double window_size =
        filtration[window.second].distance - filtration[window.first].distance;
    if (window_size < config_.min_window_size) {
      VLOG(2) << "[RoomFinder] Bad window bounds: [" << config_.min_dilation_m << ", "
              << config_.max_dilation_m << "],  window: [" << window.first << ", "
              << window.second << "]"
              << " with size: " << window_size;

      window = getTrimmedFiltration(
          filtration, config_.min_dilation_m, config_.max_dilation_m, false);
    }
  }

  VLOG(2) << "[RoomFinder] Bounds: [" << config_.min_dilation_m << ", "
          << config_.max_dilation_m << "],  window: [" << window.first << ", "
          << window.second << "]";

  std::optional<FiltrationInfo> candidate = std::nullopt;
  switch (config_.dilation_threshold_mode) {
    case DilationThresholdMode::REPEATED:
      candidate = getLongestSequence(filtration, window.first, window.second);
      break;
    case DilationThresholdMode::LONGEST_LIFETIME:
      candidate = getLongestLifetimeDilation(filtration,
                                             tracker.barcodes,
                                             config_.min_lifetime_length_m,
                                             window.first,
                                             window.second);
      break;
    case DilationThresholdMode::PLATEAU:
    case DilationThresholdMode::PLATEAU_THRESHOLD:
    default:
      const bool use_threshold =
          config_.dilation_threshold_mode == DilationThresholdMode::PLATEAU_THRESHOLD;
      candidate = getBestPlateau(
          filtration,
          use_threshold ? config_.min_lifetime_length_m : config_.plateau_ratio,
          window.first,
          window.second,
          use_threshold);
      break;
  }

  if (!candidate) {
    return {};
  }

  const auto info = *candidate;
  VLOG(2) << "[RoomFinder] Best threshold: " << info.distance << " ("
          << info.num_components << " components)";

  if (log_file_) {
    if (graph_log_file_) {
      LOG(FATAL) << "Not implemented currently";
      /* const auto bson_str = places.toBson();*/
      /* graph_entries_.push_back(*/
      /*{graph_offset_, bson_str.size(), places.numNodes(), places.numEdges()});*/
      /*graph_log_file_->write(bson_str.data(), bson_str.size());*/
      /*graph_offset_ += bson_str.size();*/
    }

    logFiltration(*log_file_, filtration, window, info.distance);
    logged_once_ = true;
  }

  // Helper to check if label is a valid VLM room label
  // Office: 10-13, Apartment: 20-24
  auto isValidVlmLabel = [](SemanticLabel label) -> bool {
    return (label >= 10 && label <= 13) || (label >= 20 && label <= 24);
  };

  const auto components = graph_utilities::getConnectedComponents(
      places,
      [&](const SceneGraphNode& node) {
        return node.attributes<PlaceNodeAttributes>().distance > info.distance;
      },
      [&, isValidVlmLabel](const SceneGraphEdge& edge) { 
        // Geometric constraint: edge weight must exceed distance threshold
        if (edge.info->weight <= info.distance) {
          return false;
        }
        
        // Semantic constraint: cut edges between different room types
        const auto& src_attrs = places.getNode(edge.source).attributes<PlaceNodeAttributes>();
        const auto& tgt_attrs = places.getNode(edge.target).attributes<PlaceNodeAttributes>();
        
        // Only apply semantic cutting if BOTH nodes have valid VLM labels
        if (isValidVlmLabel(src_attrs.semantic_label) && 
            isValidVlmLabel(tgt_attrs.semantic_label)) {
            // Cut edge if labels differ (semantic boundary)
            if (src_attrs.semantic_label != tgt_attrs.semantic_label) {
                VLOG(10) << "[RoomFinder] Semantic edge cut: " 
                         << edge.source << " (" << static_cast<int>(src_attrs.semantic_label) << ") -- "
                         << edge.target << " (" << static_cast<int>(tgt_attrs.semantic_label) << ")";
                return false;
            }
        }
        
        // If either lacks a VLM label, fall back to geometric-only
        return true;
      });

  InitialClusters filtered;
  for (const auto& component : components) {
    if (component.size() < config_.min_component_size) {
      continue;
    }

    filtered.push_back(component);
  }

  return filtered;
}

SceneGraphLayer::Ptr RoomFinder::findRooms(const SceneGraphLayer& places) {
  VLOG(2) << "[Room Finder] Detecting rooms for " << places.numNodes() << " nodes";

  const auto components = getBestComponents(places);
  if (components.empty()) {
    VLOG(2) << "[Room Finder] No rooms found";
    return nullptr;
  }

  last_results_.clear();
  switch (config_.clustering_mode) {
    case RoomClusterMode::MODULARITY:
      last_results_ = clusterGraphByModularity(
          places, components, config_.max_modularity_iters, config_.modularity_gamma);
      break;
    case RoomClusterMode::MODULARITY_DISTANCE:
      last_results_ = clusterGraphByModularity(
          places,
          components,
          [](const SceneGraphLayer& G, NodeId n1, NodeId n2) {
            // weight should be 1 / distance
            return 1.0 / (getNodePosition(G, n1) - getNodePosition(G, n2)).norm();
          },
          config_.max_modularity_iters,
          config_.modularity_gamma);
      break;
    case RoomClusterMode::NEIGHBORS:
      last_results_ = clusterGraphByNeighbors(places, components);
      break;
    case RoomClusterMode::NONE:
    default:
      last_results_.fillFromInitialClusters(components);
      break;
  }

  if (!last_results_.valid) {
    LOG(WARNING) << "[Room Finder] clustering failed: using components";
    last_results_.fillFromInitialClusters(components);
  }

  cluster_room_map_.clear();
  return makeRoomLayer(places);
}

SceneGraphLayer::Ptr RoomFinder::makeRoomLayer(const SceneGraphLayer& places) {
  SceneGraphLayer::Ptr rooms(new SceneGraphLayer(DsgLayers::ROOMS));

  // organize rooms by their oldest place
  IndexTimePairQueue queue;
  fillIndexQueue(places, last_results_.clusters, queue, config_.min_room_size);

  NodeSymbol room_id(config_.room_prefix, 0);
  while (!queue.empty()) {
    const auto cluster_index = queue.top().index;
    queue.pop();

    cluster_room_map_[cluster_index] = room_id;
    const auto& cluster = last_results_.clusters.at(cluster_index);

    auto attrs = std::make_unique<RoomNodeAttributes>();
    // VLM Logic: Vote for room label from places
    // Only count valid VLM labels: 10=office, 11=living_room, 12=kitchen, 13=corridor
    std::map<SemanticLabel, size_t> label_counts;
    
    // Helper to check if label is a valid VLM room label
    // Office: 10-13, Apartment: 20-24
    auto isValidVlmLabel = [](SemanticLabel label) -> bool {
      return (label >= 10 && label <= 13) || (label >= 20 && label <= 24);
    };
    
    LOG(INFO) << "[RoomFinder DEBUG] Creating Room " << room_id << " with " << cluster.size() << " places";
    
    size_t valid_label_count = 0;
    size_t invalid_label_count = 0;
    
    for (const auto& place_id : cluster) {
      if (!places.hasNode(place_id)) {
        continue;
      }

      const auto& place = places.getNode(place_id);
      const auto& attrs = place.attributes<PlaceNodeAttributes>();
      
      // Only count valid VLM labels (10-13)
      if (isValidVlmLabel(attrs.semantic_label)) {
        label_counts[attrs.semantic_label]++;
        valid_label_count++;
        LOG(INFO) << "[RoomFinder DEBUG] Room " << room_id << " - Place " << place_id 
                  << " has VALID semantic_label=" << static_cast<int>(attrs.semantic_label);
      } else {
        invalid_label_count++;
        // Don't log every invalid label to reduce spam, just count them
      }
      
      // Also check mesh vertex labels if place has no valid VLM label
      if (!isValidVlmLabel(attrs.semantic_label) && !attrs.mesh_vertex_labels.empty()) {
        std::map<SemanticLabel, size_t> place_votes;
        for (const auto& label : attrs.mesh_vertex_labels) {
          if (isValidVlmLabel(label)) {
            place_votes[label]++;
          }
        }

        if (!place_votes.empty()) {
          using VotePair = std::pair<SemanticLabel, size_t>;
          const auto winner = std::max_element(place_votes.begin(), place_votes.end(), 
              [](const VotePair& a, const VotePair& b) { return a.second < b.second; });
          label_counts[winner->first]++;
        }
      }
    }
    
    LOG(INFO) << "[RoomFinder DEBUG] Room " << room_id << " - valid_labels=" << valid_label_count 
              << " invalid_labels=" << invalid_label_count;

    // Assign majority label to room
    SemanticLabel room_label = 0;
    if (!label_counts.empty()) {
      using VotePair = std::pair<SemanticLabel, size_t>;
      const auto winner = std::max_element(label_counts.begin(), label_counts.end(), 
          [](const VotePair& a, const VotePair& b) { return a.second < b.second; });
      room_label = winner->first;
      LOG(INFO) << "[RoomFinder DEBUG] Room " << room_id << " - Label voting result: winner=" 
                << static_cast<int>(room_label) << " with " << winner->second << " votes";
    } else {
      LOG(INFO) << "[RoomFinder DEBUG] Room " << room_id << " - No valid VLM labels found, using 0 (UNKNOWN)";
    }

    attrs->semantic_label = room_label;
    attrs->position = getRoomPosition(places, cluster);

    rooms->emplaceNode(room_id, std::move(attrs));
    ++room_id;
  }

  addEdgesToRoomLayer(places, last_results_.labels, cluster_room_map_, *rooms);
  return rooms;
}

void RoomFinder::addRoomPlaceEdges(DynamicSceneGraph& graph) const {
  for (const auto& id_node_pair : graph.getLayer(DsgLayers::PLACES).nodes()) {
    const auto cluster = last_results_.labels.find(id_node_pair.first);
    if (cluster == last_results_.labels.end()) {
      continue;
    }

    const auto room = cluster_room_map_.find(cluster->second);
    if (room == cluster_room_map_.end()) {
      continue;
    }

    // add edge enforcing parent invariants
    graph.insertEdge(room->second, id_node_pair.first, nullptr, true);
  }
}

void RoomFinder::fillClusterMap(const SceneGraphLayer& places,
                                ClusterMap& assignments) const {
  assignments.clear();
  for (const auto& id_node_pair : places.nodes()) {
    const auto place_id = id_node_pair.first;

    const auto cluster = last_results_.labels.find(place_id);
    if (cluster == last_results_.labels.end()) {
      continue;
    }

    const auto room = cluster_room_map_.find(cluster->second);
    if (room == cluster_room_map_.end()) {
      continue;
    }

    const auto room_id = room->second;
    auto assignment = assignments.find(room_id);
    if (assignment == assignments.end()) {
      assignment = assignments.emplace(room_id, std::vector<NodeId>()).first;
    }

    assignment->second.push_back(place_id);
  }
}

void RoomFinder::updateRoomLabels(DynamicSceneGraph& graph) const {
  // Helper to check if label is a valid VLM room label
  // Office: 10-13, Apartment: 20-24
  auto isValidVlmLabel = [](SemanticLabel label) -> bool {
    return (label >= 10 && label <= 13) || (label >= 20 && label <= 24);
  };

  if (!graph.hasLayer(DsgLayers::ROOMS)) {
    return;
  }

  const auto& rooms_layer = graph.getLayer(DsgLayers::ROOMS);
  const auto& places_layer = graph.getLayer(DsgLayers::PLACES);
  
  for (const auto& [room_id, room_node] : rooms_layer.nodes()) {
    // Get all child Place nodes
    const auto children = room_node->children();
    if (children.empty()) {
      continue;
    }

    // Count valid VLM labels from child Places
    std::map<SemanticLabel, size_t> label_counts;
    size_t valid_label_count = 0;
    
    for (const auto& child_id : children) {
      // Only process Place layer children
      if (NodeSymbol(child_id).category() != 'p') {
        continue;
      }
      
      if (!places_layer.hasNode(child_id)) {
        continue;
      }
      
      const auto& place_attrs = places_layer.getNode(child_id).attributes<PlaceNodeAttributes>();
      
      if (isValidVlmLabel(place_attrs.semantic_label)) {
        label_counts[place_attrs.semantic_label]++;
        valid_label_count++;
      }
      
      // Also check mesh vertex labels
      if (!isValidVlmLabel(place_attrs.semantic_label) && !place_attrs.mesh_vertex_labels.empty()) {
        std::map<SemanticLabel, size_t> place_votes;
        for (const auto& label : place_attrs.mesh_vertex_labels) {
          if (isValidVlmLabel(label)) {
            place_votes[label]++;
          }
        }
        
        if (!place_votes.empty()) {
          using VotePair = std::pair<SemanticLabel, size_t>;
          const auto winner = std::max_element(place_votes.begin(), place_votes.end(),
              [](const VotePair& a, const VotePair& b) { return a.second < b.second; });
          label_counts[winner->first]++;
          valid_label_count++;
        }
      }
    }
    
    // Vote for Room label
    if (!label_counts.empty()) {
      using VotePair = std::pair<SemanticLabel, size_t>;
      const auto winner = std::max_element(label_counts.begin(), label_counts.end(),
          [](const VotePair& a, const VotePair& b) { return a.second < b.second; });
      
      auto& room_attrs = graph.getNode(room_id).attributes<RoomNodeAttributes>();
      const auto old_label = room_attrs.semantic_label;
      const auto new_label = winner->first;
      
      if (old_label != new_label) {
        room_attrs.semantic_label = new_label;
        LOG(INFO) << "[RoomFinder DEBUG] Updated Room " << room_id 
                  << " label: " << static_cast<int>(old_label) 
                  << " -> " << static_cast<int>(new_label)
                  << " (votes: " << winner->second << "/" << valid_label_count << ")";
      }
    }
  }
}

}  // namespace hydra
