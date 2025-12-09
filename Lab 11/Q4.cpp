#include <iostream>
using namespace std;

int countEven(int *arr, int size) {
    int count = 0;
    int *ptr = arr;

    for (int i = 0; i < size; i++) {
        if (*ptr % 2 == 0)
            count++;
        ptr++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> *(arr + i);

    cout << "Number of even values = " << countEven(arr, n);

    delete[] arr;
}
