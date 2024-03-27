#include <iostream>
#include "Client.h"





Client::Client()
        : Client ("None",0,0){}
Client::Client (string newname, int newage , int newdays)
        :name {newname},age{newage}, days{newdays} {}




ostream &operator<<(ostream &os, const Client &obj) {
    os<< "/t"<<obj.name<<"/t"<<obj.age<<"/t"<<obj.days;
    return os;
}


Client Client::operator=(const Client &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        age=rhs.age;
        days=rhs.days;
        return *this;
    }

}

