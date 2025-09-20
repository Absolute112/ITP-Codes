#include <iostream>
using namespace std;

int main(){
	int x, y;

	cout << "Enter x and y coords: ";
	cin >> x >> y;

	if (x == 0 && y == 0) {
		cout << "The point lies at origin";
	} else if (x == 0) {
		cout << "The point lies on the y-axis";
	} else if (y == 0) {
		cout << "The point lies on the x-axis";
	} else {
		if (x > 0) {
			if (y > 0) {
				cout << "The point lies in Quadrant 1";
			} else {
				cout << "The point lies in Quadrant 4";
			}
		} else {
			if (y > 0) {
				cout << "The point lies in Quadrant 2";
			} else { 
				cout << "The point lies in QUadrant 3";
			}
		}
	}
return 0;
}
