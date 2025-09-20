#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <algorithm> 
using namespace std;

int main() {
    srand(time(0));

    double nums[5];
    double sum = 0;

    cout << "Random numbers: ";
    for (int i = 0; i < 5; i++) {
        nums[i] = static_cast<double>(rand()) / RAND_MAX; 
        cout << nums[i] << " ";
        sum += nums[i];
    }
    cout << endl;
    double minimum = nums[0];
    double maximum = nums[0];

    for (int i = 1; i < 5; i++) {
        minimum = min(minimum, nums[i]);
        maximum = max(maximum, nums[i]);
    }

    double average = sum / 5.0;

    cout << "Average: " << average;
    cout << "Minimum: " << minimum;
    cout << "Maximum: " << maximum;

    return 0;
}

