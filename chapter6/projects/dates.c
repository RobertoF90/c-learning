/* Prompts the user to enter any number dates and
 * indicates which date comes earlier on the calendar
 */

#include <stdio.h>

int main(void)
{
	int day = 1, month = 1, year = 1;
	
	int e_day = 30, e_month = 12, e_year = 99;

	printf("*** Earliest Date Calculator *** \n");
	printf("Enter 0/0/0 to exit.\n");	

	while (1)
	{
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);
	
		if (day == 0 && month == 0 && year == 0) break;

		if (year < e_year) 
		{	
			e_year = year;
			e_month = month;
			e_day = day;
		}
	
		if (year == e_year)
		{
			if (month < e_month)
			{
				e_year = year;
				e_month = month;
				e_day = day;
			}
		}

		if (year == e_year && month == e_month)
		{
			if (day < e_day)
			{
				e_year = year;
				e_month = month;
				e_day = day;
			} 
		}
	}	

	printf("%d/%d/", e_month, e_day);
	if (e_year < 10) printf("0");
	printf("%d", e_year);
	printf(" is the earliest date\n");
	
	return 0;
}
