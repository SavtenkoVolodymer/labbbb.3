#include <iostream>
#include "Client.h"

Client :: Client ()
    : Hotel (), name("unknown"),age(0),days(0) {}
    Client :: Client (string Hname, int Hyears,string Hschedule ,string new_name, int new_age, int new_days)
        : Hotel ( Hname,  Hyears, Hschedule), name(new_name),age(new_age),days(new_days){}
        Client :: Client (const Client &other)
            : Hotel (other),name(other.name),age(other.age),days(other.days){}
            ostream &operator<<(ostream &os, const Client &obj) {
    os<< "Name: "<<obj.name<<"  Age: "<<obj.age<<"  Days: "<<obj.days<<static_cast <const Hotel&>(obj);
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

void Client :: Function (){
    cout<<"Name client: "<<name<<endl<<"Age: "<<age<<endl<<"Days: "<<days<<endl;
};
void Client ::Example (){
    cout <<"Subsidiary class function method";
    cout<<endl;
}
void Client :: Function2 (){
    cout<<"Name client: "<<name<<endl<<"Age: "<<age<<endl<<"Days: "<<days<<endl;
};
void Client ::Example2 (){
    cout <<"Redefinition";
    cout<<endl;
}
