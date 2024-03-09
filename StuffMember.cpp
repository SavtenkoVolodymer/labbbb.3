#include <iostream>
#include "StuffMember.h"


StuffMember :: StuffMember ()
    : Hotel(), name("None"), age(0),years(0) {}
StuffMember ::StuffMember(string Hname , int Hyears, string Hschedule ,string new_name, int new_age, int new_years)
    : Hotel (Hname , Hyears , Hschedule), name{new_name},age{new_age },years{new_years} {}
    ostream &operator <<(ostream &os,const StuffMember &obj) {
    os<<"Name: "<<obj.name<<"  Age: "<<obj.age<<"  Years: "<<obj.years<<static_cast <const Hotel&>(obj);
    return os;

}
