#include <iostream>
using namespace std;

int main() {
    int numItems;
    char choice;
    int qty;
    int total = 0;

    cout << "Menu:\n";
    cout << "B = Burger (Rs. 200)\n";
    cout << "F = French Fries (Rs. 50)\n";
    cout << "P = Pizza (Rs. 500)\n";
    cout << "S = Sandwiches (Rs. 150)\n";

    cout << "\nHow many different food types do you want to order (2, 3, or 4)? ";
    cin >> numItems;

    if (numItems >= 2 && numItems <= 4) {
        int i = 1;
        while (i <= numItems) {
            cout << "\nEnter choice for item " << i << " (B/F/P/S): ";
            cin >> choice;
            cout << "Enter quantity: ";
            cin >> qty;

            if (choice == 'B' || choice == 'b') {
                total += 200 * qty;
            } 
            else {
                if (choice == 'F' || choice == 'f') {
                    total += 50 * qty;
                } 
                else {
                    if (choice == 'P' || choice == 'p') {
                        total += 500 * qty;
                    } 
                    else {
                        if (choice == 'S' || choice == 's') {
                            total += 150 * qty;
                        } 
                        else {
                            cout << "Invalid choice! Item not counted.\n";
                        }
                    }
                }
            }
            i++;
        }

        cout << "\nTotal charges = Rs. " << total;
    } 
    else {
        cout << "Invalid number of items. Please restart and enter 2, 3, or 4.\n";
    }

    return 0;
}
