#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100]; 
    int maxElement;

    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nThe entered matrix is:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    maxElement = matrix[0][0];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }

    cout << "\nMaximum element in the matrix: " << maxElement << endl;

    return 0;
}
