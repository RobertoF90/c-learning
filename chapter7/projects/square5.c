/* Prints a table of squares using an odd method */

/* short int overflows at n = 181 */
/* int overflows at n = 46340 */


#include <stdio.h>

int main(void)
{
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%20d%20d\n", i, i * i);
	}

	return 0;
}
