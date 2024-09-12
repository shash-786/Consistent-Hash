#ifndef NODE_H
#define NODE_H

#include <string>
class Node {
private:
  std::string name;
  std::string ip;
  int capacity;

public:
  Node(std::string _n, std::string _ip, int _c = 1) {
    this->name = _n;
    this->ip = _ip;
    this->capacity = _c;
  }

  std::string get_node_name() const { return this->name; }
  std::string get_ip() const { return this->ip; }
  int get_capacity() const { return this->capacity; }
};

#endif // !NODE_H
