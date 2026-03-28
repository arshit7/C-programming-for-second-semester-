#include <iostream>
using namespace std;

int main() {
    int q[5], front=0, rear=-1;

    rear++; q[rear]=10;
    rear++; q[rear]=20;

    cout<<"Front: "<<q[front]<<endl;

    front++;
    cout<<"After deletion: "<<q[front];
}