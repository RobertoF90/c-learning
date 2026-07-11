/* Adds two fractions */

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	char oper;

	printf("Enter fraction: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &oper, &num2, &denom2);

	if (oper == '+') {
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
	}

	if (oper == '-') {
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
	}

	if (oper == '*') {
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
	}

	if (oper == '/') {
		result_num = num1 * denom2;
		result_denom = num2 * denom1;
	}

	int n1, n2, gcd_n, gcd_d;

	n1 = result_num;
	n2 = result_denom;
	
	printf("The result is: %d/%d\n", result_num, result_denom);

	while (n2 != 0) {
		gcd_n = n1 % n2;

		n1 = n2;

		n2 = gcd_n;
	}

	gcd_n = n1;

	n1 = result_denom;
	n2 = result_num;

	while (n2 != 0) {
		gcd_d = n1 % n2;

		n1 = n2;

		n2 = gcd_d;
	}

	gcd_d = n1;

	result_num /= gcd_n;
	result_denom /= gcd_d;

	printf("In lowest terms: %d/%d\n", result_num, result_denom);

	return 0;
}
