#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    cout << "1.Add 2.Sub 3.Mul 4.Div\n";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4:
            if (b != 0) cout << a / b;
            else cout << "Error";
            break;
        default: cout << "Invalid";
    }
}