#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    double num1 = static_cast<double>(rand()) / RAND_MAX;
    double num2 = static_cast<double>(rand()) / RAND_MAX;
    double num3 = static_cast<double>(rand()) / RAND_MAX;
    double minimum = min({num1, min(num2, num3)});
    double maximum = max({num1, max(num2, num3)});
    double average = (num1 + num2 + num3) / 3.0;
    cout << "Average: " << average;
    cout << "Minimum: " << minimum;
    cout << "Maximum: " << maximum;
    return 0;
}