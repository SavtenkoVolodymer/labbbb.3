

#ifndef LAB_ADMIN_H
#define LAB_ADMIN_H
#include <iostream>
using namespace std;



class Admin {
private:
    string First;
    string Last;
    int age;
public:
    Admin();
    Admin(string newFirst , string newLast, int newage);
    friend ostream & operator <<(ostream &out, const Admin &n);
    ~Admin(){
    };
};


#endif //LAB_ADMIN_H
