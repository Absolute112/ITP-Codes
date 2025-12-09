#include <iostream>
using namespace std;

bool arrayEq(int* arr1, int* arr2, int size1, int size2, int index = 0) {
    if (size1 != size2)
        return false;

    if (index == size1)
        return true;

    if (arr1[index] != arr2[index])
        return false;

    return arrayEq(arr1, arr2, size1, size2, index + 1);
}

int main() {
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;
    cout << "Enter size of second array: ";
    cin >> size2;

    int* arr1 = new int[size1];
    int* arr2 = new int[size2];

    cout << "Enter elements for first array: ";
    for (int i = 0; i < size1; i++)
        cin >> arr1[i];

    cout << "Enter elements for second array: ";
    for (int i = 0; i < size2; i++)
        cin >> arr2[i];

    if (arrayEq(arr1, arr2, size1, size2))
        cout << "Arrays are equal." << endl;
    else
        cout << "Arrays are NOT equal." << endl;

    delete[] arr1;
    delete[] arr2;
}
