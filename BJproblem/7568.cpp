#include <stdio.h>

int main(void) {
	int n;
	int info[51][2] = { 0, };
	int score[51] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &info[i][0], &info[i][1]);
	}

	for (int i = 0; i < n; i++) {
		int check = 0;
		for (int j = 0; j < n; j++) {
			if (info[i][0] < info[j][0] && info[i][1] < info[j][1]) {
				check++;
			}
		}
		score[i] = check + 1;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", score[i]);
	}

}