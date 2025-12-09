#include <iostream>
using namespace std;

int* mergeArrays(int *a, int sizeA, int *b, int sizeB) {
    int *merged = new int[sizeA + sizeB];
    int *ptr = merged;

    for (int i = 0; i < sizeA; i++)
        *(ptr++) = *(a + i);

    for (int i = 0; i < sizeB; i++)
        *(ptr++) = *(b + i);

    return merged;
}

int main() {
    int sizeA, sizeB;
    cout << "Enter the size of the first array: ";
    cin >> sizeA;
    int *A = new int[sizeA];
    for (int i = 0; i < sizeA; i++)
        cin >> *(A + i);

    cout << "Enter the size of the second array: ";
    cin >> sizeB;
    int *B = new int[sizeB];
    for (int i = 0; i < sizeB; i++)
        cin >> *(B + i);

    int *merged = mergeArrays(A, sizeA, B, sizeB);

    for (int i = 0; i < sizeA + sizeB; i++)
        cout << *(merged + i) << " ";

    delete[] A;
    delete[] B;
    delete[] merged;
}
