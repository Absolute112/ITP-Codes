#include <iostream>
using namespace std;

int main(){
    int fat;
    double  percentcal, calories;
    cout << "Enter Total Calories: ";
    cin >> calories;
    cout << "Enter Fat grams: ";
    cin >> fat;
    if (fat < 0 || calories < 0) {
        cout << "Incorrect values entered, try again";
    } else if (fat*9>calories){
        cout << "Incorrect values entered, try again";
    }
    percentcal = (fat*9)/calories;
    if (percentcal<30){
        cout << "Low in fat, " << percentcal << "percent calories from fat";
    } else{
        cout << percentcal << "percent calories from fat";
    }
}