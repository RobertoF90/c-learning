#include <stdio.h>

int main(void)
{
	int x;

	printf("Input a value: ");
	scanf("%d", &x);
	
	int result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x)  - (x * x) + 7 * x - 6;

	printf("%d\n", result);

	int horner = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("Horner's Rule: %d\n", horner);

	return 0;
}
