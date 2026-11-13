/* (C99) exercise 3 + designated initializer - as short as possible. */

#include <stdio.h>

#define N 7

int main(void) 
{
	int weekend[N] = {[0] = 1, [6] = 1};

	for (int i = 0; i < N; i++)
	{
		if (weekend[i] == 1) 
			printf("true\n");
		else
			printf("false\n");
	}
	return 0;
}
