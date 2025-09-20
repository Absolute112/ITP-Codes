#include <iostream>
using namespace std;

int main() {
    int weekday, vacation;

    weekday = 0; vacation = 0;
    if (weekday == 0 || vacation == 1)
        cout << "sleepIn(0, 0) → true";
    else
        cout << "sleepIn(0, 0) → false";

    weekday = 1; vacation = 0;
    if (weekday == 0 || vacation == 1)
        cout << "sleepIn(1, 0) → true";
    else
        cout << "sleepIn(1, 0) → false";

    weekday = 0; vacation = 1;
    if (weekday == 0 || vacation == 1)
        cout << "sleepIn(0, 1) → true";
    else
        cout << "sleepIn(0, 1) → false";

    return 0;
}

