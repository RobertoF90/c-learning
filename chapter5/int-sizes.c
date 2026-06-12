/* Finds the largest and smallest of four integers entered by the user */

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, largest, smallest;
	
	printf("Enter for integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	if (n1 > n2) {
		largest = n1;
		smallest = n2;
	} else {
		largest = n2;
		smallest = n1;
	}
	
	if (n3 > n4 && n3 > largest)
	// n3 is larger than n4 and largest
	{
		largest = n3;
		
	} 

	if (n4 < smallest && largest < n4) 
	{
		smallest = n4;
	} else {
	// largest is smaller than n4 
	// means n4 is the largest
		largest = n4;
	} 
	
	if (n3 < smallest) 
	// n3 is the smallest and n4 is not the smallest
	{
		smallest = n3;
	
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
