#include "SessionManagerHandler.hpp"
#include "HotelSystem/Objects.hpp"
#include "ProfileManagerHandler/ProfileManagerHandler.hpp"
#include "ReservationManagerHandler/ReservationManagerHandler.hpp"
#include <iostream>
#include <vector>

void SessionManagerHandler::login(std::string name, std::string password) {

  int loginAttempt = 0;
  int opt, cnt_guest;
  std::string h, rm_type, arrival_d, departure_d, confirmation_num, cc_num,
      exp_date, cv_num, ser, room_num, phone_num, t_id;

  ReservationManagerHandler option;
  ProfileManagerHandler profile_option;

  while (true) {

    std::cout << "\n1. Guest Login";
    std::cout << "\n2. Receptionist Login";
    std::cout << "\n3. Terminate\n";
    std::cin >> opt;

    if (opt == 1) {
      std::cout << "Please enter your user name: ";
      std::cin >> name;
      std::cout << "Please enter your user password: ";
      std::cin >> password;

      if (name == "Allen" && password == "12345") {

        while (true) {
          std::cout << "\n1. Make Reservation";
          std::cout << "\n2. Cancel Reservation";
          std::cout << "\n3. Make Payment";
          std::cout << "\n4. List Rooms";
          std::cout << "\n5. List Services";
          std::cout << "\n6. Profile Information";
          std::cout << "\n7. Profile Status";
          std::cout << "\n8. Profile Payment Information";
          std::cout << "\n9. Delete Account";
          std::cout << "\n10. Terminate\n";
          std::cin >> opt;

          if (opt == 1) {
            option.makeReservation(h, rm_type, cnt_guest, arrival_d,
                                   departure_d);
          } else if (opt == 2) {
            option.cancelReservation(name, confirmation_num);
          } else if (opt == 3) {
            option.makePayment(name, cc_num, exp_date, cv_num);
          } else if (opt == 4) {
            option.getListRooms(cnt_guest, arrival_d, departure_d);
          } else if (opt == 5) {
            option.getListServices(ser);
          } else if (opt == 6) {
            profile_option.getProfileInfo();
          } else if (opt == 7) {
            profile_option.getStatus();
          } else if (opt == 8) {
            profile_option.getPaymentInfo();
          } else if (opt == 9) {
            option.sendDeletionCode(phone_num);
          } else {
            terminate(t_id);
            break;
          }
        }
      } else {
        std::cout << "\nInvalid login attempt. Please try again.\n" << '\n';
      }

    } else if (opt == 2) {
      std::cout << "Please enter your user name: ";
      std::cin >> name;
      std::cout << "Please enter your user password: ";
      std::cin >> password;

      if (name == "Rivas" && password == "67890") {
        while (true) {
          std::cout << "\n1. Make Reservation";
          std::cout << "\n2. Cancel Reservation";
          std::cout << "\n3. Total Bill";
          std::cout << "\n4. List Rooms";
          std::cout << "\n5. List Services";
          std::cout << "\n6. Get Reservation";
          std::cout << "\n7. Room Number";
          std::cout << "\n8. Assign Room";
          std::cout << "\n9. Room Key";
          std::cout << "\n10. Pay Bill";
          std::cout << "\n11. Terminate\n";
          std::cin >> opt;

          if (opt == 1) {
            option.makeReservation(h, rm_type, cnt_guest, arrival_d,
                                   departure_d);
          } else if (opt == 2) {
            option.cancelReservation(name, confirmation_num);
          } else if (opt == 3) {
            option.getBillTotal(name, room_num);
          } else if (opt == 4) {
            option.getListRooms(cnt_guest, arrival_d, departure_d);
          } else if (opt == 5) {
            option.getListServices(ser);
          } else if (opt == 6) {
            option.getReservation(name, confirmation_num);
          } else if (opt == 7) {
            option.getRoomNumber(name, cc_num, room_num);
          } else if (opt == 8) {
            option.getAssignedRoom(name);
          } else if (opt == 9) {
            option.getRoomKey(name, room_num);
          } else if (opt == 10) {
            option.makePayment(name, cc_num, exp_date, cv_num);
          } else {
            terminate(t_id);
            break;
          }
        }
      } else {
        std::cout << "\nInvalid login attempt. Please try again.\n" << '\n';
      }
    } else {
      break;
    }
  }
}

void SessionManagerHandler::create_acc(std::string name, std::string password) {
  std::cout << "Please enter your user name: ";
  std::cin >> name;
  std::cout << "Please enter your user password: ";
  std::cin >> password;

  if (name == "Allen" && password == "12345") {
    std::cout << "\nAccount has been created.\n";
  }
}

void SessionManagerHandler::terminate(std::string transaction_id) {
  std::cout << "Enter Transaction ID: ";
  std::cin >> transaction_id;

  if (transaction_id == "12345") {
    std::cout << "\nThank you for logging in.\n";
  }
}