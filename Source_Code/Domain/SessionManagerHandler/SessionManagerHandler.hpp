#ifndef SESSIONMANAGERHANDLER_H
#define SESSIONMANAGERHANDLER_H

#include <iostream>

class SessionManagerHandler {
public:
  void login(std::string name, std::string password);
  void create_acc(std::string name, std::string password);
  void terminate(std::string transaction_id);
};

#endif