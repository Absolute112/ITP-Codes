#include <iostream>
using namespace std;

int searchRec(int arr[], int size, int target, int index = 0) {
    if (index == size) return -1;              
    if (arr[index] == target) return index;    
    return searchRec(arr, size, target, index+1);
}

int main() {
    int A[10] = {5, 4, 3, 2, 1, 6, 10, 9, 7, 8};
    int target;

    cout << "Enter value to search: ";
    cin >> target;

    int pos = searchRec(A, 10, target);
    if (pos == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << pos << endl;
}
