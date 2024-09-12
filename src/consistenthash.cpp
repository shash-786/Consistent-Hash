#include "../include/consistenthash.h"
#include <cstddef>
#include <stdexcept>
#include <string>

void ConsistentHash::AddKey(const Node &node) {
  for (int i = 0; i < replication_factor; i++) {
    std::string key = std::to_string(i + 1) + node.get_node_name();
    size_t hash_val = hash(key);
    ring[hash_val] = node;
  }
}

void ConsistentHash::RemoveKey(const Node &node) {
  for (int i = 0; i < replication_factor; i++) {
    std::string key = std::to_string(i + 1) + node.get_node_name();
    size_t hash_val = hash(key);
    ring.erase(hash_val);
  }
}

Node ConsistentHash::getAssignedNode(const Request &request) {
  if (ring.empty()) {
    throw std::runtime_error("ring is empty");
  }
  size_t hash_val = hash(request.get_rname());
  auto it = ring.lower_bound(hash_val);
  if (it == ring.end())
    return ring.begin()->second;

  return (*it).second;
}
