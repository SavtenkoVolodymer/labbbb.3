
#ifndef LAB_ROOMS_H
#define LAB_ROOMS_H
#include <iostream>
#include "Rooms.h"
using namespace std;


class Rooms {
private :
    string name;
    int price;
public:
    Rooms();
    Rooms(string newname,int newprice);
    friend ostream & operator<<(ostream &os,const Rooms &obj);
    ~Rooms(){};
};


#endif //LAB_ROOMS_H
