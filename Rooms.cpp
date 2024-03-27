#include <iostream>
#include "Rooms.h"

Rooms::Rooms()
        : Rooms ("None",0){}
Rooms::Rooms (string newname, int newprice)
        :name {newname}, price{newprice} {}
