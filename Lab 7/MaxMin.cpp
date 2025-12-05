#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num;
    int max = INT_MIN;
    int min = INT_MAX;

    cout << "Enter integers (Enter -1 to exit): ";

    cin >> num;
    while (num != -1) {  
        if (num > max){
            max = num;
        }
        if (num < min){
            min = num;
        }
        cin >> num;
    }


        cout << "Maximum value: " << max;
        cout << "Minimum value: " << min; 
}