#include <stdio.h>
void fibo(int i, int*arr);

int main(void) {
	int fiboarr[46] = { 0, 1, };
	int n;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		fibo(i, fiboarr);
	}

	printf("%d", fiboarr[n]);
}

void fibo(int i, int*arr) {
	arr[i] = arr[i - 2] + arr[i - 1];
}