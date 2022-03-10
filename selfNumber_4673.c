//#include <stdio.h>
//
//int selfNumber(int n) {
//	int sum = n;
//
//	while (1) {
//		if (n == 0)
//			break;
//		sum += n % 10;
//		n = n / 10;
//	}
//
//	return sum;
//}
//
//int main() {
//	int i = 1, tmp;
//	int arr[10001] = { 0 };
//
//	for (i = 1; i < 10001; i++) {
//		tmp = selfNumber(i);
//		if (tmp < 10001)
//			arr[tmp] = 1;
//	}
//
//	for (i = 1; i < 10001; i++) {
//		if (arr[i] != 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}