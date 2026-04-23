#include<iostream>
using namespace std;

class Student {
    int marks;
public:
    void input() {
        cin >> marks;
    }
    void display() {
        cout << "Marks = " << marks;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}