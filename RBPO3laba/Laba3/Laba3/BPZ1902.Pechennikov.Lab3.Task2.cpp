
#include <cmath>

module BPZ1902.Pechennikov.Lab3.Task2;

namespace RBPO::Lab3::Task2 {
	double f1(double x) {
		return (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
	}

	double f2(double x) {
		if (x > 3)
			return  1 / x * x * x + 6;
		else
			return x * x - 3 * x + 9;
	}

	double a(unsigned int i) {
		return pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
	}

	double f3(unsigned int n) {
		double res = 0;
		unsigned int i = 0;
		while (i <= n)
			res += a(i++);

		return res;
	}

	double f4(double eps) {
		double res = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) >= eps)
			res += a(i++);

		return res;
	}
}