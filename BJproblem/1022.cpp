#include <stdio.h>

int main(void) {
	int r1, c1, r2, c2;
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

	int b[100][100] = { 0, };

	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			printf("%d", b[i][j])
		}
	}
}