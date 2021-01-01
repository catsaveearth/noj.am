#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int snail[1000][1000] = { 0, };
	int a = 0, b = 0;
	int check = 0;
	int aend = n-1, bend = n - 1, aend2 = 0, bend2 = 1;
	int goalnum;
	scanf("%d", &goalnum);

	for (int i = n*n; i > 0; i--) {
		snail[a][b] = i;

		if (check % 4 == 0 && a == aend) {
			check++; aend--;
		}
		else if (check % 4 == 1 && b == bend) {
			check++; bend--;
		}
		else if (check % 4 == 2 && a == aend2) {
			check++; aend2++;
		}
		else if (check % 4 == 3 && b == bend2) {
			check++; bend2++;
		}

		switch (check % 4) {
		case 0:
			a++; break;
		case 1:
			b++; break;
		case 2:
			a--; break;
		case 3:
			b--; break;
		}

	}
	int gi, gk;

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			printf("%d ", snail[i][k]);
			if (goalnum == snail[i][k]) {
				gi = i;
				gk = k;
			}
		}
		printf("\n");
	}
	printf("%d %d", gi + 1, gk + 1);
}
