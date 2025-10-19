#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int pass[size];  
    int fail[size];  
    int passCount = 0, failCount = 0;

    cout << "Enter marks for up to 10 students (-1 to exit early):" << endl;

    for (int i = 0; i < size; i++) {
        int mark;
        cout << "Enter mark for student " << (i + 1) << ": ";
        cin >> mark;

        if (mark == -1) {
            cout << "Input terminated early by user." << endl;
            break;
        }

        if (mark < 0 || mark > 10) {
            cout << "Invalid mark. Please enter marks between 0 and 10 or -1 to exit." << endl;
            i--; 
            continue;
        }

        if (mark >= 5) {
            pass[passCount++] = mark; 
        } else {
            fail[failCount++] = mark;  
        }
    }


    if (passCount > 0) {
        cout << "\nPassed students' marks: ";
        int sumPass = 0;
        for (int i = 0; i < passCount; i++) {
            cout << pass[i] << " ";
            sumPass += pass[i];
        }
        cout << "\nAverage pass marks: " << static_cast<double>(sumPass) / passCount << endl;
    } else {
        cout << "\nNo passed students marks entered." << endl;
    }

    if (failCount > 0) {
        cout << "\nFailed students' marks: ";
        int sumFail = 0;
        for (int i = 0; i < failCount; i++) {
            cout << fail[i] << " ";
            sumFail += fail[i];
        }
        cout << "\nAverage fail marks: " << static_cast<double>(sumFail) / failCount << endl;
    } else {
        cout << "\nNo failed students marks entered." << endl;
    }

    return 0;
}