#include<iostream>
#include<vector>
using namespace std;

class Stack {
    vector<int> v;

public:
    void push(int x) {
        v.push_back(x);
    }

    void pop() {
        if(!v.empty()) v.pop_back();
    }

    void top() {
        if(!v.empty()) cout << v.back();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.top();
}