/* Write a declaration of an array named weekend containing seven bool values.
 * Include an initializer that makes the first and last values true;
 * all other values should be false. */

#include <stdio.h>
 
#define N 7
int main() 
{
	int weekend[N] = {1, 0, 0, 0, 0, 0, 1};

	for (int i = 0; i < N; i++)
		if (weekend[i])
			printf("true\n");
		else 
			printf("false\n");

	return 0;
}
