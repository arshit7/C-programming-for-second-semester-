#include<iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if(rear == 4) return;
        if(front == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue() {
        if(front == -1 || front > rear) return;
        front++;
    }

    void display() {
        for(int i = front; i <= rear; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.display();
}