#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", &N);
	int numcheck = 0;
	int number = 666;
	while (1) {
		int num[100] = { 0, };
		int i = 0;
		int numcpy = number;
		while (numcpy > 0) {
			num[i] = numcpy % 10;
			numcpy /= 10;
			i++;
		}
		int stopp = 0;
		for (int k = 0; k < i-2; k++) {
			if (num[k] == 6 && num[k + 1] == 6 && num[k + 2] == 6) {
				numcheck++;
				stopp++;
				if (stopp != 0)break;
			}
		}
		if (numcheck == N) {
			printf("%d", number);
			break;
		}
		number++;
	}
}