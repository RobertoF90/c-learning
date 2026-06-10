/* Displays the amount of tax due on a taxable income */

#include <stdio.h>

int main(void)
{
	int income;
	float tax;

	printf("Insert the amount of taxable income: ");
	scanf("%d", &income);

	if (income < 750) tax = .001f;
	else if (income >= 750 && income < 2250) tax =  7.50f + (income - 750) * .002f;
	else if (income >= 2250 && income < 3750) tax = 37.50f + (income - 2250) * .003f;
	else if (income >= 3750 && income < 5250) tax = 82.50f + (income - 3750) * .004f;
	else if (income >= 5250 && income < 7000) tax = 142.50f + (income - 5250) * .005f;
	else tax = 230.00f + (income - 7000) * .006f;

	printf("Amount of tax due: %.2f\n", income - (income - tax));

	return 0;
}
