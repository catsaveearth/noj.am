#include <stdio.h>

int dp[1000001] = { 1, 2, };

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 2; i < n; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
	}
	printf("%d\n", dp[n - 1]);

}