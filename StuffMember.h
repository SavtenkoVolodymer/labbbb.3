#ifndef VOVA_STUFFMEMBER_H
#define VOVA_STUFFMEMBER_H
#include <iostream>
using namespace std;

class StuffMember {
private:
    string name;
    int age;
    int years;
public:
    void PrintStuff();
    StuffMember();
    StuffMember(string new_name);
    StuffMember(string new_name, int new_age);
    StuffMember(string new_name, int new_age, int new_years);
    ~StuffMember() {
        cout << endl;
        cout << "Destructor is here";
    }
};


#endif //VOVA_STUFFMEMBER_H
