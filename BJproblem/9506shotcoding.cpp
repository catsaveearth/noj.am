#include <stdio.h>
int main(void) {
	int n = 0;
	while (1) {
		scanf("%d", &n);
		if (n == -1)break;
		if (n == 6 || n == 28 || n == 496 || n == 8128) {
			int divisor[100] = { 0, };
			int k = 0, sum = 0;
			for (int i = 1; i < n; i++) if (n%i == 0)divisor[k++] = i;
			printf("%d =", n);
			for (int i = 0; i < k; i++) {
				if (i != 0)printf(" +");
				printf(" %d", divisor[i]);}
			printf("\n");}
		else printf("%d is NOT perfect.\n", n);}}