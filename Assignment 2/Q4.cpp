#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int maxw = 100;
const int maxh = 100;

int main() {
    srand(time(0));

    const int rec = -1;
    const int dead = 10;

    int W, H;
    cout << "Enter grid width W (1-100): ";
    cin >> W;
    cout << "Enter grid height H (1-100): ";
    cin >> H;

    if (W <= 0 || H <= 0 || W > maxw || H > maxh) {
        cout << "Invalid grid size.\n";
        return 1;
    }

    int initial_infected;
    cout << "Enter initial number of infected individuals: ";
    cin >> initial_infected;

    double p;
    cout << "Enter infection probability (0 to 1): ";
    cin >> p;

    int R;
    cout << "Enter recovery time (days): ";
    cin >> R;

    int T;
    cout << "Enter total simulation days: ";
    cin >> T;

    int state[maxh][maxw];
    int copy[maxh][maxw];
    int severity[maxh][maxw];
    int days_infected[maxh][maxw];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            state[i][j] = 0;
            copy[i][j] = 0;
            severity[i][j] = 0;
            days_infected[i][j] = 0;
        }
    }

    int count = 0;
    while (count < initial_infected) {
        int r = rand() % H;
        int c = rand() % W;
        if (state[r][c] == 0) {
            int sev = (rand() % 9) + 1;
            state[r][c] = sev;
            severity[r][c] = sev;
            days_infected[r][c] = 0;
            count += 1;
        }
    }

    cout << "\nInitial state:\n";
    int cntS=0, cntI=0, cntR=0, cntD=0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int s = state[i][j];
            char ch = '.';
            if (s == 0) ch = '.';
            else if (s >= 1 && s <= 9) ch = char('0' + s);
            else if (s == rec) ch = 'R';
            else if (s == dead) ch = 'D';
            cout << ch;
            if (s == 0) cntS += 1;
            else if (s >= 1 && s <= 9) cntI += 1;
            else if (s == rec) cntR += 1;
            else if (s == dead) cntD += 1;
        }
        cout << endl;
    }
    cout << "Day 0: Susceptible: " << cntS << " Infected: " << cntI << " Recovered: " << cntR << " Dead: " << cntD << endl;
    cout << "\n";

    
    for (int day = 1; day <= T; day++) {

        for (int i = 0; i < H; i++)
            for (int j = 0; j < W; j++)
                copy[i][j] = state[i][j];

        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {

                int s = state[i][j];

                if (s == 0) {
                    bool infected_neighbor = false;

                    if (i > 0 && state[i-1][j] >= 1 && state[i-1][j] <= 9)
                        infected_neighbor = true;
                    if (i < H-1 && state[i+1][j] >= 1 && state[i+1][j] <= 1)
                        infected_neighbor = true;
                    if (j > 0 && state[i][j-1] >= 1 && state[i][j-1] <= 1)
                        infected_neighbor = true;
                    if (j < W-1 && state[i][j+1] >=1 && state[i][j+1] <= 9)
                        infected_neighbor = true;

                    if (infected_neighbor) {
                        double r = (double)rand() / RAND_MAX;
                        if (r < p) {
                            int sev = (rand() % 9) + 1;
                            copy[i][j] = sev;
                            severity[i][j] = sev;
                            days_infected[i][j] = 0;
                        }
                    }
                }

                else if (s >= 1 && s <=9) {
                    int sev = severity[i][j];
                    int d = days_infected[i][j];

                    double death_prob = sev * 0.02;
                    double rdeath = (double)rand() / RAND_MAX;
                    if (rdeath < death_prob) {
                        copy[i][j] = dead;
                        severity[i][j] = 0;
                        days_infected[i][j] = 0;
                        continue;
                    }

                    d += 1;
                    if (d >= R) {
                        copy[i][j] = rec;
                        severity[i][j] = 0;
                        days_infected[i][j] = 0;
                        continue;
                    }
                    double rsev = (double)rand() / RAND_MAX;
                    if (rsev < 0.5 && sev > 1)
                        sev -=1;
                    else if (rsev < 0.6 && sev < 9)
                        sev += 1;

                    copy[i][j] = sev;
                    severity[i][j] = sev;
                    days_infected[i][j] = d;
                }

                else if (s == rec) {
                    copy[i][j] = rec;
                }

                else if (s == dead) {
                    copy[i][j] = dead;
                }
            }
        }
        for (int i = 0; i < H; i++)
            for (int j = 0; j < W; j++)
                state[i][j] = copy[i][j];
        cntS=0; 
        cntI=0;
        cntR=0;
        cntD=0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                int s = state[i][j];
                char ch = '.';
                if (s == 0) ch = '.';
                else if (s >= 1 && s <= 9) ch = char('0' + s);
                else if (s == rec) ch = 'R';
                else if (s == dead) ch = 'D';
                cout << ch;
                if (s == 0) cntS +=1;
                else if (s >= 1 && s <= 9) cntI += 1;
                else if (s == rec) cntR +=1;
                else if (s == dead) cntD += 1;
            }
            cout << "\n";
        }

        cout << "Day " << day << ": Susceptible=" << cntS << " Infected=" << cntI << " Recovered=" << cntR << " Dead=" << cntD << endl;
        cout << "\n";
    }

    cout << "Simulation complete.\n";
}
