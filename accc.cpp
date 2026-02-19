#include <iostream>
using namespace std;

class BankAccount {
    string accountHolder;
    long accountNumber;
    double balance;

    // Private helper function
    bool isValidAmount(double amount) {
        return amount > 0;
    }

public:
    // Constructor
    BankAccount(string n, long a, double ibal) {
        accountHolder = n;
        accountNumber = a;

        if (ibal >= 0) {
            balance = ibal;
        } else {
            balance = 0;
        }
    }

    // Getters
    string getAccountHolder() {
        return accountHolder;
    }

    long getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    // Function declarations
    void deposit(double amt);
    void withdraw(double amt);
    void display();
};

// Deposit definition
void BankAccount::deposit(double amt) {
    if (isValidAmount(amt)) {
        balance += amt;
        cout << "Deposit successful. New balance: " << balance << endl;
    } else {
        cout << "Invalid amount. Deposit failed." << endl;
    }
}

// Withdraw definition
void BankAccount::withdraw(double amt) {
    if (isValidAmount(amt) && amt <= balance) {
        balance -= amt;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    } else {
        cout << "Invalid amount or insufficient funds. Withdrawal failed." << endl;
    }
}

// Display definition
void BankAccount::display() {
    cout << "\nAccount Holder: " << accountHolder << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: " << balance << endl;
}

// Main function to test
int main() {
    BankAccount acc("Arshit", 123456789, 5000);

    acc.display();

    acc.deposit(1500);
    acc.withdraw(2000);
    acc.withdraw(10000);  // Should fail

    acc.display();

    return 0;
}