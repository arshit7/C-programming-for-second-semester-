#include <iostream>
using namespace std;

class Bank {
    string name;
    int accNo;
    double balance;

public:
    Bank(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposited: " << amt << endl;
        } else {
            cout << "Invalid amount\n";
        }
    }

    void withdraw(double amt) {
        if (amt <= balance && amt > 0) {
            balance -= amt;
            cout << "Withdrawn: " << amt << endl;
        } else {
            cout << "Insufficient balance\n";
        }
    }

    void display() {
        cout << "\nName: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b("Arshit", 101, 1000);
    b.display();
    b.deposit(500);
    b.withdraw(200);
    b.display();
}