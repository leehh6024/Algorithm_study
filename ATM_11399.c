#include <stdio.h>

int main() {

	int N;
	int P[1001] = { 0 };
	int tmp=0;
	int sum = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &P[i]);
	}

	// ���� �ð��� �ɸ��� ������� ���������� ��������
	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (P[j] > P[j + 1]) {
				tmp = P[j];
				P[j] = P[j + 1];
				P[j + 1] = tmp;
			}
		}
	}

	//�迭�� �� ���ϸ� �ּҽð���.
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			sum += P[j];
		}
	}

	printf("%d", sum);

	return 0;
}