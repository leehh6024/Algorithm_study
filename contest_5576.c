//#include <stdio.h>
//
//int main() {
//	
//	int college[20] = { 0 };
//	int tmp;
//	int sumW = 0;
//	int sumK = 0;
//
//	for (int i = 1; i < 21; i++) {
//		scanf_s("%d", &college[i]);
//	}
//
//	for (int i = 10; i > 0; i--) {
//		for (int j = i-1; j>0 ; j--) {
//			if (college[j] < college[j + 1]) {
//				tmp = college[j + 1];
//				college[j + 1] = college[j];
//				college[j] = tmp;
//			}
//		}
//	}
//
//	for (int i = 20; i > 10; i--) {
//		for (int j = i - 1; j > 10; j--) {
//			if (college[j] < college[j + 1]) {
//				tmp = college[j + 1];
//				college[j + 1] = college[j];
//				college[j] = tmp;
//			}
//		}
//	}
//
//	for (int i = 1; i < 4; i++) {
//		sumW += college[i];
//	}
//
//	for (int i = 11; i < 14; i++) {
//		sumK += college[i];
//	}
//
//	printf("%d %d", sumW, sumK);
//
//	return 0;
//}