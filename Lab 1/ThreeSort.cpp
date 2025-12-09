#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 3 values:";
    cin >> a >> b >> c;
    int largest = max(a, max(b, c));
    int smallest = min(a, min(b, c));
    int middle = a + b + c - largest - smallest;
    cout << "Sorted order: " << smallest << " " << middle << " " << largest;
    return 0;
}