#include <iostream>
#include "StuffMember.h"

using namespace std;
StuffMember :: StuffMember ()
    : Hotel(), name("None"), age(0),years(0) {}
StuffMember ::StuffMember(string Hname , int Hyears, string Hschedule ,string new_name, int new_age, int new_years)
    : Hotel (Hname , Hyears , Hschedule), name{new_name},age{new_age },years{new_years} {}
    StuffMember :: StuffMember (StuffMember &&other)
        :Hotel (std::move (other)),name(std::move(other.name)) , age(other.age),years(other.years) {
    other.age=0;
    other.years=0;
}
    ostream &operator <<(ostream &os,const StuffMember &obj) {
    os<<"Name: "<<obj.name<<"  Age: "<<obj.age<<"  Years: "<<obj.years<<static_cast <const Hotel&>(obj);
    return os;
}
void StuffMember :: Function(){
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Years: "<<years<<endl;
};
void StuffMember ::Example (){
    cout << "Subsidiary class function method";
}
