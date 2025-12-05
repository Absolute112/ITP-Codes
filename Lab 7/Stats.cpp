#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    double numbers[100];
    double sum = 0.0;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double mean = sum / n;
    double variance = 0.0;
    for (int i = 0; i < n; i++) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance /= n;
    double stdDev = sqrt(variance);

    cout << "Mean = " << mean << ", Std. Dev = " << stdDev << endl;
}
