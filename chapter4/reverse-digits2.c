#include <stdio.h>

int main(void)
{
	int n, n1, n2, n3;

	printf("Enter a three-digit number: ");
	scanf("%d", &n);

	n1 = n % 10;
	n2 = n / 10 % 10;
	n3 = n / 100 % 100;

	printf("The reversal is: %d%d%d\n", n1, n2, n3);
		

	return 0;
}
