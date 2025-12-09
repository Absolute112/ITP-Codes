#include <iostream>
using namespace std;

int main() {
    float *ptr = new float;

    cin >> *ptr;

    cout << "Value = " << *ptr << endl;
    cout << "Address = " << ptr << endl;

    *ptr = *ptr + 10;
    cout << "Updated Value = " << *ptr << endl;

    delete ptr;
}
