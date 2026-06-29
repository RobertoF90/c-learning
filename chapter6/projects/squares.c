/* Prints all even squares between 1 and input */

#include <stdio.h>

int main(void)
{
	int n, square;

	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (int i = 1; square < n; i++) {
		square = i * i;
		if (i % 2 == 0) printf("%d\n", square);
	}



	return 0;
}
