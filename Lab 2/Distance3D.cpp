#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int x, y, z;

    
    cout << "Enter x, y, and z coords: ";
    cin >> x >> y >> z;

    double distance = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    cout << "The 3D distance is: " << distance;

    return 0;
}
