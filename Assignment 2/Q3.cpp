#include <iostream>
#include <cmath>
using namespace std;

int main() {

    const int W = 80;
    const int H = 20;
    const double y_min = -1.0;
    const double y_max =  1.0;
    double x_min,x_max;
    cout << "Enter the maximum and minimum values for x in radians: ";
    cin >> x_max >> x_min;
    cout <<"\n";

    char grid[H + 1][W + 1];
    for (int i = 0; i <= H; i++) {
        for (int j = 0; j <= W; j++) {
            grid[i][j] = ' ';
        }
    }
    int mid_y = H / 2;
    for (int j = 0; j <= W; j++) {
        grid[mid_y][j] = '-';
    }
    int mid_x = W / 2;
    for (int i = 0; i <= H; i++) {
        grid[i][mid_x] = '|';
    }
    for (int j = 0; j <= W; j++) {
        double x = x_min + (double)j * ((x_max - x_min) / W);
        double y = sin(x);

        int grid_y = (int)((y - y_min) / (y_max - y_min) * H);

        grid_y = H - grid_y;

        if (grid_y >= 0 && grid_y <= H && j >= 0 && j <= W) {
            grid[grid_y][j] = '*';
        }
    }

    for (int i = 0; i <= H; i++) {
        for (int j = 0; j <= W; j++) {
            cout << grid[i][j];
        }
        cout << "\n";
    }
}
