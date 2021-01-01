#include <stdio.h>

char apt[27][27] = { 0, };
int result[170] = { 0, };
int N, counter;

void dfs(int i, int j) {
	apt[i][j] = 0;
	counter++;

	if (apt[i][j + 1] == 1) dfs(i, j + 1);
	if (apt[i][j-1] == 1) dfs(i, j - 1);
	if (apt[i - 1][j] == 1) dfs(i - 1, j);
	if (apt[i + 1][j] == 1) dfs(i + 1, j);
	return;
}


int main(void) {

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &apt[i][j]);
		}
		getchar();
	}

	int r = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (apt[i][j] == 1) {
				counter = 0;
				dfs(i, j);
				result[r] = counter;
				r++;
			}
		}
	}

	printf("%d\n", r );

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r - i - 1; j++) {
			if (result[j] > result[j + 1]) {
				int temp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < r; i++) {
		printf("%d\n", result[i]);
	}
}
