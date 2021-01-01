#include <stdio.h>

int num[501][501] = { 0, };

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int check[2] = { 0, };
		for (int j = 0; j < i + 1; j++) {
			scanf("%d", &num[i][j]);
			int ck = 0;
			if (i - 1 >= 0 && j - 1 >= 0) {
				check[ck] = num[i - 1][j - 1] + num[i][j];
				ck++;
			}
			if (i - 1 >= 0 && j >= 0) {
				check[ck] = num[i - 1][j] + num[i][j];
				ck++;
			}

			if (ck == 2) {
				if (check[0] > check[1]) num[i][j] = check[0];
				else num[i][j] = check[1];
			}
			else if (ck == 1) num[i][j] = check[0];
		}
	}
	int max = -1;
	for (int i = 0; i < n; i++) {
		if (max < num[n-1][i]) max = num[n-1][i];
	}
	printf("%d", max);
}