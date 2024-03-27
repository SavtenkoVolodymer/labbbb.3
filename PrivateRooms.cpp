#include <iostream>
#include "PrivateRooms.h"





PrivateRooms::PrivateRooms()
        : Rooms (),number(0),client("None"){}
PrivateRooms:: PrivateRooms (string Rname, int Rprice, int new_namber, string new_client)
        :Rooms( Rname, Rprice), number{new_namber},client{new_client} {}


int PrivateRooms::getNumber(){
    return number;
}
string PrivateRooms::getClient(){
    return client;
}