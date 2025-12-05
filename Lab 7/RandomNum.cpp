#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int N, R;
    cout << "Enter number of random integers (N): ";
    cin >> N;
    cout << "Enter upper limit (R): ";
    cin >> R;

    srand(time(0)); 

    cout << "Generated numbers: ";
    for (int i = 0; i < N; i++) {
        int num = rand() % R; 
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
