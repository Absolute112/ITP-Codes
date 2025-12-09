#include <iostream>
using namespace std;

struct Address {
    string street, city, state;
    int zip;
};

struct Courses {
    string courseName;
    float gpa;         
};

struct Student {
    string name;
    float cgpa;
    Courses courses[3];    
    Address address;
};

int main() {
    Student s[2];
    for(int i=0; i<2; i++) {
        cout << "\nEnter details of student " << i+1 << endl;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "CGPA: ";
        cin >> s[i].cgpa;

        for(int j=0; j<3; j++) {
            cout << "Enter course name: ";
            cin >> s[i].courses[j].courseName;
            cout << "Enter GPA for this course: ";
            cin >> s[i].courses[j].gpa;
        }

        cout << "Enter address (street city state zip): ";
        cin >> s[i].address.street >> s[i].address.city 
            >> s[i].address.state >> s[i].address.zip;
    }
    cout << "\n--- Highest GPA in each course ---\n";
    for(int j=0; j<3; j++){
        int idx = (s[0].courses[j].gpa > s[1].courses[j].gpa) ? 0 : 1;
        cout << s[idx].name << " has higher GPA in " 
             << s[idx].courses[j].courseName 
             << " (" << s[idx].courses[j].gpa << ")\n";
    }
    cout << "\n--- Highest CGPA ---\n";
    int top = (s[0].cgpa > s[1].cgpa) ? 0 : 1;
    cout << s[top].name << " has the highest overall CGPA: " << s[top].cgpa << endl;

    return 0;
}
