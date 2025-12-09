#include <iostream>
using namespace std;

const int R = 2; 
const int C = 2;

void multiplyRec(int A[][C], int B[][C], int result[][C], int i, int j, int k) {
    if (i >= R) return;
    if (j >= C) {
        multiplyRec(A, B, result, i + 1, 0, 0);
        return;
    }
    if (k < C) {
        result[i][j] += A[i][k] * B[k][j];
        multiplyRec(A, B, result, i, j, k + 1);
    } else {
        multiplyRec(A, B, result, i, j + 1, 0);
    }
}

int main() {
    int A[R][C] = {{1, 2}, {3, 4}};
    int B[R][C] = {{5, 6}, {7, 8}};
    int result[R][C] = {0};

    multiplyRec(A, B, result, 0, 0, 0);

    cout << "Matrix Multiplication Result:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}
