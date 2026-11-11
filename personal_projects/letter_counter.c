/* Counts the number of repeated letters from an input */

#include <stdio.h>

int main() 
{
	// takes a string
	int n = 0;
	char ch = ' ';
	char a = 'a';
	int letters[26] = {};

	printf("Input word or sentence: ");

	ch = getchar();
	// loops over input and counts
	while (ch != '\n')
	{
		if (ch >= 97 && ch <= 122)
			letters[ch - 'a'] += 1;
		if (ch >=65 && ch <= 90)
			letters[ch - 'A'] += 1;
		ch = getchar();
	}
	
	// prints result
	for (int i = 0; i < 26; i++)
	
	{
		printf("%c: %d  \n", a + i, letters[i]);
	}

	return 0;

}
