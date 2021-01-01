#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int snail[50][50] = { 0, };
	int a = 0, b = 0;
	int check = 0;
	int aend = n - 1, bend = n - 1, aend2 = 1, bend2 = 0;

	for (int i = 1; i <= n*n; i++) {
		printf("check : %d\na: %d b: %d\n", check, a, b);
		snail[a][b] = i;

		if (check % 4 == 0 && b == bend) {
			check++; bend--;
			printf("bend %d\n", bend);
		}
		else if (check % 4 == 1 && a == aend) {
			check++; aend--;
		}
		else if (check % 4 == 2 && b==bend2 ) {
			check++; bend2++;
		}
		else if (check % 4 == 3 && a == aend2) {
			check++; aend2++;
		}

		switch (check % 4) {
		case 0:
			b++; break;
		case 1:
			a++; break;
		case 2:
			b--; break;
		case 3:
			a--; break;
		}

	}


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			printf("%3d ", snail[i][k]);
		}
		printf("\n");
	}

}	

//if ((a + 1 == n && b == 0) || (b + 1 == n && a == n - 1))check++;
//else if ((b + 1 == n && a == 0))check++;
//else if (check % 4 == 0 && snail[a + 1][b] != 0)check++;
//else if (check % 4 == 1 && snail[a][b + 1] != 0)check++;
//else if (check % 4 == 2 && snail[a - 1][b] != 0)check++;
//else if (check % 4 == 3 && snail[a][b - 1] != 0)check++;