#include "Domain/SessionManagerHandler/SessionManagerHandler.hpp"
#include <iostream>

int main() {

  int opt;
  std::string n, p;
  SessionManagerHandler user;

  std::cout << "----- Hotel Room Reservation System -----";

  while (opt != 2) {
    std::cout << "\n1. Login";
    std::cout << "\n2. Create Account";
    std::cout << "\n3. Terminate\n";
    std::cin >> opt;

    if (opt == 1) {
      user.login(n, p);
    } else if (opt == 2) {
      user.create_acc(n, p);
    } else {
      break;
    }
  }

  return 0;
}