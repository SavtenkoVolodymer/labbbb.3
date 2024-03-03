#include <iostream>
#include "Client.h"//
Client::Client()
        : Client({"None"},{0},{0} ){}
Client::Client(std::string new_name)
        : Client({new_name},{0},{0}) {}
Client::Client(std::string new_name, int new_age)
        :Client({new_name},{new_age},{0}) {}
Client::Client(std::string new_name, int new_age, int new_days)
        : name{new_name},age{new_age},days{new_days} {}
void Client::PrintClient(){
    cout<<"Name "<<name<<" Age: "<<age<< " For how many days: "<<days;
}
Client::Client(const Client &other){
    name=other.name;
    age=other.age;
    days=other.days;
}
Client::Client(Client&& other)
        :name(other.name),age(other.age),days(other.days){
    other.name=" ";
    other.age=0;
    other.days =0;
}