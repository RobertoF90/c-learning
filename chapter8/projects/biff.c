/* Converts a message into B1FF-speak */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i, n = 0;

	char c, message[50]; 

	printf("Enter message: ");

	c = getchar();

	while (c != '\n') 
	{
		message[n] = c;
		n++;
		c = getchar();
	}

	printf("In B1FF-speak: ");
	
	for (i = 0; i < n; i++)
	{
		message[i] = toupper(message[i]);

		switch (message[i]) {
			case 65: message[i] = 52;
				 break;
			case 66: message[i] = 56;
				 break;
			case 69: message[i] = 51;
				 break;
			case 73: message[i] = 49;
				 break;
			case 79: message[i] = 48;
				 break;
			case 83: message[i] = 53;
				 break;
		}

	}

	for (i = 0; i < n; i++)
	{

		putchar(message[i]);
	}
	
	printf("!!!!!!!!!!\n");

	return 0;
}
