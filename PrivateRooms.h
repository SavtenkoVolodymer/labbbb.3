
#ifndef LAB_PRIVATEROOMS_H
#define LAB_PRIVATEROOMS_H
#include <iostream>
#include "Rooms.h"
using namespace std;

class PrivateRooms : public Rooms {
    string housemaid;
public:
    PrivateRooms();
    PrivateRooms(string Rname,int Rprice ,int Rcapacity,int Rnumber,string new_housemaid);
    friend ostream & operator<<(ostream &os,const PrivateRooms &obj);
    ~PrivateRooms(){};
    int getNumber();
    string getHousemaid();
};


#endif //LAB_PRIVATEROOMS_H
