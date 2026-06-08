#include <stdio.h>

int main(void) 
{
	int i = 5, j = 3, k = 0;

	printf("%d %d\n", i / j, i % j);
	// 5 / 3 = 1 (truncated)
	// 5 % 3 = 5 / 3 = 1 (truncated) with remainder 2
	
	i = 2;

	printf("%d\n", (i + 10) % j);
	// 12 % 3 = 12 / 3 = 0 with remainder 0

	i = 7;
	j = 8;
	k = 9;

	printf("%d\n", (i + 10) % k / j);
	// (7 + 10) % 9 = 17 / 9 = 1 with remainder 8 / 8 = 0 

	i = 1;
	j = 2;
	k = 3;

	printf("%d\n", (i + 5) % (j + 2) / k);
	// (1 + 5) reminder of (2 + 2) = 6 / 4 = 2 with remainder 2 / 3 = 0 (truncated)

	i = 12;
	j = 8;

	printf("%d\n", (-i) / j);
	// negative 12 first then division -> -12 / 8 = -1 (truncated)

	printf("%d\n", -(i / j));
	// first division 12 / 8 = 1 (truncated) then turned into negative = -1
	
	printf("%d\n", 8


	return 0;
}
