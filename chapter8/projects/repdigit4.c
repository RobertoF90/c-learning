/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;

	printf("Enter a number (0 or negative to quit): ");
	scanf("%ld", &n);
	
	while (n > 0) {
		while (n > 0) {
			digit = n % 10;
			if (digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		}

		if (n > 0)
			printf("Repeated digit\n");
		else
			printf("No repeated digit\n");
		
		for (int i = 0; i < 10; i++)
			digit_seen[i] = false;

		printf("Enter a number (0 or negative to quit): ");
		scanf("%ld", &n);
	}

	return 0;
}
