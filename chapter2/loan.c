#include <stdio.h>

int main(void)
{
	float loan, interest, monthlyPayment;

	printf("Enter amount of loan: ");
	
	scanf("%f", &loan);
	
	printf("Enter interest rate: ");
	
	scanf("%f", &interest);
	
	printf("Enter monthly payment: ");
	
	scanf("%f", &monthlyPayment);

	loan = loan - monthlyPayment + (loan * interest / 100 / 12);

	printf("Balance remaining after first payment: $%.2f\n", loan);

	loan = loan - monthlyPayment + (loan * (interest / 100 / 12));

	printf("Balance remaining after second payment: $%.2f\n", loan);

	loan = loan - monthlyPayment + (loan * (interest / 100 / 12));
	
	printf("Balance remaining after third payment: $%.2f\n", loan);

	return 0;
}
