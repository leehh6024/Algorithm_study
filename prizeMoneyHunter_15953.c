#include <stdio.h>

int prizeA(int a);
int prizeB(int b);

int main()
{
	int a, b;
	int T;
	int prize_a, prize_b = 0;

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		prize_a = prizeA(a);
		prize_b = prizeB(b);
		printf("%d\n", prize_a + prize_b);
	}

	return 0;

}

int prizeA(int a) {
	int prize = 0;
	if (a == 1) // 1
		prize = 5000000;
	else if (a > 1 && a < 4) // 2,3
		prize = 3000000;
	else if (a > 3 && a < 7) // 4,5,6
		prize = 2000000;
	else if (a > 6 && a < 11) // 7,8,9,10
		prize = 500000;
	else if (a > 10 && a < 16) // 11, 12, 13 ,14 ,15 
		prize = 300000;
	else if (a > 15 && a < 22) // 16, 17 ,18, 19, 20, 21
		prize = 100000;
	else
		prize = 0;
	return prize;
} // 등차수열 함수 쓰면 될거같은디

int prizeB(int b) {
	int prize = 0;
	if (b == 1) // 1
		prize = 5120000;
	else if (b > 1 && b < 4) // 2,3
		prize = 2560000;
	else if (b > 3 && b < 8) // 4,5,6,7
		prize = 1280000;
	else if (b > 7 && b < 16) // 8,9,10,11,12,13,14,15
		prize = 640000;
	else if (b > 15 && b < 32) // 16~31  
		prize = 320000;
	else
		prize = 0;
	return prize;

} // 등비수열 ? 함수 