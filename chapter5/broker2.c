#include <stdio.h>

int main(void) 
{
	int n;
	float og_commission, rival_commission, price;

	printf("Enter the number of shares: ");
	scanf("%d", &n);

	printf("Enter the price per share: ");
	scanf("%f", &price);

	if (n * price < 2500.00f)
		og_commission = 30.00f + .017f * n * price;
	else if (n * price < 6250.00f)
		og_commission = 56.00f + .0066f * n * price;
	else if (n * price < 20000.00f)
		og_commission = 76.00f + .0034f * n * price;
	else if (n * price < 50000.00f)
		og_commission = 100.00f + .0022f * n * price;
	else if (n * price < 500000.00f)
		og_commission = 155.00f + .0011f * n * price;
	else
		og_commission = 255.00f + .0009f * n * price;

	if (og_commission < 39.00f)
		og_commission = 39.00f;

	printf("Original commission: $%.2f\n", og_commission);

	if (n < 2000)
		rival_commission = 33.00f + 0.03f * n;
	else 
		rival_commission = 33.00f + 0.02f * n;

	printf("Rival commission: $%.2f\n", rival_commission);

	return 0;
}
