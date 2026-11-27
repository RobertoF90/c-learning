/* Reverses the words in a sentence */

#include <stdio.h>

#define N 100

int main(void)
{
	char sentence[N] = {}; 
	char sentence_rev[N] = {};
	char ch, t;

	char p = 46;
	char ep = 33;
	char qm = 63;

	int i, j, r = 0, n = 0;

	printf("Enter a sentence: ");
	ch = getchar();

	while (ch != '\n') {

		if (ch == p || ch == ep || ch == qm)
		{
			t = ch;
			break;
		}

		sentence[n] = ch;
		n++;

		ch = getchar();
	}

	n = 0;
	for (i = N - 2; i >= 0; i--)
	{
		n++;
		if (sentence[i] == 32 || i == 0) 
		{	
			if (r != 0 && i == 0) 
			{
				sentence_rev[r] = 32;
				r++;
			}

			for (j = 0; j < n; j++)
			{
				sentence_rev[r] = sentence[i + j];
				r++;
				
				if (sentence_rev[0] == 32) r--;
			}
			n = 0;
		}
	}

	printf("Reversal of sentence: ");
	for (i = 0; i < N; i++)
	{
		putchar(sentence_rev[i]);			
	}
	printf("%c\n", t);

	return 0;
}
