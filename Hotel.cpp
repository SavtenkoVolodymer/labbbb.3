#include <iostream>
#include "Hotel.h"

Hotel::Hotel(std::string newname, int newyears, std::string newrate)
        : name{newname}, years{newyears}, rate{newrate}
{}
void Hotel::PrintHotel(){
    cout<<"Name: "<<name<<" Years:"<<years<<" Rate:"<< rate<<endl;
}
