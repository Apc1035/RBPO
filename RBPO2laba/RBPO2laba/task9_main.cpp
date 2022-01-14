#include "pechennikov.h"
#include "task9_func.cpp"

int main()
{
	cout << "x: ";
	cin >> pechennikov::x;
	pechennikov::f();
	cout << "f(x): " << setprecision(5) << pechennikov::result << endl;
	system("pause");
	return 0;
}