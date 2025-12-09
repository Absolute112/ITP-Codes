#include <iostream>
using namespace std;

int main(){
    int d1, d2, d3, d4, d5, d6, d7, d8, d9;
    cout << "Enter the 9 digits:";
    cout << "Digit 1";
    cin >> d1;
    cout << "Digit 2";
    cin >> d2;
    cout << "Digit 3";
    cin >> d3;
    cout << "Digit 4";
    cin >> d4;
    cout << "Digit 5";
    cin >> d5;
    cout << "Digit 6";
    cin >> d6;
    cout << "Digit 7";
    cin >> d7;
    cout << "Digit 8";
    cin >> d8;
    cout << "Digit 9";
    cin >> d9;
    int sum = d1*1 + d2*2 + d3*3 + d4*4 + d5*5 + d6*6 + d7*7 + d8*8 + d9*9;
    int checksum = sum % 11;
    cout << "The 10-digit ISBN is: ";
    cout << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << d9;

    if (checksum == 10)
        cout << "X" << endl;
    else
        cout << checksum << endl;

    return 0;
}