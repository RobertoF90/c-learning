/* Approximates e by computing the value of n */

#include <stdio.h>

int main(void)
{
	int n, result = 1;

	printf("Enter the number: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		result += 1 / i;
	}

	printf("%d\n", result);


	return 0;
}
