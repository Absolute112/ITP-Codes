#include <iostream>
using namespace std;

int main(){
    double y = 0.0;
    double w = 0.0;
    double b = 0.0;
    double x;
    double e;
    double target;
    float const a = 0.01;

    //quadratic function: f(x) = 2x^2 -4
    x = 3.0;
    target = 14.0;
    for (int i=1; i<=1000; i++){
        y = (w*x) + b;
        e = target - y;
        w = w + (a*e*x);
        b = b + (a*e);
        if (i % 100 == 0){
            cout << "The predicted value is: "<< y << "\t" << "Error: " << e<< "\n";     
        }

    }
    cout << "Prediction: " << y << "\t" << "Target Value: "<< target << "\t" << "Weight: " << w << "\t" << "Bias: "<<b;
}