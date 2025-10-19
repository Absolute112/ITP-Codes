#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number with at least 4 digits: ";
    cin >> num;

    if (num < 1000) {
        cout << "Invalid input! Number must be at least 4 digits.\n";
        return 0;
    }

    int result = num;

    while (result >= 10) {
        int sum = 0;
        int temp = result;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        result = sum;
    }

    cout << "The final single-digit sum is: " << result << endl;

    return 0;
}
