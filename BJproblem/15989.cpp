#include <stdio.h>
int arr[10001][4];

int plus(int n, int m) {
	int count = 0;

	if (arr[n][m] > 0)return arr[n][m];
	if (n == 0)return arr[0][m] = 1;
	if (n < m) m = n;


	for (int i = 1; i <= m; i++) {
		count += plus(n - i, i);
	}
	return arr[n][m] = count;
}

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", plus(n, 3));
	}
}