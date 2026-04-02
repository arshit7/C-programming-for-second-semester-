#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    try {
        if(age < 18) {
            throw "Not Eligible";
        }
        cout << "Eligible to vote";
    }
    catch(const char* msg) {
        cout << "Exception: " << msg;
    }

    return 0;
}