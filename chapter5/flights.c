/* displays the closest time of next flight to another city */

#include <stdio.h>

int main(void)
{
	int time, h, m;

	int f1d = 8 * 60, f1a = 10 * 60 + 16;
	int f2d = 9 * 60 + 43, f2a = 11 * 60 + 52;
	int f3d = 11 * 60 + 19, f3a = 13 * 60 + 31;
	int f4d = 12 * 60 + 47, f4a = 15 * 60;
	int f5d = 14 * 60, f5a = 16 * 60 + 8;
	int f6d = 15 * 60 + 45, f6a = 17 * 60 + 55;
	int f7d = 19 * 60, f7a = 21 * 60 + 20;
	int f8d = 21 * 60 + 45, f8a = 23 * 60 + 58;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);

	time = h * 60 + m;

	int departure_h, departure_m, arrival;

	if (time < f1d)
	{
		departure_h = f1d / 60;
		departure_m = f1d / 60 % 100;
		
	}

	printf("Closest departure time is %d:%d", departure_h, departure_m);

	return 0;
}
