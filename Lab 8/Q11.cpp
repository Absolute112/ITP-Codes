#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Reversed order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
}
