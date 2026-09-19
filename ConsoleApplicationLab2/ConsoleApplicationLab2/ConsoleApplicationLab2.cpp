#include <stdio.h>
#include <math.h>
double max( double a, double b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {

	printf("x         y         U\n");
	double x, y, U;

	for (x = 1; x <= 3; x += 1.3) {
		for (y = 0.3; y <= 0.5; y += 0.1) {
			if (x / y < 1) {
				U = max(log10(x + x / y), (cbrt(y) * (4 * x * x + 1)) / (3 * pow(cos(fabs(x - y)), 2)));
			} else{
				U = (tan(x * y) + 2.6) / (sqrt(sin(x)));
			}
			printf("x = %.2f, y = %.2f, U = %.2f\n", x, y, U);
		}
	}
	return 0;
}

