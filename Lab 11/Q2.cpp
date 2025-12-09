#include <iostream>
using namespace std;

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start += 1;
        end -= 1;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> *(arr + i);

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";

    delete[] arr;
}
