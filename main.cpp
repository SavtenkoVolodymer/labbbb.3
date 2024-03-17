#include <iostream>
#include "StuffMember.h"
#include "Client.h"
#include "Hotel.h"
#include "Admin.h"
#include "Owner.h"


int main() {
    //StuffMember Name ("Orion",12,"Monday , Wednesday, Friday","Vova",30,12) ;
    //cout<<Name<<endl;
    //Client Name1 ("Orion1",13,"Monday , Wednesday, Friday","Vlad",19,23);
    //Client Name2=Name1 ;
    //cout<<Name1<<endl;
    //cout<<Name2<<endl;
    //StuffMember Name3 ("Bro",16,"Monday , Wednesday, Friday","Vovan",22,27);
    //StuffMember Name4 = move(Name3);
    //cout<<Name3<<endl;
    //cout<<Name4<<endl;
    //Admin Name5 ("Vasya","Down",9);
    //Owner Name6 ("Anya",12,"Female",Name5);
    //cout<<Name6;

    Hotel *Pointer = new Client ("Anya",25, "B" ,"A",12,15);
    Pointer -> Function();
    Pointer -> Example();
    cout<<endl;
    Hotel *Stuff = new StuffMember ("Vlad",29, "A" ,"A",11,17);
    Stuff -> Function();
    Stuff -> Example();
    cout<<endl;
    Hotel *Redefinition = new Client ("Anton",19, "C" ,"A",12,15);
    Redefinition -> Function2();
    Redefinition -> Example2();
    cout<<endl;
    StuffMember A ("Sanya",32, "ABC" ,"A",26,27);
    A.Best(A);
    A.Best(*Stuff);
    A.Best(*Redefinition);
    return 0;

}

