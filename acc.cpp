#include <iostream>
using namespace std;

class bankaccount {
    string accountholder;
    long accountnumber;
    double balance;

    bool isvalidamount(double amount) {
        return amount > 0;
    }

public:
    // Constructor
    bankaccount(string name, long number, double initialbalance) {
        accountholder = name;
        accountnumber = number;

        if (initialbalance >= 0)
            balance = initialbalance;
        else
            balance = 0;
    }

    void deposit(double amount) {
        if (isvalidamount(amount)) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
            cout << "Current Balance: " << balance << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (isvalidamount(amount) && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Current Balance: " << balance << endl;
        } else {
            cout << "Invalid amount or insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "\nAccount Holder: " << accountholder << endl;
        cout << "Account Number: " << accountnumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    bankaccount *b = new bankaccount("Arshit", 123456, 1000.0);

    b->display();
    b->deposit(500.0);
    b->withdraw(200.0);

    delete b;
    return 0;
}