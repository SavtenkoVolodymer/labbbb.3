
#ifndef LAB_WRONGCHOICE_H
#define LAB_WRONGCHOICE_H
#include <iostream>
using namespace std;


class WrongChoice : public exception {
public:
    WrongChoice() = default;
    ~WrongChoice () = default;
    const char *what() const noexcept override{
        return "Wrong choice!!!";
    };
};

#endif //LAB_WRONGCHOICE_H
