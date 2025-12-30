#include <iostream>
using namespace std;

int WordCount(char *Text, int *size) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < *size; i++) {
        if (Text[i] != ' ' && !inWord) {
            count += 1;
            inWord = true;
        } 
        else if (Text[i] == ' ') {
            inWord = false;
        }
    }
    return count;
}

int main() {
    char text[100];
    cin.getline(text,100);
    int size = 0;
    while (text[size] != '\0'){
        size += 1;
    }

    cout << "Word Count: " << WordCount(text, &size);
}

