#include <stdio.h>
#include <stdlib.h>

int paper[129][129] = { 0, };
int  w = 0, b = 0;
void whiteBlue(int n, int x, int y);

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &paper[i][j]);
		}
	}
	whiteBlue(n, 0, 0);
	printf("%d\n%d", w, b);
}

void whiteBlue(int n, int x, int y) {
	int check = paper[x][y]; //면 색상 체크
	int no = 0;
	for (int i = x; i < x+ n; i++) {
		for (int j = y; j < y+ n; j++) {
			if (check != paper[i][j]) {
				no = 1;
				break;
			}
		}
		if (no == 1)break;
	}

	if (no == 0) { //면의 색상이 다 똑같을 때
		if (paper[x][y] == 1) b++;
		else w++;
		return;
	}
	else {
		whiteBlue(n / 2, x, y);
		whiteBlue(n / 2, x + n/2, y);
		whiteBlue(n / 2, x, y + n/2);
		whiteBlue(n / 2, x + n/2, y + n/2);
	}
}