
#include <iostream>
#include <climits>  
using namespace std;

int main() {
    int num;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    cout << "Enter integers (enter a non-integer to stop): " << endl;

    while (cin >> num) {  // Loop continues as long as valid integers are entered
        if (num > maxVal)
            maxVal = num;
        if (num < minVal)
            minVal = num;
    }

    // If no valid input was entered
    if (maxVal == INT_MIN && minVal == INT_MAX) {
        cout << "No integers were entered." << endl;
    } else {
        cout << "Maximum value: " << maxVal << endl;
        cout << "Minimum value: " << minVal << endl;
    }

    return 0;
}
