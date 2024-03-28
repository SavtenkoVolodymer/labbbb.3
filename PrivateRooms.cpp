#include <iostream>
#include "PrivateRooms.h"





PrivateRooms::PrivateRooms()
        : Rooms (),housemaid("None"){}
PrivateRooms:: PrivateRooms (string Rname,int Rprice,int Rcapacity, int Rnumber, string new_housemaid)
        :Rooms( Rname, Rprice,Rcapacity,Rnumber), housemaid{new_housemaid} {}



string PrivateRooms::getHousemaid(){
    return housemaid;
}