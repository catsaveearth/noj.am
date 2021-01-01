#include <stdio.h>

int main(void) {
	int n, m;
	char floor[101][101] = { NULL };
	scanf("%d %d", &n, &m);
	getchar();
	for (int i = 0; i < n; i++) {
		scanf("%s", &floor[i]);
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (floor[i][j] == '-') {
				if (j + 1 == m) count++;
				else if (floor[i][j + 1] == '|') count++;
			}
		}
	}

	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (floor[i][j] == '|') {
				if (i + 1 == n) count++;
				else if (floor[i + 1][j] == '-') count++;
				}
			}
		}
	printf("%d", count);
}