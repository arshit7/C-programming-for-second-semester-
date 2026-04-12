#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand()%10+1, guess;

    cout << "Guess (1-10): ";
    cin >> guess;

    if(guess == num)
        cout << "🎉 Correct!";
    else
        cout << "❌ Wrong! Number was " << num;

    return 0;
}