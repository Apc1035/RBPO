
#include <cmath>

module BPZ1902.Pechennikov.Lab3.Task4:a;

namespace RBPO::Lab3::Task4 {
	double a(unsigned int i) {
		return pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
	}
}