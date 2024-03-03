#include <iostream>
#include "StuffMember.h"
#include "Client.h"
#include "Hotel.h"


int main() {
    StuffMember First("Anton",17);
    First.PrintStuff();
    cout<<endl;

    Client Next("Vova",19);
    Next.PrintClient();
    cout<<endl;
    Hotel Last;
    Last.PrintHotel();
    Hotel chinazes{Hotel("Namber",2,"Good")};
    chinazes.PrintHotel();
    Client Vovan("Oracul",17,5);
    Client Anton = Vovan;
    cout<<"Original ";
    Vovan.PrintClient();
    cout<<endl<<"Copy ";
    Anton.PrintClient();
    cout<<endl;
    Client Brain("Borka",22,8);
    Client Namber = move(Brain);
    cout<<"Original ";
    Brain.PrintClient();
    cout<<endl<<"Copy ";
    Namber.PrintClient();
cout<<"Amount "<<Client::getAmount();


    return 0;

}

