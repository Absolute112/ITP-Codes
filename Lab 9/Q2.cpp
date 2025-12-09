#include <iostream>
#include <string>
using namespace std;

bool ispalindrome(string s1, int i, int j){
    if (i>=j) return true;
    if (s1[i] != s1[j]) return false;
    return ispalindrome(s1, i+1,j+1);
}

int main(){
    string str;
    cout << "Enter string: ";
    cin >> str;

    if (ispalindrome(str,0,str.length()-1)){
        cout << "The string is a palindrome.";

    }else{
        cout << "The string is not a palindrome.";
    }
}