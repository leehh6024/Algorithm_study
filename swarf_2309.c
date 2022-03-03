//#include <stdio.h>
//
//int main(void)
//{
//	int swarf[9] = { 0 };
//	int sum = 0;
//	int sel = 0;
//	int i, j, k = 0;
//
//	for (i = 0; i < 9; i++) {
//		scanf_s("%d", &swarf[i]);
//		sum += swarf[i];
//	}
//
//	for (i = 8; i > 0; i--) {
//		int tmp = 0;
//		for (j = 0; j < i; j++) {
//			if (swarf[j] > swarf[j + 1]) {
//				tmp = swarf[j];
//				swarf[j] = swarf[j + 1];
//				swarf[j + 1] = tmp;
//			}
//		}
//	}
//
//	while (i < 8)
//	{
//		j = i + 1;
//		while (j < 9)
//		{
//			sel = sum;
//			sel -= swarf[i] + swarf[j];
//			if (sel == 100)
//				break;
//			else
//				j++;
//		}
//		if (sel == 100)
//			break;
//		i++;
//	}
//	
//	for (k = 0; k < 9; k++) {
//		if (k != i && k != j)
//		printf("%d\n", swarf[k]);
//	}
//}