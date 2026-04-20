#include <iostream>
using namespace std;

int main() {
    string user, pass;
    int attempts = 3;

    while (attempts--) {
        cout << "Username: ";
        cin >> user;
        cout << "Password: ";
        cin >> pass;

        if (user == "admin" && pass == "1234") {
            cout << "Login Success";
            return 0;
        }
        else {
            cout << "Wrong! Attempts left: " << attempts << endl;
        }
    }
    cout << "Account Locked";
}