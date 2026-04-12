#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "Q1: 2+2? ";
    cin >> ans;
    if(ans==4) score++;

    cout << "Q2: 5*2? ";
    cin >> ans;
    if(ans==10) score++;

    cout << "Q3: 10-3? ";
    cin >> ans;
    if(ans==7) score++;

    cout << "Your Score: " << score << "/3\n";

    if(score==3) cout<<"Excellent!";
    else cout<<"Good Try!";
}