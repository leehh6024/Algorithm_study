#include <stdio.h>

int main()
{
	int money;
	int person;

	scanf_s("%d %d", &money, &person);
	printf("%d\n", money / person);
	printf("%d\n", money % person);

	return 0;
}