#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;
    
    int matrix[50][50], transpose[50][50];
    
    cout << "\nEnter the elements of the matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    

    bool isSymmetric = true;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != transpose[i][j]) {
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric) break;
    }
    
    if(isSymmetric)
        cout << "\nThe matrix is symmetric.\n";
    else
        cout << "\nThe matrix is asymmetric.\n";

}
