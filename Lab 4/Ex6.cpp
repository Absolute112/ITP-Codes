#include <iostream>
using namespace std;

int main() {
    const int numStudents = 10;
    double cse141Sum = 0.0, cse141LabSum = 0.0, cse578Sum = 0.0;
    double grade;

    cout << "Enter the grades for 10 students in CSE141, CSE141-lab, and CSE578:";

    for (int i = 1; i <= numStudents; i++) {
        cout << "\nStudent #" << i << ":";

        cout << "CSE141: ";
        cin >> grade;
        cse141Sum += grade;

        cout << "CSE141-lab: ";
        cin >> grade;
        cse141LabSum += grade;

        cout << "CSE578: ";
        cin >> grade;
        cse578Sum += grade;
    }

    double avgCSE141 = cse141Sum / numStudents;
    double avgCSE141Lab = cse141LabSum / numStudents;
    double avgCSE578 = cse578Sum / numStudents;

    double overallAverage = (cse141Sum + cse141LabSum + cse578Sum) / (numStudents * 3);

    cout << "\nAverage grade in CSE141: " << avgCSE141;
    cout << "\nAverage grade in CSE141-lab: " << avgCSE141Lab;
    cout << "\nAverage grade in CSE578: " << avgCSE578;
    cout << "\nOverall average grade of all students in all courses: " << overallAverage;

    return 0;
}
