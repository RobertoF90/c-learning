/* Translates an alphabetic phone number into numeric form */

#include <stdio.h>

int main(void)
{
	char ch;

	printf("Enter phone number: ");

	ch = getchar();

	while (ch != '\n') {
		 if (ch >= 'A' && ch <= 'Z')
		{
			if (ch >= 'A' && ch <= 'C') ch = 50;
			if (ch >= 'D' && ch <= 'F') ch = 51;
			if (ch >= 'G' && ch <= 'I') ch = 52;
			if (ch >= 'J' && ch <= 'L') ch = 53;
			if (ch >= 'M' && ch <= 'O') ch = 54;
			if (ch >= 'P' && ch <= 'S') ch = 55;
			if (ch >= 'T' && ch <= 'V') ch = 56;
			if (ch >= 'W' && ch <= 'Z') ch = 57;
		}
		putchar(ch);

		ch = getchar();
	}

	printf("\n");
	
	return 0;
}
