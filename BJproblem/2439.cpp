#include <stdio.h>

int main(void) {
	int n, k=1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - k; j++)
			printf(" ");
		for (int j = 0; j < k; j++)
			printf("*");
		printf("\n");
		k++;
	}

}