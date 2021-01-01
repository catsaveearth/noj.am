#include <stdio.h>
#include <string.h>

char put[2201][2201];

void star(int x, int y, int n) {
	if (n == 1) {
		put[y][x] = '*';
		return;
	}
	int div = n / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) continue;
			else star(y + (i*div), x + (j*div), div);
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	memset(put, ' ', sizeof(put));

	star(0, 0, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c", put[i][j]);
		}
		printf("\n");
	}
}