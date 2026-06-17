/* displays the closest flight time to another city 

   I'm sure there is a much better way to do this 
   I aimed to get the program working according to the exercise instructions
   which impose limitations (e.g. no loops)
   
   to get diff of times:
   subtract -> make positive if negative (*= -1) 
   compare sizes to user time
	
*/

#include <stdio.h>

int main(void)
{
	int time, h = 0, m = 0;

	int f1dh = 8, f1dm = 0, f1ah = 10, f1am = 16; // 480 - 616
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

	int flight1_diff = f1dh * 60 + f1dm - time;
	int flight2_diff = f2dh * 60 + f2dm - time;
	int flight3_diff = f3dh * 60 + f3dm - time;
	int flight4_diff = f4dh * 60 + f4dm - time;
	int flight5_diff = f5dh * 60 + f5dm - time;
	int flight6_diff = f6dh * 60 + f6dm - time;
	int flight7_diff = f7dh * 60 + f7dm - time;
	int flight8_diff = f8dh * 60 + f8dm - time;

	if (flight1_diff < 0) flight1_diff *= -1;
	if (flight2_diff < 0) flight2_diff *= -1;
	if (flight3_diff < 0) flight3_diff *= -1;
	if (flight4_diff < 0) flight4_diff *= -1;
	if (flight5_diff < 0) flight5_diff *= -1;
	if (flight6_diff < 0) flight6_diff *= -1;
	if (flight7_diff < 0) flight7_diff *= -1;
	if (flight8_diff < 0) flight8_diff *= -1;

	if (flight1_diff < flight2_diff) 
	{
		departure_h = f1dh;
		departure_m = f1dm;
		arrival_h = f1ah;
		arrival_m = f1am;
	} 

	if (flight2_diff < flight1_diff)
	{
		printf("flight2_diff: %d\n", flight2_diff);
		departure_h = f2dh;
		departure_m = f2dm;
		arrival_h = f2ah;
		arrival_m = f2am;
	}

	if (flight3_diff < flight2_diff) 
	{
		printf("flight3_diff: %d\n", flight3_diff);
		departure_h = f3dh;
		departure_m = f3dm;
		arrival_h = f3ah;
		arrival_m = f3am;
	}

	if (flight4_diff < flight3_diff) 
	{
		departure_h = f4dh;
		departure_m = f4dm;
		arrival_h = f4ah;
		arrival_m = f4am;
	}

	if (flight5_diff < flight4_diff) 
	{
		departure_h = f5dh;
		departure_m = f5dm;
		arrival_h = f5ah;
		arrival_m = f5am;
	} 

	if (flight6_diff < flight5_diff) 
	{
		departure_h = f6dh;
		departure_m = f6dm;
		arrival_h = f6ah;
		arrival_m = f6am;
	}

	if (flight7_diff < flight6_diff) 
	{
		departure_h = f7dh;
		departure_m = f7dm;
		arrival_h = f7ah;
		arrival_m = f7am;
	}
	
	if (flight8_diff < flight7_diff) 
	{
		departure_h = f8dh;
		departure_m = f8dm;
		arrival_h = f8ah;
		arrival_m = f8am;
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
