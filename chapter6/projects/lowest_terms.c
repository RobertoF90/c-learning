/* Reduces a fraction to the lowest terms */

#include <stdio.h>

int main(void)
{
	int n, d, n1, n2, gcd_n, gcd_d;

	printf("*** Fraction Reducer ***\n");
	printf("Enter a fraction: \n");

	scanf("%d/%d", &n, &d);

	n1 = n;
	n2 = d;

	while (n2 != 0) {
		gcd_n = n1 % n2;

		n1 = n2;

		n2 = gcd_n;
	}

	gcd_n = n1;

	n1 = d;
	n2 = n;

	while (n2 != 0) {
		gcd_d = n1 % n2;

		n1 = n2;

		n2 = gcd_d;
	}

	gcd_d = n1;

	n /= gcd_n;
	d /= gcd_d;

	printf("In lowest terms: %d/%d\n", n, d);

	return 0;
}
