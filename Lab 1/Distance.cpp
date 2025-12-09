# include<iostream>
# include<cmath>
using namespace std;
int main(){
	int x, y;
	cout << "Enter two values:";
    cin >> x >> y;
	int sqrx = x*x;
	int sqry = y*y;
	int sum = sqrx + sqry;
	cout << "The distance is = " << sqrt(sum);
}