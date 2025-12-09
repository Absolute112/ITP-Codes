#include <iostream>
using namespace std;


int main(){
    int flag = 0;
    int correct = 0;
    int incorrect= 0;
    double y = 0.0;
    double w = 0.0;
    double b = 0.0;
    double x;
    double e;
    double target;
    float const a = 0.01;

    //quadratic function: f(x) = 2x^2 -4
    
    for (int j = 1; j <= 10; j++){
        
        cout << "\n""Enter test value: ""\n";
        cin >> x;
        target = 2*(x*x)-4;

        for (int i=1; i<=1000; i++){
            y = (w*x) + b;
            e = target - y;
            w = w + (a*e*x);
            b = b + (a*e);
            // if (i % 100 == 0){
            //     cout << "The predicted value is: "<< y << "\t" << "Error: " << e<< "\n";     
            // }
    
        }
        if ((y-target) <=1 && (target-y) >= -1){
            correct += 1;
            flag = 1;
        } else{
            incorrect += 1;
            flag = 0;
        }
        cout << "Prediction: " << y << "\t" << "Target Value: "<< target << "\t" << "Test Value: " << x <<"\t";
        if (flag == 0){
            cout << "Incorrect";
        } else {
            cout << "Correct";
        }
    }
    cout << "Accuracy: " << (correct/10.0)*100 << "%";
}