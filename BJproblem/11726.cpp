#include <stdio.h>
int memo[1002] = { 1, 1 };
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
		memo[i] %= 10007;
	}
	printf("%d\n", memo[n] % 10007);
}
