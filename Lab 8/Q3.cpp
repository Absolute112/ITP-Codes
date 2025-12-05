#include <iostream>
#include <string>
using namespace std;

int Compare(string line1, string line2){
    if (line1 == line2){
        cout <<  "Equal";
    }else if (line2.compare(line1) > 0){
        cout << line2 << " is greater.";
    }else{
        cout << line1 << " is greater.";
    }
    return 0;
}

int main(){
    string l1,l2;
    cout << "Enter first string: ";
    cin >> l1;
    cout << "Enter second string: ";
    cin >> l2;
    Compare(l1,l2);

}