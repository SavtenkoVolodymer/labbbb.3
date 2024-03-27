
#ifndef LAB_PRIVATEROOMS_H
#define LAB_PRIVATEROOMS_H
#include <iostream>
#include "Rooms.h"

using namespace std;


class PrivateRooms : public Rooms {
    int number;
    string client;
public:
    PrivateRooms();
    PrivateRooms(string Rname,int Rprice ,int new_number,string newclient);
    friend ostream & operator<<(ostream &os,const PrivateRooms &obj);
    ~PrivateRooms(){};
    int getNumber();
    string getClient();
};


#endif //LAB_PRIVATEROOMS_H
