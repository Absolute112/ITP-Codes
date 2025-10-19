#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    const int size = 10;
    double arr[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = static_cast<double>(rand()) / RAND_MAX;
    }

    cout << "Array elements (random values between 0 and 1):" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = sum / size;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}