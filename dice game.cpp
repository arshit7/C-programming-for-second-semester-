#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int dice = rand()%6+1;
    cout << "Rolling Dice...\n";
    cout << "You got: " << dice << endl;

    if(dice == 6) cout << "Jackpot!";
    else cout << "Try again!";
}