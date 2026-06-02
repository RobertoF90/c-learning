#include <stdio.h>

int main(void)
{
	int gs1, group, publisher, item, check;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &check);

	printf("Gs1 prefix: %d\nGroup Identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1, group, publisher, item, check);

	return 0;
}
