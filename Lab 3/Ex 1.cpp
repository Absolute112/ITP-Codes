#include <iostream>

using namespace std;

int main(){
    int num, ldigit, result = 0;
    cout << "Enter number: ";
    cin >> num;
    ldigit = num % 10;
    num = num/10;
    ldigit = ldigit * 2;
    result = num - ldigit;
    if (result == 7 || result == -7 || result == 0){
        cout << "Divisible";
    } else {
        while ((result > 9 || result < -9) && result != 7 && result != -7 && result != 0){
        ldigit = result % 10;
        num = result/10;
        ldigit = ldigit * 2;
        result = num - ldigit;
        }
    }
        if (result == 7 || result == -7 || result == 0){
            cout << "Divisible";
        } else {
            cout << "Not Divisible";
        }
}