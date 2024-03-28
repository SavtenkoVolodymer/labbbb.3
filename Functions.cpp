#include <iostream>
#include "Functions.h"
#include "memory"
#include "fstream"
#include "Rooms.h"
using namespace std;

void ReserveRoomsForClient(){
    ofstream foutRR("Roms_List.txt",ios_base::app);
    shared_ptr <int> num{new int {0}};
    shared_ptr <int> price{new int {0}};
    shared_ptr <int> cap{new int {0}};
    shared_ptr <string> name{new string {""}};
    cout<<"Enter number of room"<<endl;
    cin>>*num;
    cout<<"Enter price of room"<<endl;
    cin>>*price;
    cout<<"Enter capacity of room"<<endl;
    cin>>*cap;
    cout<<"Enter name of client"<<endl;
    cin>>*name;
    Rooms A (*name,*price,*cap,*num);
    foutRR<<A;
    foutRR.close();
}
