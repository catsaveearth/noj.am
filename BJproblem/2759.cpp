#include <stdio.h>

void flip(int, int *);

int check = 0;
int N;

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {

		int cake[30] = { 0, };
		int maxi = 0;
		int prt[50] = { 0, };
		int ll = 0;

		scanf("%d", &N);

		for (int i = 0; i < N; i++) {
			scanf("%d", &cake[i]);
		}


		for (int i = 0; i < N; i++) {
			maxi = 0;
			for (int k = 0; k < N - i; k++) {
				if (cake[maxi] < cake[k]) {
					maxi = k;
				}
			}

			if (maxi == N - 1 - i)continue;
			if (maxi == 0) {
				flip(N - 1 - i, cake);
				prt[ll] = N - i;
				ll++;
			}
			else {
				flip(maxi, cake);
				prt[ll] = maxi + 1;
				ll++;
				flip(N - 1 - i, cake);
				prt[ll] = N - i;
				ll++;
			}
		}

		printf("%d ", ll);
		for (int k = 0; k < ll; k++) {
			printf("%d ", prt[k]);
		}
		printf("\n");
	}
}

void flip(int n, int * cake)
{
	for (int i = 0; i <= n / 2; i++) { //µÚÁý±â
		int temp = cake[i];
		cake[i] = cake[n - i];
		cake[n - i] = temp;
	}

}
