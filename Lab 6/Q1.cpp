#include <iostream>
using namespace std;

int main(){
    int count = 0; 
    double sum = 0;
    int size;
    double avg = 0;
    
    cout << "Enter the size of the array";
    cin >> size;
    int arr[size];
    int val;
    for (int i = 0; i < size; i++){
        cout << "Enter values";
        cin >> val;
        arr[i] = val;
        if (val > 0){
            sum += val;
            count += 1;
        }
    }
cout << "Sum = "<< sum << "/n";
cout << "Avg = "<< sum/count;

}    
