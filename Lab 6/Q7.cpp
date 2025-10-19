#include <iostream>
using namespace std;

int main() {
    const int EMPLOYEES = 4;
    const int PRODUCTS = 6;

    float sales[PRODUCTS][EMPLOYEES];
    cout << "Enter total sales for 6 products made by 4 employees over the month:\n";
    for (int i = 0; i < PRODUCTS; i++) {
        for (int j = 0; j < EMPLOYEES; j++) {
            cout << "Product " << i + 1 << " - Employee " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }


    cout << "\nSales Summary Table:\n\n";
    cout << "Product\t";

    for (int j = 0; j < EMPLOYEES; j++) {
        cout << "Emp" << j + 1 << "\t";
    }
    cout << "Total(Product)\n";

    float productTotals[PRODUCTS] = {};
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "Prod" << i + 1 << "\t";
        for (int j = 0; j < EMPLOYEES; j++) {
            cout << sales[i][j] << "\t";
            productTotals[i] += sales[i][j];
        }
        cout << productTotals[i] << endl;
    }

    float employeeTotals[EMPLOYEES] = {};
    for (int j = 0; j < EMPLOYEES; j++) {
        for (int i = 0; i < PRODUCTS; i++) {
            employeeTotals[j] += sales[i][j];
        }
    }

    cout << "Total(Emp)\t";
    for (int j = 0; j < EMPLOYEES; j++) {
        cout << employeeTotals[j] << "\t";
    }
    cout << endl;

    return 0;
}
