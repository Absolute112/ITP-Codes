#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float cgpa;
};

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    Student* s = new Student[N]; 

    for(int i=0; i<N; i++){
        cout << "\nEnter details of student " << i+1 << endl;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Roll number: ";
        cin >> s[i].roll;
        cout << "CGPA: ";
        cin >> s[i].cgpa;
    }

    cout << "\n--- Student Details ---\n";
    for(int i=0; i<N; i++){
        cout << s[i].name << " | Roll: " << s[i].roll 
             << " | CGPA: " << s[i].cgpa << endl;
    }

    delete[] s; 
}
