#ifndef CONSISTENTHASH_H

#define CONSISTENTHASH_H

#include "node.h"
#include "request.h"
#include <map>
#include <string>
class ConsistentHash {
private:
  std::map<size_t, Node> ring;
  int replication_factor;
  std::hash<std::string> hasher;

  size_t hash(const std::string inp) { return hasher(inp); }

public:
  ConsistentHash(int _rep = 1) : replication_factor(_rep) {}

  void AddKey(const Node &node);
  void RemoveKey(const Node &node);
  Node getAssignedNode(const Request &request);
};

#endif // !CONSISTENTHASH_H
