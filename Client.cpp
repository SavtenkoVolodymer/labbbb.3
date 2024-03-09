#include <iostream>
#include "Client.h"

Client :: Client ()
    : Hotel (), name("unknown"),age(0),days(0) {}
    Client :: Client (string Hname, int Hyears,string Hschuadle ,string new_name, int new_age, int new_days)
        : Hotel ( Hname,  Hyears, Hschuadle), name(new_name),age(new_age),days(new_days){}
        Client :: Client (const Client &other)
            : Hotel (other),name(other.name),age(other.age),days(other.days){}
