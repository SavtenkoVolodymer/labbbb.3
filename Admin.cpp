#include <iostream>
#include "Admin.h"
using namespace std;


ostream & operator <<(ostream &out , const Admin &n){
    out<<"First name: "<<n.First;
    out<<"Last name: "<<n.Last;
    return out;
}
istream & operator >>(istream &in, Admin &n){
    cout<<"First ";
    in>>n.First;
    cout<<"Second: ";
    in>> n.Last;
    return in;
}