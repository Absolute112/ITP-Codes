#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s1, string s2) {
    if (s1 == " ") return true;  
    if (s2 == " ") return false;  

    if (s1[0] == s2[0]) {
        return isSubsequence(s1.substr(1), s2.substr(1));
    } else {
        return isSubsequence(s1, s2.substr(1));
    }
}

int main() {
    string s1,s2;
    cout << "Enter the first string: ";
    cin >> s1; 
    cout << "Enter the second string: ";
    cin >> s2; 

    if (isSubsequence(s1, s2))
        cout << "True\n";
    else
        cout << "False\n";
}
