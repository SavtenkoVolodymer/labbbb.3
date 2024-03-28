#ifndef VOVA_CLIENT_H
#define VOVA_CLIENT_H
#include <iostream>
using namespace std;



class Client   {
private:
    string name;
    string surname;
    int age;
    int days;
public:
    Client();
    Client(string new_name,string new_surname, int new_age, int new_days);
    friend ostream &operator<<(ostream &os, const Client &obj) ;

    Client(const Client &other);
    Client operator=(const Client &rhs);
    ~Client()  {};


};

#endif //VOVA_HOTEL_H