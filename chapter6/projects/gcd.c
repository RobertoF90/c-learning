/* Asks the user to enter two integers and
 * displays their greatest common divisor */

#include <stdio.h>

int main(void)
{
	int m, n, gcd;

	printf("*** GCD Calculator ***\n");
	printf("Enter two integers: \n");
	
	scanf("%d %d", &m, &n);

	while (n != 0) {

	gcd = m % n;

	m = n;

	n = gcd;

	}
	
	gcd = m;

	printf("Greatest common divisor: %d\n", gcd);

	return 0;
}
