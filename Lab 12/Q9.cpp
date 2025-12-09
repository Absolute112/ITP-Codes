#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex readComplex() {
    Complex c;
    cout << "Enter real part: ";
    cin >> c.real;
    cout << "Enter imaginary part: ";
    cin >> c.imag;
    return c;
}

void printComplex(Complex c) {
    if(c.imag >= 0)
        cout << c.real << " + " << c.imag << "i";
    else
        cout << c.real << " - " << -c.imag << "i";
}

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

int main() {
    Complex c1, c2, sum, product;

    cout << "Enter first complex number:\n";
    c1 = readComplex();

    cout << "\nEnter second complex number:\n";
    c2 = readComplex();

    sum = add(c1, c2);
    product = multiply(c1, c2);

    cout << "\nOutput:\n";
    cout << "Sum: ";
    printComplex(sum);
    cout << "\nProduct: ";
    printComplex(product);
    cout << endl;

    return 0;
}
