#include <iostream>
#include "Rooms.h"

Rooms::Rooms()
        : Rooms ("None",0,0,0){}
Rooms::Rooms (string newname, int newprice,int newcapacity,int newnumber)
        :name {newname}, price{newprice}, capacity{newcapacity},number{newnumber}{}

ostream &operator<<(ostream &os,const Rooms &obj){
    os<<obj.number<<"\t"<<obj.name<<"\t"<<obj.capacity<<"\t"<<obj.price<<endl;
    return os;
}