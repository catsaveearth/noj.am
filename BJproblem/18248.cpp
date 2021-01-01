#include <stdio.h>

int n, m;
int a[1001][101] = { 0, };

int main(void) {
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j <n; j++) {
			int check1 = 0, check2 = -1;
			for (int k = 0; k < m; k++) {
				if (a[i][k] == 1 && a[j][k] == 0)check1 = 1;
				if (a[i][k] == 0 && a[j][k] == 1)check2 = 1;
				if (check1 == check2) {
					printf("NO\n");
					return 0;
				}
			}
		}
		printf("YES\n");
		return 0;
	}
}