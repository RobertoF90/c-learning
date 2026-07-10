/* Sums a series of numbers (using double floating point variables) */

#include <stdio.h>

int main(void)
{
	double n, sum = 0;

	printf("This program sums a series of double floating numbers.\n");
	printf("Enter number (0 to terminate)");

	scanf("%lf", &n);
	while (n != 0) {
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %f\n", sum);

	return 0;
}	
