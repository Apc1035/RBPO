#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void f();

double x;
double result;

int main()
{
	cout << "x: ";
	cin >> x;
	f();
	cout << "f(x): " << setprecision(5) << result << endl;
	system("pause");
	return 0;
}

void f()
{
	result = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
}