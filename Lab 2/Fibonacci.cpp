#include <iostream>
using namespace std;

int main() {
    int N, num;

    cout << "Enter how many Fibonacci numbers to print: ";
    cin >> N;

    int a = 0, b = 1;

    cout << "First " << N << " Fibonacci numbers: ";
    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    cout << "Enter a number to check if it belongs to Fibonacci: ";
    cin >> num;

    a = 0, b = 1;
    int found = 0;

    while (a <= num) {
        if (a == num) {
            found = 1;
            break;
        }
        int next = a + b;
        a = b;
        b = next;
    }

    if (found == 1) {
        cout << num << " belongs to the Fibonacci sequence.";
    } else {
        cout << num << " does not belong to the Fibonacci sequence.";
    }

    return 0;
}
