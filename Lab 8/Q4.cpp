#include <iostream>
#include <string>
using namespace std;

int JobSelection(int marks, int experience){
    if (marks >= 50){
        cout << "You have been selected as an Trainee Engineer!";
    }else if (marks >=60 && experience >= 1){
        cout << "You have been selected as an Assistant Developer!";
    }else if (marks >= 70 && experience >= 2){
        cout << "You have been selected as an Associate Developer!";
    }
    return 0;
}

int main(){
    int m,e;
    string l;
    cout << "Enter your marks: ";
    cin >> m;
    cout << "Do you have any experience?(Yes or No) ";
    cin >> l;
    if (l == "Yes" || l == "yes"){
        cout << "How many years of experience do you have? ";
        cin >> e;
        JobSelection(m,e);
    }else{
        JobSelection(m,0);
    }
}