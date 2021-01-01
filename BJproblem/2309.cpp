#include <stdio.h>

int main(void) {
	int nank[9] = { 0, };
	int allsum = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &nank[i]);
		allsum += nank[i];
	}

	for (int i = 0; i < 9; i++) {
		int min = i;
		for (int k = i; k < 9; k++) {
			if (nank[min] > nank[k])min = k;
		}
		int temp = nank[i];
		nank[i] = nank[min];
		nank[min] = temp;
	}


	int nonank[2] = { 0, };
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			int nosum = nank[i] + nank[j];
			if (allsum - nosum == 100) {
				nonank[0] = i;
				nonank[1] = j;
			}
		}
	}
	int nono = 0;
	for (int i = 0; i < 9; i++) {
		if (i == nonank[nono]) {
			nono++;
			continue;
		}
		printf("%d\n", nank[i]);
	}
}