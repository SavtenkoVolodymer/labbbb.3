#ifndef VOVA_HOTEL_H
#define VOVA_HOTEL_H
#include <iostream>
using namespace std;


class Hotel {
private:
    string name;
    int years;
    string schedule;
public:
    Hotel();
    Hotel (string newname, int newyears,string newschedule);
    friend ostream & operator<<(ostream &os,const Hotel &obj);
    Hotel (const Hotel &other);
    Hotel (Hotel &&other);
    Hotel operator=(const Hotel &rhs);
    ~Hotel(){}



};


#endif //VOVA_HOTEL_H
