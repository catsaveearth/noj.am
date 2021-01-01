#include <stdio.h>

long long int f[10001] = { 0, 1 };

int main(void) {
	int n;
	scanf("%d", &n);
	
	for (int i = 2; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	printf("%ld", f[n]);

}