#include <iostream>
using namespace std;

int main() {
    char type;
    int isDouble, isManual;

    cout << "Enter coffee type (W for White, B for Black): ";
    cin >> type;

    cout << "Is the cup size double? (1 = Yes, 0 = No): ";
    cin >> isDouble;

    cout << "Is the coffee manual? (1 = Yes, 0 = No): ";
    cin >> isManual;

    float factor = 1.0;
    if (isDouble == 1) {
        factor = 1.5;  
    }

    if (type == 'W' || type == 'w') {
        cout << "Put Water: " << 15 * factor << " minutes";
        cout << "Add Sugar: " << 15 * factor << " minutes";
        cout << "Mix Well: " << 20 * factor << " minutes";
        cout << "Add Coffee: " << 2 * factor << " minutes";
        cout << "Add Milk: " << 4 * factor << " minutes";
        cout << "Mix Well Again: " << 20 * factor << " minutes";
    }
    else if (type == 'B' || type == 'b') {
        cout << "Put Water: " << 20 * factor << " minutes";
        cout << "Add Sugar: " << 20 * factor << " minutes";
        cout << "Mix Well: " << 25 * factor << " minutes";
        cout << "Add Coffee: " << 15 * factor << " minutes";
        cout << "Mix Well Again: " << 25 * factor << " minutes";
    }
    else {
        cout << "Invalid coffee type entered!";
        return 0;
    }

    if (isManual == 1) {
        cout << "\nNote: Coffee is prepared manually.";
    } else {
        cout << "\nNote: Coffee is prepared automatically.";
    }

    cout << "--- Coffee Ready! ---\n";

    return 0;
}
