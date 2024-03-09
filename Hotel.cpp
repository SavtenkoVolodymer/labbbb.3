#include <iostream>
#include "Hotel.h"

Hotel :: Hotel ()
    : Hotel {"None",0,"unknown"} {}
  Hotel :: Hotel (string newname,int newyears,string newschedule)
    : name {newname},years {newyears},schedule {newschedule} {}
    ostream & operator<< (ostream &os, const Hotel &obj ){
    os<<"  Name: "<<obj.name<<"  Years: "<<obj.years<<"  Schedule: "<<obj.schedule;
    return os;
}


