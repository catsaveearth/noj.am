#include <stdio.h>

int factorial(int n) {
	int rst = 1;
	for (int i = 1; i <= n; i++) {
		rst *= i;
	}
	return rst;
}

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d", factorial(n) / (factorial(k)*factorial(n - k)));
}