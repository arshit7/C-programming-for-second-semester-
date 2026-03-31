#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    Student(int m) { marks = m; }

    friend ostream& operator<<(ostream &out, Student s);
};

ostream& operator<<(ostream &out, Student s) {
    out << "Marks: " << s.marks;
    return out;
}

int main() {
    Student s(90);
    cout << s;
}