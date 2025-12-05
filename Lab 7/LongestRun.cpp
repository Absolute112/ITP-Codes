#include <iostream>
using namespace std;

int main() {
    int num, prev;
    int count = 1;
    int maxCount = 1;
    int longestNum;

    cout << "Enter integers (end input with any non-integer): ";

    longestNum = prev;

    while (cin >> num) {
        if (num == prev) {
            count += 1;
        } else {
            count = 1;
        }

        if (count > maxCount) {
            maxCount = count;
            longestNum = num;
        }

        prev = num;
    }

    cout << "Longest run: " << maxCount << " consecutive " << longestNum << "s." << endl;

    return 0;
}
