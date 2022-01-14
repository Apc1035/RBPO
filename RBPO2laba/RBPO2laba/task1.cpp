#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "x: ";
	double x, o = 5;
	cin >> x;
	double f = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
	double f2 = (o * o + 2 * o - 3 + (o + 1) * sqrt(o * o - 9)) / (o * o - 2 * o - 3 + (o - 1) * sqrt(o * o - 9));
	cout << "f(x): " << setprecision(5) << f << endl;
	cout << "f(x) for const: " << setprecision(5) << f2 << endl;
	system("pause");
	return 0;


}