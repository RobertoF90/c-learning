#include <stdio.h>

int main(void)
{
	int d, m, y;

	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &d, &m, &y);

	printf("You entered the date %d%d%d\n", y, d, m);

	return 0;
}
