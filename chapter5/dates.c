/* Prompts the user to enter two dates and
 * indicates which date comes earlier on the calendar
 */

#include <stdio.h>

int main(void)
{
	int day1, month1, year1;
	int day2, month2, year2;
	
	int date;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);

	if (year1 < year2) 
	{
		date = 1;
	} else {
		date = 2;
	}

	if (year1 == year2)
	{
		if (month1 < month2)
		{
			date = 1;
		} else {
			date = 2;
		}
	}

	if (year1 == year2 && month1 == month2)
	{
		if (day1 < day2)
		{
			date = 1;
		} else {
			date = 2;
		}
	}

	if (date == 1) 
	{
		printf("%d/%d/", month1, day1);
		if (year1 < 10) printf("0");
		printf("%d", year1);
		printf(" is earlier than ");
		printf("%d/%d/", month2, day2);
		if (year2 < 10) printf("0");
		printf("%d\n", year2);
	}

	if (date == 2)
	{
		printf("%d/%d/", month2, day2);
		if (year2 < 10) printf("0");
		printf("%d", year2);
		printf(" is earlier than ");
		printf("%d/%d/", month1, day1);
		if (year1 < 10) printf("0");
		printf("%d\n", year1);
	}

	return 0;
}
