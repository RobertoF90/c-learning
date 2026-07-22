/* Counts the number of vowels in a sentence */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int v = 0;
	char ch;

	printf("Enter a sentence: ");

	ch = getchar();

	while (ch != '\n') {
		if (toupper(ch) == 'A' ||
		    toupper(ch) == 'E' ||
		    toupper(ch) == 'I' ||
		    toupper(ch) == 'O' ||
		    toupper(ch) == 'U')
		{
			v++;
		}

		ch = getchar();
	}

	printf("Your sentence contains %d vowels.\n", v);

	return 0;
}
