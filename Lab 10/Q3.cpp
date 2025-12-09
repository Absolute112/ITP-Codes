#include <iostream>
using namespace std;

int main() {
    float arr[4] = {12.5, 7.9, 19.3, 14.8};

    float *ptr = arr;  

    float highest = *ptr;
    float secondHighest = -1;  

    for (int i = 1; i < 4; i++) {
        float current = *(ptr + i);

        if (current > highest) {
            secondHighest = highest;
            highest = current;
        }
        else if (current > secondHighest) {
            secondHighest = current;
        }
    }

    cout << "Second highest number: " << secondHighest << endl;
}
