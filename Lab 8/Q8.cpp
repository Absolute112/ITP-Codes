#include <iostream>
using namespace std;

int sumOfCubes(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Output: " << sumOfCubes(n) << "\n";
}
