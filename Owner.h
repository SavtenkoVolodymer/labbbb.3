

#ifndef LAB_OWNER_H
#define LAB_OWNER_H
#include <iostream>
#include "Admin.h"


class Owner {
private :
    string name;
    int age;
    string sex;
    Admin admin ;
public:
    Owner();
    Owner (string newname, int newage , string newsex, Admin theadmin);
    friend ostream &operator<<(ostream &os,const Owner &obj);
    ~Owner(){

    }

};


#endif //LAB_OWNER_H
