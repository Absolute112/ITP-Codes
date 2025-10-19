#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool isSymmetric = true;
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isSymmetric = false;
            break;
        }
    }

    if (isSymmetric) {
        cout << "The array is symmetric." << endl;
    } else {
        cout << "The array is not symmetric." << endl;
    }

    return 0;
}