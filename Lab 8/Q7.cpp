#include <iostream>
using namespace std;

void displayChars(int n, char ch) {
    for (int i = 0; i < n; i++) {
        cout << ch;
    }
    cout << "\n";
}

int main() {
    int num;
    char ch;

    cout << "Input: ";
    cin >> num >> ch;

    cout << "Output: ";
    displayChars(num, ch);
}
