#include <stdio.h>

int step[301] = { 0, };
int dp[301] = { 0, };
int main(void) {
	int n, max=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &step[i]);
	}

	dp[0] = step[0];
	int ck = 0;
	if (n >= 1) dp[1] = step[0] + step[1];
	if (n >= 2) {
		int a= step[0] + step[2];
		int b = step[1] + step[2];
		if (a > b)dp[2] = a;
		else {
			dp[2] = b;
			ck = 1;
		}
	}

	for (int i = 3; i < n; i++) {
		int a = dp[i - 3] + step[i - 1] + step[i];
		int b = dp[i - 2] + step[i];
		if (a > b)dp[i] = a;
		else dp[i] = b;
	}
	printf("%d", dp[n-1]);
}