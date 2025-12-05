#include <iostream>
using namespace std;

int Square(int num){
    return num*num;
}
int Cube(int num){
    return num*num*num;
}

int main(){
    cout << "Enter an integer value: ";
    int val;
    cin >> val;
    cout << "Square = " << Square(val) << "\tCube = " << Cube(val) << "\tSum = " << Square(val) + Cube(val);
    
}