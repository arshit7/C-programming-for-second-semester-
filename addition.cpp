// WAP to add student details and display record
#include <iostream>
using namespace std;

class student
{
private:
    int id;
    char name[20];
    int arr[5];
    int total;
    float percentage;
    char grade;
public:

void input()
{
    cout << "Enter student id: ";
    cin >> id;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if (arr[i] < 0 || arr[i] > 100)
        {
            cout << "Invalid marks! Enter again: ";
            i--;
        }
    }
}

void cal()
{
    total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += arr[i];
    }

    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';
}

void print()
{
    cout << "\nStudent Record\n";
    cout << "Student ID       : " << id << endl;
    cout << "Student Name     : " << name << endl;
    cout << "Total Marks      : " << total << endl;
    cout << "Percentage Marks : " << percentage << "%" << endl;
    cout << "Grade            : " << grade << endl;
}

};
int main()
{
    student s;
    s.input();
    s.cal();
    s.print();

    return 0;}
    