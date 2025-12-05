#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int b) {
    return pow(a, b);
}

int main() {
    double a;
    int b;

    cout << "Input: ";
    cin >> a >> b;

    cout << "Output: " << power(a, b) << "\n";
}
