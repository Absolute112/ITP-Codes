#include <iostream>
using namespace std;

int main() {
    float fsc, nts;

    cout << "Enter your F.Sc. percentage: ";
    cin >> fsc;

    cout << "Enter your NTS percentage: ";
    cin >> nts;

    cout << "Checking eligibility...";

    if (fsc > 70 && nts >= 70) {
        cout << "Oxford University - IT Department";
    } 
    else if (fsc > 70 && nts >= 60) {
        cout << "Oxford University - Electronics Department";
    } 
    else if (fsc > 70 && nts >= 50) {
        cout << "Oxford University - Telecommunication Department";
    } 
    else if (fsc <= 70 && fsc >= 60 && nts >= 50) {
        cout << "MIT - IT Department";
    } 
    else if (fsc < 60 && fsc >= 50 && nts >= 50) {
        cout << "MIT - Chemical Department";
    } 
    else if (fsc < 50 && fsc > 40 && nts >= 50) {
        cout << "MIT - Computer Department";
    } 

    else {
        cout << "Sorry! You are not eligible for any program.";
    }

    return 0;
}