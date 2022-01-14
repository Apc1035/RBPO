
#include <cmath>

module BPZ1902.Pechennikov.Lab3.Task4:f1;

namespace RBPO::Lab3::Task4 {
	double f1(double x) {
		return (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
	}
}