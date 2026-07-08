/* Prints a table of squares using an odd method */
/* Every 25 results asks the user to press ENTER to continue */


#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int n;
	char ch;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");

	scanf("%d", &n);
	/* the ENTER pressed after input carries over */
	
	getchar();
	/* deletes the previous input */

	for (int i = 1; i <= n; i++) {

		if (i % 25 == 0) {
			printf("Press Enter to continue...");
			
			while (ch = getchar() != '\n')
				;
			
		}

		printf("%20d%20d\n", i, i * i);
	
	}

	return 0;
}
