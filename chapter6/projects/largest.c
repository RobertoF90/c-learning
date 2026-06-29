/* This programs asks the user to input a series of numbers
 * and displays the largest in the series */

#include <stdio.h>

int main(void)
{
	float input, n;

	while (input != 0)
	{
		printf("Enter a number: ");
		scanf("%f", &input);
		if (input > n) 
		{
			n = input;
		}
	}

	printf("The largest number entered was %2f\n", n);

	return 0;
}
