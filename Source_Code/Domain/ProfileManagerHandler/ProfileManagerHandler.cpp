#include "ProfileManagerHandler.hpp"
#include <iostream>

void ProfileManagerHandler::getProfileInfo() {
  std::cout << "\nName: Allen Rivas\n";
  std::cout << "Address: 637  Tator Patch Road Los Angeles, CA\n";
  std::cout << "Phone Number: 310-123-4567\n";
  std::cout << "Email: allenrivas@gmail.com\n";
}

void ProfileManagerHandler::getStatus() {
  std::cout << "\nMembership Status: Platnium Member\n";
}
void ProfileManagerHandler::getPaymentInfo() {
  std::cout << "\nCredit/Debit Card Number: 1234-5678-9010-1112\n";
  std::cout << "Expiration Date: 01/23\n";
  std::cout << "CVV: 456\n";
}
