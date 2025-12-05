#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100]; 

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int column;
    cout << "Enter column number to sum " << cols - 1;
    cin >> column;

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][column];
    }

    cout << "Sum of elements in column " << column << " = " << sum << endl;

}
