#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    constexpr int sides = 6;
    int d, n;
    cout << "Enter number of dice(0-100): ";
    cin >> d;
    cout << "Enter number of rolls: ";
    cin >> n;

    if (n<0 || d>100 || d<0) {
        cout << "Invalid Inputs!";
    }

    srand(time(0));

    const int max = 100 * sides;
    int count[max + 1] = {0};

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < d; j++) {
            sum += rand() % sides + 1;
        }
        count[sum]+=1;
    }

    cout << "\nHistogram of results (d = " << d << ", n = " << n << ")\n\n";
    for (int i = d; i <= d * sides; i++) {
        cout << setw(3) << i << ": ";
        for (int s = 0; s < count[i]; s++) {
            cout << "*";
        }
        cout << "\n";
    }
}
