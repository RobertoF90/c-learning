/* upc program rewritten to accept a single user input and return if the code is valid.
 * upc code: 01380015173
 * check digit: 5
 * */

#include <stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
	
	printf("Enter the UPC code: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	if (9 - ((total - 1) % 10) == 5) 
		printf("VALID\n");
	else
		printf("NOT VALID\n");

	return 0;
}
