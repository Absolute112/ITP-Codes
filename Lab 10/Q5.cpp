#include <iostream>
using namespace std;

void SortFunction(int *arr, int *size, int order) {
    for (int i = 0; i < *size - 1; i++) {
        for (int j = 0; j < *size - i - 1; j++) {
            if ((order == 1 && arr[j] > arr[j + 1]) ||
                (order == 2 && arr[j] < arr[j + 1])) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, order;

    cout << "Enter array size: ";
    cin >> size;
    int *arr = new int[size];

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter order (1 = Ascending, 2 = Descending): ";
    cin >> order;

    SortFunction(arr, &size, order);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    delete[] arr;
}
