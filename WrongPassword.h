
#ifndef LAB_WRONGPASSWORD_H
#define LAB_WRONGPASSWORD_H
#include <iostream>
using namespace std;


class WrongPassword: public exception{
public:
    WrongPassword() = default;
    ~WrongPassword() = default;
    const char *what() const noexcept override{
        return "Wrong password!!!";
    };
};


#endif //LAB_WRONGPASSWORD_H
