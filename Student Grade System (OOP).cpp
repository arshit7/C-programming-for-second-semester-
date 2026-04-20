#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    void input() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void grade() {
        if (marks >= 90) cout << "Grade A";
        else if (marks >= 75) cout << "Grade B";
        else if (marks >= 50) cout << "Grade C";
        else cout << "Fail";
    }
};

int main() {
    Student s;
    s.input();
    s.grade();
}