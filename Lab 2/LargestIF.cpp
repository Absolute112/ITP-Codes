#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int largest;

    if (a >= b) {
        if (a >= c) {
            largest = a;
        } else {
            largest = c;
        }
    } else { 
        if (b >= c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    cout << "The largest number is: " << largest;

    return 0;
}
