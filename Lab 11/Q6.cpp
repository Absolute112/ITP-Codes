#include <iostream>
using namespace std;

void replaceChar(char *text, char oldC, char newC) {
    char *ptr = text;

    while (*ptr != '\0') {
        if (*ptr == oldC)
            *ptr = newC;
        ptr++;
    }
}

int main() {
    char text[100];
    cin >> text;

    char oldC, newC;
    cin >> oldC >> newC;

    replaceChar(text, oldC, newC);

    cout << text;
}
