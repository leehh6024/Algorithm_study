#include <stdio.h>

int main()
{
	int n=0;
	int num[10] = { 0};
	int tmp = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (num[j] > num[j + 1]) {
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}