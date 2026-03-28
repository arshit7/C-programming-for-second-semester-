#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX], top = -1;

void push(int val){
    if(top == MAX-1)
        cout<<"Overflow\n";
    else{
        stack[++top] = val;
        cout<<"Pushed "<<val<<endl;
    }
}

void pop(){
    if(top == -1)
        cout<<"Underflow\n";
    else
        cout<<"Popped "<<stack[top--]<<endl;
}

void display(){
    for(int i=top;i>=0;i--)
        cout<<stack[i]<<" ";
}

int main(){
    push(10);
    push(20);
    push(30);
    pop();
    display();
}