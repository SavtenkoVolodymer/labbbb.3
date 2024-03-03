#ifndef VOVA_HOTEL_H
#define VOVA_HOTEL_H
#include <iostream>
using namespace std;


class Hotel {
private:

    int years;

public:
    void PrintHotel();
    Hotel(int newyears): years (newyears){};
    Hotel operator -()const;
    Hotel operator -(const Hotel &other) const;
    ~Hotel(){
        cout<<endl;
        cout<<"Destructor is here";
    }

};


#endif //VOVA_HOTEL_H
