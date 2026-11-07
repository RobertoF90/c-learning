#include <stdio.h>
#include <math.h>

int main() {

	double x = 0;
	double y = 1;
	double average = 0;
	double result = 1;

	printf("Enter a positive number: ");
	
	scanf("%lf", &x);

	result = (y + (x / y)) / 2;
	while (fabs(result - y) > .00001 * y) {
		y = result;
		result = (y + (x / y)) / 2;

	}
	printf("Square root: %lf\n", result);





	return 0;
}
