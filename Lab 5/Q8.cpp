#include <iostream>
using namespace std;

int main() {
    cout << "Solutions for 3a + 7b - 5c = 10 where a, b, c are in range (-10, 10):\n\n";

    for (int a = -10; a <= 10; a++) {
        for (int b = -10; b <= 10; b++) {
            for (int c = -10; c <= 10; c++) {
                if (3 * a + 7 * b - 5 * c == 10) {
                    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
                }
            }
        }
    }

    return 0;
}
