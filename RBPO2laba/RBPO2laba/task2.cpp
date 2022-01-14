#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x)
{
	return (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
}

int main()
{
	cout << "x: ";
	double x;
	double o = 7;
	cout << "f(x) for const: " << setprecision(5) << f(o) << endl;
	cin >> x;
	cout << "f(x): " << setprecision(5) << f(x) << endl;
	system("pause");
	return 0;
}