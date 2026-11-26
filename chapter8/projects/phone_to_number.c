/* modification of Programming Project 4 Chapter 7 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char phone[15] = {};
	char ch;
	
	int i, n = 0;

	printf("Enter phone number: ");
	ch = toupper(getchar());

	while (ch != '\n')
	{
		if (ch >= 'A' && ch <= 'C') ch = 50;
		if (ch >= 'D' && ch <= 'F') ch = 51;
		if (ch >= 'G' && ch <= 'I') ch = 52;
		if (ch >= 'J' && ch <= 'L') ch = 53;
		if (ch >= 'M' && ch <= 'O') ch = 54;
		if (ch >= 'P' && ch <= 'S') ch = 55;
		if (ch >= 'T' && ch <= 'V') ch = 56;
		if (ch >= 'W' && ch <= 'Z') ch = 57;
	
		phone[n] = ch;
		n++;
		
		ch = toupper(getchar());
	}

	printf("In numeric form: ");

	for (i = 0; i < 15; i++) printf("%c", phone[i]);

	printf("\n");

	return 0;
}
