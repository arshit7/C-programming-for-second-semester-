#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;

    if (b != 0)
    {
        cout << "Division = " << a / b << endl;
        cout << "Modulus = " << a % b << endl;
    }
    else
    {
        cout << "Division and Modulus not possible (division by zero)" << endl;
    }

    return 0;
}
