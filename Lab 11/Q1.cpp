#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);

    int *ptr = arr;
    int maxVal = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > maxVal)
            maxVal = *(arr + i);
    }

    cout << "Maximum = " << maxVal;

    delete[] arr;
}
