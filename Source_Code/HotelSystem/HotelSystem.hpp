#include <iostream>

class HotelSystem {
public:
  virtual std::string getProfileInfo();
  virtual int getStatus();
  virtual std::string getPaymentInfo();
  virtual int login(std::string name, std::string password);
  virtual void terminate(int transaction_id);
  virtual std::string getListRooms(int count_guest, std::string arrival_date,
                           std::string departure_date);
  virtual std::string getListServices(std::string service);
  virtual std::string makeReservation(std::string hotel, std::string room_type,
                              int count_guest, std::string arrival_date,
                              std::string departure_date);
  virtual std::string makePayment(std::string name, std::string cc_number,
                           std::string expiration_date, std::string cv);
  virtual std::string getReservation(std::string name, std::string confirmation_number);
  virtual std::string getRoomNumber(std::string name, std::string cc_number,
                            std::string room_number);
  virtual std::string getRoomKey(std::string name, std::string room_number);
  virtual std::string getAssignedRoom(std::string name);
  virtual std::string payBill(std::string name, std::string room_number,
                      std::string cc_information);
  virtual std::string getBillTotal(std::string name, std::string room_number);
  virtual std::string sendDeletionCode(std::string phone_number);
  virtual std::string enterDeletionCode(std::string code);
  virtual std::string cancelReservation(std::string name,
                                std::string confirmation_number);
  virtual std::string cancelConfirmation(std::string cancellation_code);
};