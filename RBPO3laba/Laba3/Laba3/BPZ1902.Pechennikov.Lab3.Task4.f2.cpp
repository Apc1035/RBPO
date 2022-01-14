
#include <cmath>

module BPZ1902.Pechennikov.Lab3.Task4:f2;

namespace RBPO::Lab3::Task4 {
	double f2(double x) {
		if (x > 3)
			return 1 / x * x * x + 6;
		else
			return x * x - 3 * x + 9;
	}
}