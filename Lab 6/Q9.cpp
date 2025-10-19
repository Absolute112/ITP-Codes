#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int numbers[10];
    string phone = ""; 

    srand(time(0));    

    for (int i = 0; i < 10; i++) {
        numbers[i] = rand() % 10;
    }

    phone += "(";
    phone += to_string(numbers[0]);
    phone += to_string(numbers[1]);
    phone += to_string(numbers[2]);
    phone += ") ";

    phone += to_string(numbers[3]);
    phone += to_string(numbers[4]);
    phone += to_string(numbers[5]);
    phone += "-";

    phone += to_string(numbers[6]);
    phone += to_string(numbers[7]);
    phone += to_string(numbers[8]);
    phone += to_string(numbers[9]);

    cout << "cell number: " << phone << endl;

    return 0;
}
