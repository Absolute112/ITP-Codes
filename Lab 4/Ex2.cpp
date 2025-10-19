#include <iostream>
using namespace std;

int main(){
    int a, i, count;
    cout << "Enter the number: ";
    cin >> a;
    i = 0;
    count = 0;
    while (a >= 0){
        while (i < a){
            cout << "CSE141 Exam is in week 09";
            i += 1;
            count += 1;
        }
        cout << "Enter the number: ";
        cin >> a;
        cout << "******************";
        i =0;
    }
    cout << "The message displayed" << count << "times.";
}