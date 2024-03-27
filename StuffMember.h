#ifndef VOVA_STUFFMEMBER_H
#define VOVA_STUFFMEMBER_H
#include <iostream>
using namespace std;

class StuffMember  {
private:
    string name;
    int age;
    int years;
public:
    StuffMember();
    StuffMember(  string new_name, int new_age, int new_years);
    friend ostream &operator<<(ostream &os, const StuffMember &obj);
    StuffMember (StuffMember &&other);
    ~StuffMember() {};

};


#endif //VOVA_STUFFMEMBER_H
