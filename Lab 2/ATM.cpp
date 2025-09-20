#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 0.0, amount;

    

    do {
        cout << "\nChoose an option:";
        cout << "1. Deposit money";
        cout << "2. Withdraw money";
        cout << "3. Check balance";
        cout << "4. Exit";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount;
            } else {
                cout << "Invalid deposit amount";
            }
        } else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid withdrawal amount";
            } else if (amount > balance) {
                cout << "Insufficient balance";
            } else {
                balance -= amount;
                cout << "Withdrawn: " << amount;
            }
        } else if (choice == 3) {
            cout << "Current balance: " << balance;
        } else if (choice == 4) {
            cout << "Exiting...";
        } else {
            cout << "Invalid choice. Try again.";
        }

    } while (choice != 4);

    return 0;
}
