// WAP to enter employee details, calculate salary and display record
#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    char empName[25];
    float basic;
    float hra, da, gross;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate()
    {
        hra = basic * 0.20;   // 20% HRA
        da  = basic * 0.10;   // 10% DA
        gross = basic + hra + da;
    }

    void display()
    {
        cout << "\nEmployee Salary Details\n";
        cout << "Employee ID   : " << empId << endl;
        cout << "Name          : " << empName << endl;
        cout << "Basic Salary  : " << basic << endl;
        cout << "HRA (20%)     : " << hra << endl;
        cout << "DA (10%)      : " << da << endl;
        cout << "Gross Salary  : " << gross << endl;
    }
};

int main()
{
    Employee e;
    e.input();
    e.calculate();
    e.display();

    return 0;
}
