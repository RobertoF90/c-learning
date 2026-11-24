#include <stdio.h>

int main(void) 
{
	int n[5][5] = {};
	int row_totals[5] = {};
	int col_totals[5] = {};

	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("Enter row %d: ", i + 1);
			scanf("%d %d %d %d %d", &n[i][0], &n[i][1], &n[i][2], &n[i][3], &n[i][4]);
	}


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			row_totals[i] += n[i][j]; 
			col_totals[j] += n[i][j];

		}
	}

	printf("\n");
	printf("Row totals: ");
	for (i = 0; i < 5; i++) printf("%d ", row_totals[i]);
	printf("\n");
	printf("Column totals: ");
	for (i = 0; i < 5; i++) printf("%d ", col_totals[i]);
	printf("\n");

	return 0;
}
