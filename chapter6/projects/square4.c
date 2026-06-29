/* Prints a table of squares using an odd method */

#include <stdio.h>

int main(void)
{
	int n, odd, square = 1;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	odd = 3;
	for (int i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, square);

		square += odd;
		odd += 2;
	}

	return 0;
}
