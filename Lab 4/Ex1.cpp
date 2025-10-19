#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter 1st number please: ";
    cin >> a;
    cout << "Enter 2nd number please: ";
    cin >> b;

    while (a != b) {
        a = a >> 2;
        b = b * b;
        cout << "# 1stNumber " << a;
        cout << "# 2ndNumber " << b;
        cout << "********************";
    }

    cout << "Process exited after both numbers become equal.";

    return 0;
}