#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 3 values:";
    cin >> a >> b >> c;
    int largest = max(a, max(b, c));
    cout << "The largest value is = " << largest;
}