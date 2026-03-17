#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

// Push
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed into stack\n";
    }
}

// Pop
void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        cout << stack[top] << " popped from stack\n";
        top--;
    }
}

// Peek
void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Top element: " << stack[top] << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    peek();
    pop();
    peek();

    return 0;
}