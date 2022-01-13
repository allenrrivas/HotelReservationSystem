#include "ReservationManagerHandler.hpp"
#include <iostream>
#include <string>

void ReservationManagerHandler::getListRooms(int count_guest,
                                             std::string arrival_date,
                                             std::string departure_date) {
  std::cout << "How many guests? ";
  std::cin >> count_guest;
  std::cout << "Arrival Date (M/D/Y): ";
  std::cin >> arrival_date;
  std::cout << "Departure Date (M/D/Y): ";
  std::cin >> departure_date;

  if (arrival_date == "01/30/2021" && departure_date == "02/16/2021") {
    std::cout << "\n -----List of Rooms----- \n";
    std::cout << count_guest << " guest from " << arrival_date << " to "
              << departure_date << ", Room Number: A10\n";
    std::cout << count_guest << " guest, from " << arrival_date << " to "
              << departure_date << ", Room Number: A11\n";
    std::cout << count_guest << " guest, from " << arrival_date << " to "
              << departure_date << ", Room Number: A12\n";
    std::cout << count_guest << " guest, from " << arrival_date << " to "
              << departure_date << ", Room Number: A16\n";
    std::cout << count_guest << " guest, from " << arrival_date << " to "
              << departure_date << ", Room Number: A18\n";
    std::cout << count_guest << " guest, from " << arrival_date << " to "
              << departure_date << ", Room Number: A21\n";
    std::cout << count_guest << " guest, from " << arrival_date << " to "
              << departure_date << ", Room Number: A22\n";
    std::cout << count_guest << " guest, from " << arrival_date << " to "
              << departure_date << ", Room Number: A24\n";
    std::cout << count_guest << " guest, from " << arrival_date << " to "
              << departure_date << ", Room Number: A27\n";
  }
}

void ReservationManagerHandler::getListServices(std::string service) {
  std::cout << "\n -----List of Services-----\n";
  std::cout << "    -Extra Pillow\n";
  std::cout << "    -Extra Bed Sheets\n";
  std::cout << "    -Extra Towels\n";
  std::cout << "    -Ironing Board\n";
  std::cout << "    -Map\n";
  std::cout << "    -Alarm Clock\n";
  std::cout << "    -Plug Adaptor\n";
}

void ReservationManagerHandler::makeReservation(std::string hotel,
                                                std::string room_type,
                                                int count_guest,
                                                std::string arrival_date,
                                                std::string departure_date) {
  std::cout << "Hotel: ";
  std::cin >> hotel;
  std::cin.ignore();
  std::cout << "Room Type (Single, Double, Suite): ";
  getline(std::cin, room_type);
  // std::cin >> room_type;
  std::cout << "How many guests? ";
  std::cin >> count_guest;
  // getline(std::cin, count_guest);
  // std::cin.ignore();
  std::cout << "Arrival Date (M/D/Y): ";
  std::cin >> arrival_date;
  std::cout << "Departure Date (M/D/Y): ";
  std::cin >> departure_date;

  if (hotel == "Fullerton" && room_type == "Suite" &&
      arrival_date == "01/30/2021" && departure_date == "02/16/2021") {
    std::cout << "\nReservation has been made at " << hotel << " Hotel from "
              << arrival_date << " to " << departure_date << " of room type "
              << room_type << ".\n";
    std::cout << "Total Cost: $350.00\n";
    std::cout << "Confirmation Number: 123456789\n";
  }
}

void ReservationManagerHandler::makePayment(std::string name,
                                            std::string cc_number,
                                            std::string expiration_date,
                                            std::string cv) {
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Credit/Debit Number (xxxx-xxxx-xxxx-xxxx): ";
  std::cin >> cc_number;
  std::cout << "Expiration Date (M/Y): ";
  std::cin >> expiration_date;
  std::cout << "CV (xxx): ";
  std::cin >> cv;

  if (name == "Allen" && cc_number == "1234-5678-9010-1112" &&
      expiration_date == "01/23" && cv == "456") {
    std::cout << "\nPayment has been completed.\n";
    std::cout << "Confirmation Number: 987654321\n";
  }
}

void ReservationManagerHandler::getReservation(
    std::string name, std::string confirmation_number) {
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Confirmation Number: ";
  std::cin >> confirmation_number;

  if (name == "Allen" && confirmation_number == "123456789") {
    std::cout << "\n"
              << name
              << " has a reservation at Fullerton Hotel from 01/30/2021 to "
                 "02/16/2021 of room type Suite.\n";
  }
}
void ReservationManagerHandler::getRoomNumber(std::string name,
                                              std::string cc_number,
                                              std::string room_number) {
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Confirmation Number: ";
  std::cin >> cc_number;

  if (name == "Allen" && cc_number == "123456789") {
    std::cout << "\n"
              << name << "'s"
              << " Room Number: A27\n";
  }
}

void ReservationManagerHandler::getRoomKey(std::string name,
                                           std::string room_number) {
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Room Number: ";
  std::cin >> room_number;

  if (name == "Allen" && room_number == "A27") {
    std::cout << "\nRoom Passcode: 123456\n";
  }
}

void ReservationManagerHandler::getAssignedRoom(std::string name) {
  std::cout << "Name: ";
  std::cin >> name;

  if (name == "Allen") {
    std::cout << "\nRoom has been assigned to A27.\n";
  }
}

// std::string ReservationManagerHandler::payBill(std::string name,
//                                                std::string room_number,
//                                                std::string cc_information) {
//   return "sheesh";
// }

void ReservationManagerHandler::getBillTotal(std::string name,
                                             std::string room_number) {
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Room Number: ";
  std::cin >> room_number;

  if (name == "Allen" && room_number == "A27") {
    std::cout << "\nTotal Cost: $350.00\n";
  }
}

void ReservationManagerHandler::sendDeletionCode(std::string phone_number) {
  std::string c;

  std::cout << "Phone Number: ";
  std::cin >> phone_number;

  if (phone_number == "310-123-4567") {
    std::cout << "\nDeletion Code: 9876\n";
    enterDeletionCode(c);
  }
}

void ReservationManagerHandler::enterDeletionCode(std::string code) {
  std::cout << "Enter Deletion Code: ";
  std::cin >> code;

  if (code == "9876") {
    std::cout << "\nAccount has been deleted.\n";
  }
}

void ReservationManagerHandler::cancelReservation(
    std::string name, std::string confirmation_number) {
  std::string cancel_code;

  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Confirmation Number: ";
  std::cin >> confirmation_number;

  if (name == "Allen" && confirmation_number == "123456789") {
    std::cout << "\nReservation had been cancelled from 01/30/2021 to "
                 "02/16/2021 of room type Suite at Fullerton Hotel\n";
    cancelConfirmation(cancel_code);
  }
}

void ReservationManagerHandler::cancelConfirmation(
    std::string cancellation_code) {
  std::cout << "Cancellation Confirmation Code: 987654\n";
}