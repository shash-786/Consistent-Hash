#ifndef REQUEST_H
#define REQUEST_H

#include <string>
class Request {
private:
  std::string request_id;
  std::string service_id;
  std::string action;

public:
  Request(std::string _rid, std::string _sid, std::string _a) {
    this->request_id = _rid;
    this->service_id = _sid;
    this->action = _a;
  }

  std::string get_rid() const { return this->request_id; }
  std::string get_sid() const { return this->service_id; }
  std::string get_action() const { return this->action; }
};

#endif // !REQUEST_H
