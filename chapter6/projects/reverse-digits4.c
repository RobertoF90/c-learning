#include <stdio.h>

int main(void) 
{
	int n, n1, n2 = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	do {
	
	n1 = n % 10;

	n /= 10;

	n2 = n2 * 10 + n1;

	} while (n != 0);

	printf("The reversal is: %d\n", n2);

	return 0;
}
