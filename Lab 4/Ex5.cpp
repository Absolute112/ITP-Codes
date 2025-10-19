#include <iostream>
#include <cstdlib> 
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));  

    int correctcount = 0;
    int wrongcount = 0;
    int userAnswer;

    while (true) {
        int x = rand() % 10 + 1;
        int y = rand() % 10 + 1;

        int smaller;
        int larger;

        if (x<y){
            smaller = x;
            larger = y;

        } else {
            smaller = y;
            larger = x;
        }

        cout << "What is " << smaller << " * " << larger << "? (Enter -1 to quit): ";
        cin >> userAnswer;

        if (userAnswer == -1) {
            break;
        }

        int correctAnswer = smaller * larger;

        if (userAnswer == correctAnswer) {
            cout << "Correct!" << "\n";
            correctcount += 1 ;
        } else {
            cout << "Wrong! The correct answer is " << correctAnswer << "." << "\n";
            wrongcount += 1;
        }
    }

    cout << "\nYou answered " << correctcount << " questions correctly.";
    cout << "You answered " << wrongcount << " questions wrongly.";

    return 0;
}
