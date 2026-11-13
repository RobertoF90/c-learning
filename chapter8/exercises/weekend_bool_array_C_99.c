/* Write a declaration of an array named weekend containing seven bool values.
 * Include an initializer that makes the first and last values true;
 * all other values should be false. */

#include <stdio.h>
#include <stdbool.h>
 
#define N 7
int main() 
{
	bool weekend[N] = {true, false, false, false, false, false, true};

	for (int i = 0; i < N; i++)
		if (weekend[i])
			printf("true\n");
		else 
			printf("false\n");

	return 0;
}
