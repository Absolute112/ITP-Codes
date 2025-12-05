#include <iostream>
using namespace std;

void swapValues(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Before swap: a = " << a << ", b = " << b << "\n";
    swapValues(a, b);
    cout << "After swap: a = " << a << ", b = " << b << "\n";
}
