#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if(amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.createAccount();
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();

    return 0;
}