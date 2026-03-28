#include <iostream>
using namespace std;

int main() {
    int q[3], front=0, rear=0;

    q[rear]=10;
    rear=(rear+1)%3;

    q[rear]=20;
    rear=(rear+1)%3;

    cout<<q[front]<<" "<<q[front+1];
}