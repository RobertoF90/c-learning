#include <stdio.h>

int main(void)
{
	int h, m, pm;
	
	printf("Enter a 24-hour time (hh:mm) : ");
	scanf("%d:%d", &h, &m);

	if (h > 12) {
		h -= 12;
		pm = 1;
	}

	printf("Equivalent 12-hour time: ");

	if (h < 10) printf("0");
	printf("%d:", h);
	
	if (m < 10) printf("0");
	printf("%d", m);

	if (pm == 1) {
		printf(" PM\n");
	} else {
		printf(" AM\n");
	}

	return 0;
}
