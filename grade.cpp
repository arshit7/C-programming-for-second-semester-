#include <iostream>
using namespace std;

int main() {
    string name;
    int marks;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;

    // Grade calculation
    if (marks >= 90)
        cout << "Grade: A+" << endl;
    else if (marks >= 75)
        cout << "Grade: A" << endl;
    else if (marks >= 60)
        cout << "Grade: B" << endl;
    else if (marks >= 50)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: Fail" << endl;

    return 0;
}