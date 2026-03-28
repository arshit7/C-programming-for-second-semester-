#include <iostream>
using namespace std;

int main() {
    int n = 1011, base = 1, dec = 0;

    while(n){
        int last = n % 10;
        dec += last * base;
        base *= 2;
        n /= 10;
    }

    cout << "Decimal: " << dec;
}