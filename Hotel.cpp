#include <iostream>
#include "Hotel.h"

Hotel :: Hotel ()
    : Hotel {"None",0,"unknown"} {}
  Hotel :: Hotel (string newname,int newyears,string newschedule)
    : name {newname},years {newyears},schedule {newschedule} {}
Hotel :: Hotel (const Hotel &other ){
    name =other.name;
    years= other.years;
    schedule = other.schedule;
}
Hotel :: Hotel (Hotel &&other )
        : name(other.name),years(other.years),schedule(other.schedule) {
    other.name = "";
    other.years = 0;
    other.schedule = "";
}
    ostream & operator<< (ostream &os, const Hotel &obj ) {
        os << "  Name: " << obj.name << "  Years: " << obj.years << "  Schedule: " << obj.schedule;
        return os;
    }
Hotel Hotel::operator=(const Hotel &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        years=rhs.years;
        schedule=rhs.schedule;
        return *this;
    }

}
void Hotel :: Function (){
    cout<<"  Name: "<<name<<endl<<"  Years: "<<  years<<endl<<"  Schedule: "<<  schedule<<endl;
}
void Hotel :: Example(){
    cout << "Parent class function method";
}








