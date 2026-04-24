#include<iostream>
using namespace std;

class Student {
    int marks;
public:
    void input() { cin >> marks; }
    void show() { cout << marks; }
};

int main() {
    Student s;
    s.input();
    s.show();
}