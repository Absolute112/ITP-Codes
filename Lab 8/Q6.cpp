#include <iostream>
using namespace std;

void getData(float &h, float &a) {
    cout << "Enter the height of the pyramid: ";
    cin >> h;
    cout << "Enter the base of the pyramid: ";
    cin >> a;
}

float Volume(float h, float a) {
    float vol = (1.0f / 3) * (a * a) * h;  
    return vol;
}

int main() {
    float h, a;
    getData(h, a);  
    float volume = Volume(h, a);  
    cout << "The volume is = " << volume << "\n";
}
