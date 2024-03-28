#include <iostream>
#include "Client.h"





Client::Client()
        : Client ("None","None",0,0){}
Client::Client (string newname,string newsurname, int newage , int newdays)
        :name {newname},surname {newsurname}, age{newage}, days{newdays} {}




ostream &operator<<(ostream &os, const Client &obj) {
    os<< "/t"<<obj.name<<"/t"<<obj.age<<"/t"<<obj.days;
    return os;
}


//Client Client::operator=(const Client &rhs) {
//    if(this==&rhs)
//        return *this;
//    else{
//        name=rhs.name;
//        age=rhs.age;
//        days=rhs.days;
//        return *this;
//    }
//
//}

