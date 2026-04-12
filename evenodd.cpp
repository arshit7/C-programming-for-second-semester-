#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int user, num = rand()%100;
    cout << "Guess Even(0) or Odd(1): ";
    cin >> user;

    if((num%2==0 && user==0) || (num%2!=0 && user==1))
        cout << "Correct! Number: " << num;
    else
        cout << "Wrong! Number: " << num;
}