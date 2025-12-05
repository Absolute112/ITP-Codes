#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned)time(0)); 

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[100];

    
    cout << "Input numbers: ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 11; 
        cout << arr[i] << " ";
    }
    cout << "\n";

    int freq[11] = {0};
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    cout << "Output:" << "\n";
    for (int i = 0; i < 11; i++) {
        if (freq[i] > 0) {
            cout << i << " -> " << freq[i] << " time";
            if (freq[i] > 1) cout << "s";
            cout << "\n";
        }
    }
}
