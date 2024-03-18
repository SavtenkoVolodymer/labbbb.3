
#ifndef LAB_PRIVATEROOMS_H
#define LAB_PRIVATEROOMS_H
#include <iostream>
#include "Rooms.h"

using namespace std;


class PrivateRooms : public Rooms {
    string name;
    int namber;
    string client;
public:
    PrivateRooms();
    PrivateRooms(string Rname,int Rprice , string newname,int newnamber,string newclient);
    friend ostream & operator<<(ostream &os,const PrivateRooms &obj);
    ~PrivateRooms(){};
    void PureFunction () override;
    void PureExample () override {cout<<"g";};

};


#endif //LAB_PRIVATEROOMS_H
