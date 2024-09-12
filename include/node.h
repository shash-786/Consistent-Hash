#ifndef NODE_H
#define NODE_H

#include <string>
class Node {
private:
  std::string name;
  std::string ip;

public:
  Node() : name(""), ip("") {}
  Node(std::string _n, std::string _ip) {
    this->name = _n;
    this->ip = _ip;
  }

  std::string get_node_name() const { return this->name; }
  std::string get_ip() const { return this->ip; }
};

#endif // !NODE_H
