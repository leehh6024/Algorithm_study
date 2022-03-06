//#include <stdio.h>
//
//int main()
//{
//	int tmp;
//	int num[3] = { 0 };
//	
//	for (int i = 0; i < 3; i++) {
//		scanf_s("%d", &num[i]);
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 2-i; j++) {
//			if (num[j] > num[j + 1]) {
//				tmp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}