// two-dimensional array to store temperature readings in a month

#include <stdio.h>

int main(void)
{
	float temperature_readings[29][23]= {{0, 74, 74, 79},
					    {72, 71, 68}};

	float average_temp = 0;

	for (int i = 0; i < 29; i++)
		for (int j = 0; j < 23; j++)
			average_temp += temperature_readings[i][j];

	average_temp = average_temp / 52;
	printf("Average temperature: %.2f\n", average_temp);

	return 0;
}
