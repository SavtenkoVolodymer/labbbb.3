#include "Owner.h"



Owner :: Owner()
    :Owner{"None",0,"unknown", Admin ("None","None",0)} {}
    Owner::Owner (string newname, int newage ,string newsex, Admin theadmin)
        :name{newname},age{newage},sex{newsex}, admin(theadmin) {}
        ostream &operator<<(ostream &os,const Owner &obj){
    os<<"Name: "<<obj.name<<"  Age: "<<obj.age<<"  Sex: "<<obj.sex<<obj.admin;
    return os;
}