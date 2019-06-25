#include <stdio.h>

int arr[15][14];

int main(void) {

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 14; j++) {
			if (i == 0) arr[0][j] = j + 1;
			else if (j == 0) arr[i][0] = 1;
			else { arr[i][j] = arr[i - 1][j] + arr[i][j - 1]; }
		}
		//아래층부터 계산을 해서 넣어주기 때문에 괜춘
	}

	int test;
	scanf("%d", &test);
	while (test--) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", arr[a][b - 1]);
	}
}