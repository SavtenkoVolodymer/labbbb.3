#ifndef VOVA_CLIENT_H
#define VOVA_CLIENT_H
#include <iostream>
using namespace std;



class Client {
private:
    static int Amount;
    string name;
    int age;
    int days;
public:
    static int getAmount();
    void PrintClient();
    Client();
    Client(string new_name);
    Client(string new_name, int new_age);
    Client(string new_name, int new_age, int new_days);
    Client(const Client &other);
    Client(Client &&other);
    ~Client() {
        cout << endl;
        cout << "Destructor is here";
    }
};
#endif //VOVA_HOTEL_H