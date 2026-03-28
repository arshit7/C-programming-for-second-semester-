#include <iostream>
using namespace std;

int main() {
    int choice, pin = 1234, entered;
    double balance = 1000, amount;

    cout << "Enter PIN: ";
    cin >> entered;

    if(entered != pin) {
        cout << "Wrong PIN\n";
        return 0;
    }

    do {
        cout << "\n1.Check 2.Deposit 3.Withdraw 4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amount;
                balance += amount;
                break;

            case 3:
                cout << "Enter amount: ";
                cin >> amount;
                if(amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient\n";
                break;
        }

    } while(choice != 4);
}