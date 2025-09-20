#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int isPrime = 1; 

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        cout << num << " is a prime number.";
    } else {
        cout << num << " is not a prime number.";
    }

    cout << "Prime numbers between 1 and 100 are:";
    for (int n = 2; n <= 100; n++) {
        int primeFlag = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primeFlag = 0;
                break;
            }
        }
        if (primeFlag == 1) {
            cout << n << " ";
        }
    }
    cout << endl;

    return 0;
}
