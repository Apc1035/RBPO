#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x);

int main()
{
	cout << "x: ";
	double x;
	cin >> x;
	cout << "f(x): " << setprecision(5) << f(x) << endl;
	system("pause");
	return 0;
}

double f(double x)
{
	return (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
}