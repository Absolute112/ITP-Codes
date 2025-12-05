#include <iostream>
using namespace std;

void updateMarks(int &marks) {
    marks += 10;
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    updateMarks(marks);
    cout << "Updated marks = " << marks << "\n";
}
