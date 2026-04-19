#include <iostream>
using namespace std;

int main() {
    string pass;
    cin >> pass;

    if (pass.length() >= 8)
        cout << "Strong Password";
    else
        cout << "Weak Password";
}