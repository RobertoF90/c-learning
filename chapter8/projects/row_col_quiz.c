#include <stdio.h>

int main(void) 
{
	int n[5][5] = {};
	int student_totals[5] = {};
	int student_avg[5] = {};
	int quiz_totals[5] = {};
	int quiz_avg[5] = {};

	int quiz_highest[5] = {};
	int quiz_lowest[5] = {};

	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("Enter student %d grades: ", i + 1);
			scanf("%d %d %d %d %d", &n[i][0], &n[i][1], &n[i][2], &n[i][3], &n[i][4]);
	}


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			student_totals[i] += n[i][j]; 
			quiz_totals[j] += n[i][j];
		
			if (quiz_highest[j] < n[i][j])
				quiz_highest[j] = n[i][j];

			if (quiz_lowest[j] == 0 || quiz_lowest[j] > n[i][j])
				quiz_lowest[j] = n[i][j];
		}

		student_avg[i] = student_totals[i] / 5;
	}

	printf("\n");

	printf("Student:\tTotal\tAverage\n");

	for (i = 0; i < 5; i++) 
	{

		printf("%d:       ", i + 1);
		printf("\t%d ", student_totals[i]);
		printf("\t%d ", student_avg[i]);
		printf("\n");
	}
	

	printf("\nQuiz:   \tTotal\tAverage\n");

	for (i = 0; i < 5; i++)
	{
		quiz_avg[i] = quiz_totals[i] / 5;

		printf("%d:       ", i + 1);
		printf("\t%d ", quiz_totals[i]);
		printf("\t%d ", quiz_avg[i]);
		printf("\n");
	}

	printf("\nQuiz:\t");
	for (i = 0; i < 5; i++) printf("\t%d", i + 1);

	printf("\nHighest:");

	for (i = 0; i < 5; i++) printf("\t%d", quiz_highest[i]);

	printf("\n");
	
	printf("Lowest:\t");
	for (i = 0; i < 5; i++) printf("\t%d", quiz_lowest[i]);
	printf("\n");

	return 0;
}
