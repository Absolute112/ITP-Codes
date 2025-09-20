#include <iostream>
using namespace std;

int main() {
    float n;
    cout << "Enter the Richter scale number: ";
    cin >> n;

    cout << "\nEarthquake Characterization: ";

    if (n < 5.0) {
        cout << "Little or no Damage";
    }
    else if (n >= 5.0 && n < 5.5) {
        cout << "Some damage";
    }
    else if (n >= 5.5 && n < 6.5) {
        cout << "Serious damage: walls may crack or fall";
    }
    else if (n >= 6.5 && n < 7.5) {
        cout << "Disaster: Houses and Buildings may collapse";
    }
    else {
        cout << "Catastrophe: Most buildings destroyed";
    }

    return 0;
}
