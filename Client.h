#ifndef VOVA_CLIENT_H
#define VOVA_CLIENT_H
#include <iostream>
#include "Hotel.h"
using namespace std;



class Client : public Hotel {
private:
    string name;
    int age;
    int days;
public:
    Client();
    Client(string Hname, int Hyears,string Hschedule ,string new_name, int new_age, int new_days);
    friend ostream &operator<<(ostream &os, const Client &obj) ;

    Client(const Client &other);
    Client operator=(const Client &rhs);
    ~Client() {

    }

    void Function () ;
    void Example () override;
};

#endif //VOVA_HOTEL_H