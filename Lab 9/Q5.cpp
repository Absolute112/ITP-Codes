#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int arr[4][4]) {
    for (int i = 0; i < 16; ++i) {
        int r1 = rand() % 4;
        int c1 = rand() % 4;
        int r2 = rand() % 4;
        int c2 = rand() % 4;
        swap(arr[r1][c1], arr[r2][c2]);
    }
}

void displayBoard(int board[4][4], bool revealed[4][4]) {
    cout << "\nBoard:\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (revealed[i][j])
                cout << board[i][j] << " ";
            else
                cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    srand(time(0));

    int board[4][4] = {
        {1, 1, 2, 2},
        {3, 3, 4, 4},
        {5, 5, 6, 6},
        {7, 7, 8, 8}
    };

    shuffle(board); 

    bool revealed[4][4] = {false}; 
    int matches = 0;

    while (matches < 8) {
        displayBoard(board, revealed);

        int r1, c1, r2, c2;
        cout << "Enter row and column of first card (0-3 0-3): ";
        cin >> r1 >> c1;
        cout << "Enter row and column of second card (0-3 0-3): ";
        cin >> r2 >> c2;

        if (r1 < 0 || r1 > 3 || c1 < 0 || c1 > 3 ||
            r2 < 0 || r2 > 3 || c2 < 0 || c2 > 3 ||
            (r1 == r2 && c1 == c2) || 
            revealed[r1][c1] || revealed[r2][c2]) {
            cout << "Invalid selection. Try again.\n";
            continue;
        }

        revealed[r1][c1] = true;
        revealed[r2][c2] = true;
        displayBoard(board, revealed);

        if (board[r1][c1] == board[r2][c2]) {
            cout << "It's a match!\n";
            matches++;
        } else {
            cout << "Not a match.\n";
            revealed[r1][c1] = false;
            revealed[r2][c2] = false;
        }
    }

    cout << "Congratulations! You matched all the cards!\n";
}
