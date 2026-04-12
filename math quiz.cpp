#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3, ans;
    cout << "What is " << a << "+" << b << "? ";
    cin >> ans;

    if(ans == a+b)
        cout << "Correct!";
    else
        cout << "Wrong!";
}