module BPZ1902.Pechennikov.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
			}
			double f2(double x) {
				return (x > 3) ? 1 / x * x * x + 6 : x * x - 3 * x + 9;
			}
			double a(int i) {
				return  pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double prev = a(0);
				double next = a(1);
				double sum = prev + next;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}