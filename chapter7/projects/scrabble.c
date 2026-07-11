/* Computes the value of a word in the game Scrabble */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int n = 0;

	char ch;

	printf("Enter a word: ");

	ch = getchar();

	while (ch != '\n') {
		char l = toupper(ch);
		
		if (l == 'A' || l == 'E' || l == 'I' || l == 'L' || l == 'N' || l == 'N' || l == 'R' || l == 'S' || l == 'T' || l == 'U') 
			n += 1;

		if (l == 'D' || l == 'G') 
			n += 2;
		
		if (l == 'B' || l == 'C' || l == 'M' || l == 'P')
			n += 3;

		if (l == 'F' || l == 'H' || l == 'V' || l == 'W' || l == 'Y')
			n += 4;
		if (l == 'K')
			n += 5;
		if (l == 'J' || l == 'X')
			n += 8;
		if (l == 'Q' || l == 'Z')
			n += 10;
	ch = getchar();
	
	}
	
	printf("Scrabble value: %d\n", n);

	return 0;
}
