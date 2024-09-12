#ifndef REQUEST_H
#define REQUEST_H

#include <string>
class Request {
private:
  std::string request_name;

public:
  Request(std::string _rname) { this->request_name = _rname; }

  std::string get_rname() const { return this->request_name; }
};

#endif // !REQUEST_H
