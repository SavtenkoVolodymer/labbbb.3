#ifndef VOVA_STUFFMEMBER_H
#define VOVA_STUFFMEMBER_H
#include <iostream>
#include "Hotel.h"
using namespace std;

class StuffMember : public Hotel {
private:
    string name;
    int age;
    int years;
public:
    StuffMember();
    StuffMember( string Hname , int Hyears, string Hschedule ,string new_name, int new_age, int new_years);
    friend ostream &operator<<(ostream &os, const StuffMember &obj);
    StuffMember (StuffMember &&other);
    ~StuffMember() {
    }



};


#endif //VOVA_STUFFMEMBER_H
