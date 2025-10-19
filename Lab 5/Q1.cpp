#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int num = 0;
    int arr[size];
    cout << "Enter 10 numbers\n";
    for ( int i = 0; i < size; i ++){
        cout << "Enter num";
        cin >> num;
        arr[i] = num;
    }
    cout << "Enter number to search";
    int val;
    int count = 0;
    cin >> val;
    for (int l = 0; l < size ;l++){
        if (arr[l] == val){
            count += 1;
        }
    }
    if (count > 0){
        cout << "The value occured"<< "\t" << count << "\t" << "times";
    } else {
        cout << "Number not found";
    }
}

