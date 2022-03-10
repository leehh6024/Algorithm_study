//#include <stdio.h>
//
//long long int fibonacci(int n);
//
//int main() {
//	int user;
//	long long int answer;
//	scanf_s("%d", &user);
//	printf("%lld", fibonacci(user));
//}
//
//long long int fibonacci(int n) {
//	long long int a[91];
//	int i;
//	a[0] = 0;
//	a[1] = 1;
//	for (i = 2; i <= n; i++) {
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	return a[n];
//}