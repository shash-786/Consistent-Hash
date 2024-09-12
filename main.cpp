#include "include/consistenthash.h"
#include <iostream>

int main(int argc, char *argv[]) {
  ConsistentHash ch(3); // 3 virtual nodes per real node

  Node node1("node1", "192.168.1.1");
  Node node2("node2", "192.168.1.2");
  Node node3("node3", "192.168.1.3");

  ch.AddKey(node1);
  ch.AddKey(node2);
  ch.AddKey(node3);

  Request req1("foo");
  Request req2("bar");
  Request req3("foobar");

  std::cout << "Request 1 assigned to: "
            << ch.getAssignedNode(req1).get_node_name() << std::endl;
  std::cout << "Request 2 assigned to: "
            << ch.getAssignedNode(req2).get_node_name() << std::endl;
  std::cout << "Request 3 assigned to: "
            << ch.getAssignedNode(req3).get_node_name() << std::endl;

  ch.RemoveKey(node3);
  /* ch.RemoveKey(node1); */

  std::cout << "After removing node:" << std::endl;
  std::cout << "Request 1 assigned to: "
            << ch.getAssignedNode(req1).get_node_name() << std::endl;
  std::cout << "Request 2 assigned to: "
            << ch.getAssignedNode(req2).get_node_name() << std::endl;
  std::cout << "Request 3 assigned to: "
            << ch.getAssignedNode(req3).get_node_name() << std::endl;

  return 0;
}
