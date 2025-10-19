#include <iostream>
using namespace std;

int main() {
    int arr1[5], arr2[5];

    cout << "Enter marks for first 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> arr1[i];
    }

    cout << "\nEnter marks for next 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 6) << ": ";
        cin >> arr2[i];
    }

    cout << "\nMarks in first array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\nMarks in second array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }

    cout << "\n\nCommon marks (if any): ";
    bool found = false;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                found = true;
                break; 
            }
        }
    }

    if (!found) {
        cout << "No common marks found.";
    }

    cout << endl;
    return 0;
}
