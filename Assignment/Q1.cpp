#include <iostream>
#include <string>
using namespace std;

string ones[] = {
    "zero", "one", "two", "three", "four", "five", "six",
    "seven", "eight", "nine", "ten", "eleven", "twelve",
    "thirteen", "fourteen", "fifteen", "sixteen",
    "seventeen", "eighteen", "nineteen"
};

string tens[] = {
    "", "", "twenty", "thirty", "forty", "fifty",
    "sixty", "seventy", "eighty", "ninety"
};

string convertBelowThousand(int num) {
    string result = "";
    if (num >= 100) {
        result += ones[num / 100] + " hundred";
        num %= 100;
        if (num > 0) result += " ";
    }
    if (num >= 20) {
        result += tens[num / 10];
        num %= 10;
        if (num > 0) result += " " + ones[num];
    } else if (num > 0) {
        result += ones[num];
    }
    return result;
}

string numberToWords(int num) {
    if (num == 0) return "zero";

    string result = "";
    if (num < 0) {
        result = "negative ";
        num = -num;
    }

    int thousands = num / 1000;
    int belowThousand = num % 1000;

    if (thousands > 0) {
        result += convertBelowThousand(thousands) + " thousand";
        if (belowThousand > 0) result += " ";
    }

    if (belowThousand > 0) {
        result += convertBelowThousand(belowThousand);
    }

    return result;
}

int main() {
    int num;
    cout << "Enter an amount in figures: ";
    cin >> num;

    if (num < -999999 || num > 999999) {
        cout << "Out of range!" << endl;
        return 0;
    }

    cout << "In words: " << numberToWords(num) << endl;
    return 0;
}
