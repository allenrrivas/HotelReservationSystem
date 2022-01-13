#include <iostream>
#include <vector>

class Profile {
public:
  std::string name;
  std::string password;
  std::string email;
  std::string memberID;
  std::string address;
};

class Amenities {
public:
  std::string type;
};

class Room {
public:
  Room();
  ~Room();
  std::string getRoom();
};

class Floor {
public:
  Floor();
  ~Floor();
  Floor searchFloor();
};

class Hotel {
public:
  std::string hotel_name;
  std::string address;
};

class Reservation {
public:
  Reservation();
  ~Reservation();
};

class Bill {
public:
  double total_cost;
};

class Date {
public:
  std::string arrival_date;
  std::string departure_date;
};

class GuestSession {
public:
  GuestSession();
  ~GuestSession();
  std::vector<std::string> getCommands;
};

class PaymentType {
public:
  PaymentType();
  ~PaymentType();
};

class ReceptionstSession {
public:
  ReceptionstSession();
  ~ReceptionstSession();
  std::vector<std::string> getCommands;
};

class CreditCard : public PaymentType{
  std::string name, cc_num, exp_date, cv_num;
};

class Venmo : public PaymentType{
  std::string name, cc_num, exp_date, cv_num;
};

class PayPal : public PaymentType{
  std::string name, cc_num, exp_date, cv_num;
};

