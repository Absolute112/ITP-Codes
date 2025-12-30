#include <iostream>
using namespace std;

void SentenceCase(char *Text, int *size) {
    bool capitalize = true;

    for (int i = 0; i < *size; i++) {
        if (Text[i] >= 'A' && Text[i] <= 'Z')
            Text[i] += 32;

        if (capitalize && Text[i] >= 'a' && Text[i] <= 'z') {
            Text[i] -= 32;
            capitalize = false;
        }
        if (Text[i] == '.')
            capitalize = true;
    }
}

int main() {
    char text[200];
    cin.getline(text, 200);

    int size = 0;
    while (text[size] != '\0')
        size++;

    SentenceCase(text, &size);

    cout << text;
}
