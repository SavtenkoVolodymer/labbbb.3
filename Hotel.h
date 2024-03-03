#ifndef VOVA_HOTEL_H
#define VOVA_HOTEL_H
#include <iostream>
using namespace std;


class Hotel {
private:
    string name;
    int years;
    string rate;
public:
    void PrintHotel();
    Hotel(std::string newname="None", int newyears=0, std::string newrate="unknown");
    ~Hotel(){
        cout<<endl;
        cout<<"Destructor is here";
    }

};


#endif //VOVA_HOTEL_H
