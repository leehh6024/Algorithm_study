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

	// 적은 시간이 걸리는 순서대로 오름차순한 버블정렬
	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (P[j] > P[j + 1]) {
				tmp = P[j];
				P[j] = P[j + 1];
				P[j + 1] = tmp;
			}
		}
	}

	//배열의 합 구하면 최소시간임.
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			sum += P[j];
		}
	}

	printf("%d", sum);

	return 0;
}