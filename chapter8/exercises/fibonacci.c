
// first Fibonacci numbers in array

#include <stdio.h>

#define N 40

int main(void) 
{
	int fib_numbers[N] = {0, 1};

	for (int i = 0; i < N; i++)
	{
		if (i > 1)
		fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
		printf("%d: %d\n", i + 1, fib_numbers[i]);
	}

	return 0;
}
