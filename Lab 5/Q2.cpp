#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    double arr[size];
    double num;
    
    for (int i = 0; i < size; i++) {
        cout << "Enter number";
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Numbers in descending order:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


