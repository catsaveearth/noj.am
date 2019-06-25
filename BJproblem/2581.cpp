#include <stdio.h>

int main(void) {
	int m, n;
	scanf("%d %d", &m, &n);
	int arr[10000] = { 0 };
	int num = 0;

	for (int i = m; i <= n; i++) {
		int d = 1;
		if (i == 1) continue;
		for (int k = 2; k < i; k++) {
			if (i%k == 0) {
				d = 0;
				break;
			}
		}
		if (d) { arr[num] = i; num++; }
	}

	if (num == 0)printf("-1");
	else {
		int total = 0;
		for (int i = 0; i < num; i++) {
			total += arr[i];
		}
		printf("%d\n", total);
		printf("%d", arr[0]);
	}
}