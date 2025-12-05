#include <iostream>
using namespace std;

bool isMagicSquare(int arr[][3], int n) {
    int magicSum = 0;
    for (int j = 0; j < n; j++) {
        magicSum += arr[0][j];
    }

    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum != magicSum) {
            return false;
        }
    }

    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += arr[i][j];
        }
        if (colSum != magicSum) {
            return false;
        }
    }

    int diag1Sum = 0;
    for (int i = 0; i < n; i++) {
        diag1Sum += arr[i][i];
    }
    if (diag1Sum != magicSum) {
        return false;
    }

    int diag2Sum = 0;
    for (int i = 0; i < n; i++) {
        diag2Sum += arr[i][n - 1 - i];
    }
    if (diag2Sum != magicSum) {
        return false;
    }
    
    return true;
}

int main() {
    int matrix[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };
    
    int n = 3;
    
    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Output: " << (isMagicSquare(matrix, n) ? "true" : "false") << endl;
}