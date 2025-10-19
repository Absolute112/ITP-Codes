#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int std1_marks[n] = {60, 75, 85, 95, 49};
    int std2_marks[n] = {59, 70, 65, 45, 39};


    double mean1 = 0.0, mean2 = 0.0;
    for (int i = 0; i < n; i++) {
        mean1 += std1_marks[i];
        mean2 += std2_marks[i];
    }
    mean1 /= n;
    mean2 /= n;

    double covariance = 0.0;
    for (int i = 0; i < n; i++) {
        covariance += (std1_marks[i] - mean1) * (std2_marks[i] - mean2);
    }
    covariance /= (n - 1);

    cout << "Covariance is: " << covariance << endl;

    if (covariance > 0)
        cout << "Positive covariance" << endl;
    else if (covariance < 0)
        cout << "Negative covariance" << endl;
    else
        cout << "Zero covariance" << endl;

}
