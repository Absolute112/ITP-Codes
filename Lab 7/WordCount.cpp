#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int count = 0;
    cout << "Enter the sentence: " << "\n";
    getline(cin,str);

    for (int i = 0; i < str.size(); i++){
        if (str.at(i) == ' '){
            count += 1;
        }
    }
    cout << "Number of words: "<< count + 1;
}