/* Asks the user for a 12-hour time, 
 * then displays the time in 24-hour form. */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int h, m;
	char ch;

	printf("Enter a 12-hour time: ");

	scanf("%d:%d %c", &h, &m, &ch);

	if (toupper(ch) == 'P') {
		h += 12;
	}

	printf("Equivalent 24-hour time: %d:%d\n", h, m);

	return 0;
}
