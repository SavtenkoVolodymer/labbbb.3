#include <iostream>
#include "StuffMember.h"//
StuffMember::StuffMember(string name)
        :name("unknown"),age(0),years(0)
{
    this->name=name;

};
StuffMember::StuffMember(string name,int age) : StuffMember(name)
{
    this->age=age;
};
StuffMember::StuffMember(string name,int age, int years) : StuffMember(name,age)
{
    this->years=years;
};

void StuffMember::PrintStuff(){
    cout<<"Name "<<name<<" Age: "<<age<< " Years: "<<years;

}