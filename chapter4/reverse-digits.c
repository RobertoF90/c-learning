#include <stdio.h>

int main(void) 
{
	int n, n1, n2;

	printf("Enter a two-digit number: ");
	scanf("%d", &n);

	n1 = n % 10;
	n2 = n / 10;

	printf("The reversal is: %d%d\n", n1, n2);

	return 0;
}
