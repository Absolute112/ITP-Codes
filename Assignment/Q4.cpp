#include <iostream>
using namespace std;

int main() {
    double N;
    cout << "Enter a positive number: ";
    cin >> N;

    if (N < 0) {
        cout << "Square root of a negative number is not defined." << endl;
        return 0;
    }

    double a = 0, b;

    if (N < 1)
        b = 1;
    else
        b = N;

    double m; 
    double tolerance = 0.01; 

    while (true) {
        m = (a + b) / 2;
        double fm = m * m - N;

        if (fm < 0) fm = -fm; 

        if (fm < tolerance) break; 

        if (m * m > N)
            b = m;
        else
            a = m;
    }

    cout << "Approximate square root: " << (int)(m * 100 + 0.5) / 100.0 << endl;
    return 0;
}
