#include <iostream>
#include "StuffMember.h"
#include "Client.h"
#include "Hotel.h"
#include "Admin.h"
#include "Owner.h"
#include "Rooms.h"
#include "WrongChoice.h"
#include "WrongPassword.h"
#include "Functions.h"

using namespace std;
int main() {
try {
    cout << "Welcome to the Hotel" << endl << endl;
    cout << "Choose who you  are: " << endl << "Enter 1 if you are the Admin"
         << endl << "Enter 2 if you are the Client" << endl;
    int init;
    cin >> init;
        if (init == 1)   //for Admin
        {
            string password;
            cout << "Enter the password" << endl;
            cin >> password;
                if (password == "777") {
                    while(true){
                        cout << "Chose what do you want:" << endl;
                        cout << "A - to reserve room for CLIENT" << endl;
                        cout << "B - to add ADMIN" << endl;
                        cout << "C - to add New CLIENT" << endl;
                        char choice;
                        cin>>choice;
                        if(choice!='A' && choice!='B' && choice!='C' && choice!='Q')
                            throw WrongChoice();
                        switch (choice) {
                            case 'A': {
                                ReserveRoomsForClient();
                                break;
                            }
                            case 'B': {
                                break;
                            }
                            case 'C': {
                                break;
                            }
                            case 'Q': {
                                return 0;
                            }
                        }
                    }

                }
                else {
                    throw WrongPassword();
                }
        }
        else if (init == 2) {
            while(true) {
                cout << "Hello Client!" << endl;
                cout << "Chose what do you want:" << endl;
                cout << "A - to reserve room for you" << endl;
                cout << "B - View available rooms" << endl;
                cout << "C - View term of reserve your`s room" << endl;
                cout << "D - View your`s history of reservation" << endl;
                char choice;
                cin >> choice;
                if(choice!='A' && choice!='B' && choice!='C' && choice!='D' && choice!='Q')
                    throw WrongChoice();
                switch (choice) {
                    case 'A': {
                        break;
                    }
                    case 'B': {
                        break;
                    }
                    case 'C': {
                        break;
                    }
                    case 'D': {
                        break;
                    }
                    case 'Q':{
                        return 0;
                    }

                }
            }
        } else {
            throw WrongChoice();

        }
    }



    catch (WrongChoice &A){
        cerr<<A.what();
    }

    catch (WrongPassword &A){
        cerr<<A.what();
    }
}

