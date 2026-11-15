// Check numbers for repeated digits and displays them in a table.

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	bool digit_repeated[10] = {false};
	int digit_counter[10] = {};
	int i, digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (!digit_seen[digit])
			digit_seen[digit] = true;
		else 
		{
			digit_repeated[digit] = true;
		}
		digit_counter[digit]++;
		n /= 10;
	}

		printf("Digit:       ");
		for (i = 0; i < 10; i++) 
		{
			printf("%3d", i);
			
		}
		
		printf("\nOccurrences: ");
		for (i = 0; i < 10; i++) 
		{
			printf("%3d", digit_counter[i]);	
		}
		printf("\n");

	return 0;
}
