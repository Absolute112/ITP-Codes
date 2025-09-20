#include <iostream>
using namespace std;

int main() {
    double marks[5];
    double sum = 0;

    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    double average = sum / 5.0;

    cout << "Average: " << average;

    if (average >= 90) {
        cout << "Grade: A";
    } else if (average >= 80) {
        cout << "Grade: B";
    } else if (average >= 70) {
        cout << "Grade: C";
    } else {
        cout << "Grade: Fail";
    }

    return 0;
}
