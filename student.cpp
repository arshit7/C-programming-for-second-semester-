#include <iostream>
using namespace std;

class Student {
    int marks[5], total = 0;
    float percent;

public:
    void input() {
        cout << "Enter 5 marks:\n";
        for(int i=0;i<5;i++) cin >> marks[i];
    }

    void calculate() {
        for(int i=0;i<5;i++)
            total += marks[i];

        percent = total / 5.0;
    }

    void display() {
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percent << "%" << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.calculate();
    s.display();
}