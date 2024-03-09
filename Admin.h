

#ifndef LAB_ADMIN_H
#define LAB_ADMIN_H
#include <iostream>
using namespace std;



class Admin {
private:
    string First;
    string Last;
public:
    friend ostream & operator <<(ostream &out, const Admin &n);
    friend istream & operator >>(istream &in , Admin &n);
    ~Admin(){
        cout<< endl;
        cout<<"Destructor is here";
    }
};


#endif //LAB_ADMIN_H
