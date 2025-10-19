#include <iostream>
using namespace std;

int main() {
    int num;
    int negativeCount = 0;
    int positiveCount = 0;
    int rangeCount = 0;

    do {
        cout << "\nEnter an integer: ";
        cin >> num;

        if (num % 2 != 0) {
            cout << "Square of " << num << " is " << num * num << "\n";
        }

        if (num < 0) {
            negativeCount += 1;
        } else if (num > 0) {
            positiveCount += 1;
        }

        if (num >= 100 && num <= 200) {
            rangeCount += 1;
        }

    } while (!(num > 15 && num < 25));

    cout << "\nNumber of negative integers entered: " << negativeCount;
    cout << "\nNumber of positive integers entered: " << positiveCount;
    cout << "\nNumber of integers in the range 100-200: " << rangeCount;

    return 0;
}
