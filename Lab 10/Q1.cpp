#include <iostream>
using namespace std;

void swapPointers(int *&p1, int *&p2) {
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

int main() {
    int a = 5;
    int b = 10;

    int *ptrA = &a;
    int *ptrB = &b;

    cout << "Before swapping pointers:" << endl;
    cout << "ptrA points to value: " << *ptrA << endl;
    cout << "ptrB points to value: " << *ptrB << endl;

    swapPointers(ptrA, ptrB);
    
    cout << "\nAfter swapping pointers:" << endl;
    cout << "ptrA points to value: " << *ptrA << endl;
    cout << "ptrB points to value: " << *ptrB << endl;
}
