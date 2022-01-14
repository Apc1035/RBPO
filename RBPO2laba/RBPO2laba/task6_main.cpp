#include <iostream>
#include <iomanip>
#include "task6_func.cpp"

using namespace std;

int main()
{
	cout << "x: ";
	double x;
	cin >> x;
	cout << "f(x): " << setprecision(5) << f(x) << endl;
	system("pause");
	return 0;
}