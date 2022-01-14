
#include <cmath>

module BPZ1902.Pechennikov.Lab3.Task3;

namespace RBPO::Lab3::Task3 {
	double f1(double x) {
		return (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
	}
}