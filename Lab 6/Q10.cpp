#include <iostream>
using namespace std;

int main() {
    const int LANDS = 8;
    float length[LANDS], width[LANDS], area[LANDS];

    cout << "Enter the length and width of 8 land pieces:\n";

    for (int i = 0; i < LANDS; i++) {
        cout << "\nLand " << i + 1 << ":\n";
        cout << "Enter length: ";
        cin >> length[i];
        cout << "Enter width: ";
        cin >> width[i];

    
        area[i] = length[i] * width[i];
    }

    cout << "Area of each land piece:\n";
    for (int i = 0; i < LANDS; i++) {
        cout << "Land " << i + 1 << ": " << area[i] << " square units\n";
    }

    float maxArea = area[0];
    int largestIndex = 0;
    for (int i = 1; i < LANDS; i++) {
        if (area[i] > maxArea) {
            maxArea = area[i];
            largestIndex = i;
        }
    }

    cout << "\nThe largest land is Land " << largestIndex + 1 
         << " with an area of " << maxArea << " square units.\n";
}
