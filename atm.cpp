#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0; // initial balance
    double amount;
    int pin, enteredPin;

    pin = 9333
    ;

    cout << "===== Welcome to ATM =====\n";

    // PIN check
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN! Access Denied.\n";
        return 0;
    }

    do {
        cout << "\n===== ATM Menu =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount deposited successfully!\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else {
                    balance -= amount;
                    cout << "Please collect your cash.\n";
                }
                break;

            case 4:
                cout << "Thank you for using ATM!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}