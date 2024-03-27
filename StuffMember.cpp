#include <iostream>
#include "StuffMember.h"

using namespace std;

StuffMember::StuffMember()
        : StuffMember ("None",0,0){}
StuffMember::StuffMember (string newname, int newage , int newyears)
        :name {newname},age{newage}, years{newyears} {}


    ostream &operator <<(ostream &os,const StuffMember &obj) {
    os<<"/t"<<obj.name<<"/t"<<obj.age<<"/t"<<obj.years;
    return os;
}
