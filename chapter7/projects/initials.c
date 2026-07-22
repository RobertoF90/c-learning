/* Takes a first name and last name entered by the user
 * and displays the last name, a comma, and the first initial */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int s = 0;
	int n = 0;
	char ch = 0;

	printf("Enter a first and last name: ");

	while (!n) {
		ch = getchar();

		if (!s && ch != 32){
	
			s = ch;
		
		} 

		if (ch == 32)
			n = 1;
	
	}



//	while (ch != 0 && ch != ' ') {
//		s = ch;
//
//		printf("surname taken\n");
//	}

	ch = getchar();

	while (ch != '\n') {		
		putchar(ch);

		ch = getchar();

	}
	printf(", ");
	putchar(toupper(s));
	putchar('.');
	printf("\n");

	return 0;
}
