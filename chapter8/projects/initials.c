/* Modification of Programming project 11 Chapter 7
 * Takes first and last name entered and displays the last name,
 * a comma, and the first initial, followed by a period. */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) 
{
	int i, c = 0;
	bool name;
	char ch, first_name;
	char last_name[20] = {};

	printf("Enter a first and last name: ");
	ch = getchar();

	while (!name) {
		if (!first_name && ch != 32) first_name = ch;
		if (ch == 32) name = true;
		ch = getchar();
	}

	while (ch != '\n') {
		last_name[c] = ch;
		c++;
		ch = getchar();
	}

	printf("You entered the name: ");

	for (i = 0; i < c; i++)
	{
		if (i == 0) printf("%c", toupper(last_name[i]));
		else printf("%c", last_name[i]);
	}

	printf(", %c.\n", toupper(first_name));

	return 0;
}
