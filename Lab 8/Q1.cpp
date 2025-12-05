#include <iostream>
#include <string>
using namespace std;

int Reverse(string line){
    for (int i = line.size()-1; i >= 0; i--){
        cout << line[i];
    }
    return 0; 
}
int main(){
    string fn,ln;
    cout << "Enter first name: ";
    cin >> fn;
    cout << "Enter last name: ";
    cin >> ln;

    string fullname = fn + " " + ln;
    cout << "Full name is = " << fullname << endl;
    cout << "Reverse Name = ";
    Reverse(fullname);
}