#include <stdio.h>

int video[64][64] = { 0, };
void zip(int n, int x, int y);

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &video[i][j]);
		}
	}

	zip(n, 0, 0);

}

void zip(int n, int x, int y) {

	int ck = video[x][y];
	int no = 0;
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (ck != video[i][j]) {
				no = 1;
				break;
			}
		}
		if (no == 1)break;
	}

	if (no == 0) {
		printf("%d", ck);
	}
	else {
		printf("(");
		zip(n / 2, x, y);
		zip(n / 2, x, y + (n / 2));
		zip(n / 2, x+ (n / 2), y);
		zip(n / 2, x + (n / 2), y + (n / 2));
		printf(")");
	}

}