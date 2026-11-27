/* Modification of Programming Project 5 Chapter 7 
 * Computes the value of a word by summing the values of its letters */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
			  5, 1, 3, 1, 1, 3, 10, 1, 1,
			  1, 1, 4, 4, 8, 4, 10};
	int i, score;
	char ch;

	printf("Enter a word: ");

	ch = tolower(getchar());

	while (ch != '\n')
	{
		ch -= 97;

		for (i = 0; i < 26; i++)
			if (i == ch) score += values[i];
		
		ch = tolower(getchar());
	}

	printf("Scrabble value: %d\n", score);

	return 0;
}
