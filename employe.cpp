#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float basic, hra, da, gross;

public:
    void input() {
        cout << "Enter ID, Name, Basic Salary: ";
        cin >> id >> name >> basic;
    }

    void calculate() {
        hra = basic * 0.2;
        da = basic * 0.1;
        gross = basic + hra + da;
    }

    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nBasic: " << basic;
        cout << "\nGross Salary: " << gross << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.calculate();
    e.display();
}