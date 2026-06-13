/* Finds the largest and smallest of four integers entered by the user */

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, s1, l1, s2, l2, largest, smallest;
	
	printf("Enter for integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	if (n1 > n2) {
		l1 = n1;
		s1 = n2;
	} else {
		l1 = n2;
		s1 = n1;
	}
	
	if (n3 > n4) {
		l2 = n3;
		s2 = n4;
	} else {
		l2 = n4;
		s2 = n3;
	}

	if (l1 > l2) {
		largest = l1;
	} else {
		largest = l2;
	}

	if (s1 < s2)
	{
		smallest = s1;
	} else {
		smallest = s2;
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
