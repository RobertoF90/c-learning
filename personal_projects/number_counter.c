/* Counts the repeated numbers from an input */

#include <stdio.h>

int main() 
{
	// takes a string
	int n = 0;
	char ch = ' ';
	char zero = '0';
	int numbers[9] = {};

	printf("Input a series of numbers: ");

	ch = getchar();
	// loops over input and counts
	while (ch != '\n')
	{
		if (ch >= 48 && ch <= 57)
			numbers[ch - '0'] += 1;
		ch = getchar();
	}
	
	// prints result
	for (int i = 0; i < 9; i++)
	
	{
		printf("%c: %d  \n", zero + i, numbers[i]);
	}

	return 0;

}
