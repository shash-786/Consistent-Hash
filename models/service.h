#ifndef SERVICE_H
#define SERVICE_H

#include <string>
class service {
private:
  std::string id;
  // TODO: Insert consistent hashing object
  std::string action;

public:
  service(std::string _id, std::string _action) {
    this->id = _id;
    this->action = _action;
  }

  std::string get_id() const { return this->id; }
  std::string get_action() const { return this->action; }
};
#endif // !SERVICE_H
