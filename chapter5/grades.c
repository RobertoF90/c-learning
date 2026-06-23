/* Converts a numberical grade into a letter grade */

#include <stdio.h>

int main(void)
{
	int grade;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if(grade > 100 || grade < 0) 
	{
		printf("Invalid input\n");
		return 0;
	}

	printf("Letter grade: ");

	if (grade == 100) 
	{
		printf("A\n");
		return 0;
	}

	switch (grade / 10) 
	{
		case 9: printf("A");
			break;
		case 8: printf("B");
			break;
		case 7: printf("C");
			break;
		case 6: printf("D");
			break;
		default: printf("F");
			break;
	}
	
	printf("\n");

	return 0;
}
