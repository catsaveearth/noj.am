#include <stdio.h>

int fi(int n) {
	if (n == 0)return 0;
	if (n < 2)return n;
	return fi(n - 1) + fi(n - 2);
}

int main(void) {
	int n = 0;
	scanf("%d", &n);
	printf("%d", fi(n));
}