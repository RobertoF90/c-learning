/* Prints the English word for the inserted number */

#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a two-digit number: ");
	scanf("%d", &n);

	printf("You entered the number ");

	if (n == 0) 
	{
		printf("zero");
	}

	if (n >= 11 && n <= 19) 
	{
		switch (n)
		{
			case 11: printf("eleven");
				break;
			case 12: printf("twelve");
				break;
			case 13: printf("thirteen");
				break;
			case 14: printf("fourteen");
				break;
			case 15: printf("fifteen");
				break;
			case 16: printf("sixteen");
				break;
			case 17: printf("seventeen");
				break;
			case 18: printf("eighteen");
				break;
			case 19: printf("nineteen");
				break;
			default: break;
		}

		printf(".\n");

		return 0;
	}

	switch (n / 10) 
	{
		case 9: printf("ninety");
			break;
		case 8: printf("eighty");
			break;
		case 7: printf("seventy");
			break;
		case 6: printf("sixty");
			break;
		case 5: printf("fifty");
			break;
		case 4: printf("fourty");
			break;
		case 3: printf("thirty");
			break;
		case 2: printf("twenty");
			break;
		default: break;
	}

	if (n / 10 > 0 && n % 10 != 0) printf("-");

	switch (n % 10)
	{
		case 9: printf("nine");
			break;
		case 8: printf("eight");
			break;
		case 7: printf("seven");
			break;
		case 6: printf("six");
			break;
		case 5: printf("five");
			break;
		case 4: printf("four");
			break;
		case 3: printf("three");
			break;
		case 2: printf("two");
			break;
		case 1: printf("one");
			break;
		default: break;
	}

	printf(".\n");

	return 0;
}
