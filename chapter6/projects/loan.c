#include <stdio.h>

int main(void)
{
	float loan, interest, monthlyPayment;
	int number;

	printf("Enter amount of loan: ");
	
	scanf("%f", &loan);
	
	printf("Enter interest rate: ");
	
	scanf("%f", &interest);
	
	printf("Enter monthly payment: ");
	
	scanf("%f", &monthlyPayment);

	printf("Enter number of payments: ");
	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
	loan = loan - monthlyPayment + (loan * interest / 100 / 12);

	printf("Balance remaining after payment %d: $%.2f\n", i + 1, loan);
	}

	return 0;
}
