#ifndef RESERVATIONMANAGERHANDLER_H
#define RESERVATIONMANAGERHANDLER_H

#include <iostream>
//#include "HotelSystem.hpp"

class ReservationManagerHandler{

public:
    void getListRooms(int count_guest, std::string arrival_date, std::string departure_date);
    void getListServices(std::string service);
    void makeReservation(std::string hotel, std::string room_type, int count_guest, std::string arrival_date, std::string departure_date);
    void makePayment(std::string name, std::string cc_number, std::string expiration_date, std::string cv);
    void getReservation(std::string name, std::string confirmation_number);
    void getRoomNumber(std::string name, std::string cc_number, std::string room_number);
    void getRoomKey(std::string name, std::string room_number);
    void getAssignedRoom(std::string name);
    // std::string payBill(std::string name, std::string room_number, std::string cc_information);
    void getBillTotal(std::string name, std::string room_number);
    void sendDeletionCode(std::string phone_number);
    void enterDeletionCode(std::string code);
    void cancelReservation(std::string name, std::string confirmation_number);
    void cancelConfirmation(std::string cancellation_code);

};

#endif