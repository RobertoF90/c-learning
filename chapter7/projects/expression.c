/* Evaluates an expression */

#include <stdio.h>

int main (void) {

	float n1, n2, n3, total;
	char oper1, oper2;

	printf("Enter an expression: ");
	scanf("%f%c%f%c%f", &n1, &oper1, &n2, &oper2, &n3);
	
	if (oper1 == '+') {
		total = n1 + n2;
	}

	if (oper1 == '-') {
		total = n1 - n2;
	}

	if (oper1 == '*') {
		total = n1 * n2;
	}
	
	if (oper1 == '/') {
		total = n1 / n2;
	}

	if (oper2 == '+') {
		total += n3;
	}

	if (oper2 == '-') {
		total -= n3;
	}

	if (oper2 == '*') {
		total *= n3;
	}

	if (oper2 == '/') {
		total /= n3;
	}

	printf("Value of expression: %.1f\n", total);

	return 0;
}
