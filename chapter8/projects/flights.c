/* rewrite of project 8 chapter 5 */

#include <stdio.h>

int main(void)
{
	int i;
	int h, m;
	int time;

	int departures[8][2] = {{8, 0},
				{9, 43},
				{11, 19},
				{12, 47},
				{14, 0},
				{15, 45},
				{19, 0},
				{21, 45}};

	int arrivals[8][2] = {{10, 16},
			      {11, 52},
			      {13, 31},
			      {15, 0},
			      {16, 8},
			      {17, 55},
			      {21, 20},
			      {23, 58}};

	printf("Enter departure time (24h): ");
	scanf("%d:%d", &h, &m);

	time = h * 60 + m;
	for (i = 0; i < 8; i++)
	{
		if (time < departures[i][0] * 60 + departures[i][1])
		{
			printf("Closes departure time is: %d:%d", departures[i][0], departures[i][1]);
			if (departures[i][1] < 10) printf("0");
			
			printf(" arrives at: %d:", arrivals[i][0]);
			if (arrivals[i][1] < 10 && arrivals[i][1] > 0) 
			{
				printf("0%d", arrivals[i][1]);
			} else {
				printf("%d", arrivals[i][1]);
				if (arrivals[i][1] == 0) printf("0");
			}
			printf("\n");

			break;
		}
	}
	return 0;
}
