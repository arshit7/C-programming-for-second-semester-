#include <iostream>
#include <cstdio>
using namespace std;

// ================= Q2 FUNCTION =================
void f_array(int a[], int n) {
    for (int i = 0; i < n - 1; ++i)
        a[i] += a[i + 1];
}

// ================= OPERATOR OVERLOADING =================
class Student {
    int marks;
public:
    Student(int m) { marks = m; }

    bool operator==(Student s) {
        return marks == s.marks;
    }
};

// ================= LONG QUESTION =================
class Person {
protected:
    string name;
public:
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class StudentDerived : public Person {
    float marks;
public:
    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void calculate() {
        cout << "GPA: " << marks / 10 << endl;
    }
};

class Professor : public Person {
    float salary;
public:
    void getSalary() {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void calculate() {
        cout << "Salary: " << salary << endl;
    }
};

// ================= COMPLEX FUNCTION FROM Q2 PAGE =================
int f(int x, int y) {
    if (x < y)
        return x + y;
    else
        return y * y * y;
}

bool g(int a) {
    for (int i = 0; i <= a; i++) {
        if (a == i * i)
            return true;
    }
    return false;
}

bool h(int a) {
    for (int i = 2; i <= a; i++) {
        if (a % i == 0 && i != a)
            return true;
    }
    return false;
}

// ================= MAIN =================
int main() {

    // ===== Q1 OUTPUT =====
    cout << "Q1 Output:\n";
    int w = 0, x = 2, y = 5, z = 3, r, s = 4, t = 5, u = -3;
    double a = 2.36, b = 3.19, c = 3.0, d = 2.91726;

    printf("Expr_1 = %d\n", (int)(c * y / z + y / z * c));
    printf("Expr_2 = %lf\n", x - s * t * -c - u);
    printf("Expr_3 = %f\n",
           (float)(x + y < z + w && a > b - 17 * x || !(x < 5)));

    cout << endl;

    // ===== Q2 OUTPUT =====
    cout << "Q2 Output:\n";
    int arr[5] = {1, 2, 4, 6, 8};
    f_array(arr, 4);
    cout << arr[4] - arr[3] << endl << endl;

    // ===== Q3 OUTPUT =====
    cout << "Q3 Output:\n";
    int arr2[3] = {1, 2, 3};
    cout << *(arr2 + 1) << endl << endl;

    // ===== OPERATOR OVERLOADING =====
    cout << "Operator Overloading Output:\n";
    Student s1(90), s2(90);
    if (s1 == s2)
        cout << "Equal\n\n";
    else
        cout << "Not Equal\n\n";

    // ===== COMPLEX CODE OUTPUT =====
    cout << "Complex Code Output:\n";
    int j = 1;
    for (int x = 0; x < 12; x++) {
        if (h(x))
            continue;

        j++;
        cout << f(x + 1, j) << " ";

        if (g(j))
            break;
    }
    cout << endl;

    cout << endl;

    // ===== LONG QUESTION =====
    cout << "Long Question Output:\n";
    StudentDerived stu;
    Professor prof;

    stu.getName();
    stu.getMarks();
    stu.calculate();

    prof.getName();
    prof.getSalary();
    prof.calculate();

    return 0;
}