/* displays the closest time of next flight to another city */

#include <stdio.h>

int main(void)
{
	int time, h = 0, m = 0;

	int f1dh = 8, f1dm = 0, f1ah = 10, f1am = 16;
	int f2dh = 9, f2dm = 43, f2ah = 11, f2am = 52;
	int f3dh = 11, f3dm = 19, f3ah = 13, f3am = 31;
	int f4dh = 12, f4dm = 47, f4ah = 15, f4am = 0;
	int f5dh = 14, f5dm = 0, f5ah = 16, f5am = 8;
	int f6dh = 15, f6dm = 45, f6ah = 17, f6am = 55;
	int f7dh = 19, f7dm = 0, f7ah = 21, f7am = 20;
	int f8dh = 21, f8dm = 45, f8ah = 23, f8am = 58;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);

	time = h * 60 + m;

	int departure_h, departure_m, arrival_h, arrival_m;
	int departure_pm, arrival_pm;

	if (time < f8dh * 60 + f8dm)
	{
		departure_h = f8dh;
		departure_m = f8dm;
		arrival_h = f8ah;
		arrival_m = f8am;
	}

	if (time < f7dh * 60 + f7dm)
	{
		departure_h = f7dh;
		departure_m = f7dm;
		arrival_h = f7ah;
		arrival_m = f7am;
	}

	if (time < f6dh * 60 + f6dm)
	{
		departure_h = f6dh;
		departure_m = f6dm;
		arrival_h = f6ah;
		arrival_m = f6am;
	}
	
	if (time < f5dh * 60 + f5dm)
	{
		departure_h = f5dh;
		departure_m = f5dm;
		arrival_h = f5ah;
		arrival_m = f5am;
	}

	if (time < f4dh * 60 + f4dm)
	{
		departure_h = f4dh;
		departure_m = f4dm;
		arrival_h = f4ah;
		arrival_m = f4am;
	}

	if (time < f3dh * 60 + f3dm)
	{
		departure_h = f3dh;
		departure_m = f3dm;
		arrival_h = f3ah;
		arrival_m = f3am;
	}
	
	if (time < f2dh * 60 + f2dm)
	{
		departure_h = f2dh;
		departure_m = f2dm;
		arrival_h = f2ah;
		arrival_m = f2am;
	} 

	if (time < f1dh * 60 + f1dm)
	{
		departure_h = f1dh;
		departure_m = f1dm;
		arrival_h = f1ah;
		arrival_m = f1am;

	} 
	
	printf("Closest departure time is ");
	
	if (departure_h > 12) 
	{
		departure_h -= 12;
		departure_pm = 1;
	}

	if (departure_h < 12) printf(" ");
	printf("%d:", departure_h);
	if (departure_m < 10) printf("0");
	printf("%d", departure_m);

	if (departure_pm) 
	{
		printf(" p.m., ");
	} else {
		printf(" a.m., ");
	}

	printf("arriving at ");

	if (arrival_h > 12)
	{
		arrival_h -= 12;
		arrival_pm = 1;
	}

	if (arrival_h < 12) printf(" ");
	printf("%d:", arrival_h);
	if (arrival_m < 10) printf("0");
	printf("%d", arrival_m);

	if (arrival_pm) 
	{
		printf(" p.m.");
	} else {
		printf(" a.m.");
	}

	printf("\n");

	return 0;
}
