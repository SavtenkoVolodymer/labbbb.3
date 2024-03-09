#include <iostream>
#include "Admin.h"
using namespace std;

Admin::Admin()
    :Admin ("None","None",0){}
    Admin ::Admin(string newFirst, string newLast , int newage)
        :First {newFirst},Last{newLast}, age{newage} {}

ostream & operator <<(ostream &out , const Admin &n){
    out<<"First name: "<<n.First;
    out<<"Last name: "<<n.Last;
    return out;
}

