#include <iostream>
using namespace std;

int main(){
    int r = 0, c = 0;
    int count = 0;
    int val = 0;
    int arr[r][c];
    cout << "Enter number of rows and columns";
    cin >> r >> c;


    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << "Enter value of element";
            cin >> val;
            arr[r][c] = val;
            if (val == 0){
                count += 1;
            }

        }
    }
     if (count  >= (r * c) / 2) {
        cout << "The matrix is a sparse matrix." << endl;
    } else {
        cout << "The matrix is not a sparse matrix." << endl;
    }
}