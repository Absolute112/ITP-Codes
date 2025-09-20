#include <iostream>
using namespace std;

int main() {
	int a, b;
	
	cout << "Enter two integers: ";
	cin >> a >> b;

	int sum = a+b;
	int product = a * b;

	cout << "Sum: " << sum;
	cout << "Product: " << product;

	if (product != 0) {
		if (sum % product == 0) {
			cout << "Divisible";
		} else {
			cout << "Not Divisble";
		}
	} else {
		cout << "Product is 0, cannot check divisibility";
	}
return 0;
}


