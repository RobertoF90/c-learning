#include <stdio.h>

int main(void)
{
	float amount;
	float tax = 5.0f;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	amount = amount + (amount * tax / 100);

	printf("With tax added: %.2f\n", amount);

	return 0;
}
