#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 5;
    const int COLS = 9;
    float data[STUDENTS][COLS] = {0}; 

    cout << "Enter data for " << STUDENTS << " students:\n";
    cout << "(Enter StudentID and 5 course marks)\n\n";

    for (int i = 0; i < STUDENTS; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Enter Student ID: ";
        cin >> data[i][0];
        for (int j = 1; j <= 5; j++) {
            cout << "Enter marks for Course " << j << ": ";
            cin >> data[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < STUDENTS; i++) {
        float obtainedMarks = 0;
        for (int j = 1; j <= 5; j++) {
            obtainedMarks += data[i][j];
        }
        data[i][6] = 500;                       
        data[i][7] = obtainedMarks;             
        data[i][8] = (obtainedMarks / 500) * 100; 
    }

    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }

}
