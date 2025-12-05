#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count;
    cout << "Enter count: ";
    cin >> count;

    vector<int> numbers(count);
    cout << "Enter numbers: ";
    for (int i = 0; i < count; i++) {
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }

    cout << "Sum = " << sum << "\n";
}
