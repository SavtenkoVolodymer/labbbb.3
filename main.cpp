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
Hotel Orion (12);
Hotel Grek = -Orion;
cout<< endl;
Orion.PrintHotel();
cout<<endl;
Grek.PrintHotel();
cout<<endl;
Hotel Drag (34);
Hotel Baba(32);
Hotel Hostel =Drag - Baba;
Hostel.PrintHotel();



    return 0;

}

