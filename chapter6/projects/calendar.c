/* Prints a one-month calendar */

#include <stdio.h>

int main(void)
{
	int day = 0, days = 30, start = 1;
	
	printf("Enter number of days in month: ");
	scanf("%d", &days);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	if (days > 31 || days < 28) days = 30;

	if (start < 1 || start > 7) start = 1;

	for (int i = 1; i < start; i++) {
		printf("    ");
	}

	day += start - 1;
	
	for (int i = 1; i <= days; i++) {			
		if (day > 0 && day % 7 == 0) 
		{
			day = 0;	
			printf("\n");
		}

		day++;
		printf("%4d", i);
	}

	printf("\n");
	return 0;
}
