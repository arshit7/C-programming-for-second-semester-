#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num = rand()%50, guess;
    cout << "Enter number: ";
    cin >> guess;

    if(guess > num) cout << "Too High!";
    else if(guess < num) cout << "Too Low!";
    else cout << "Correct!";
}