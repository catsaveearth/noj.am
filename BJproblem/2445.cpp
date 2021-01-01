#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n;i++) {

		for (int k = 0; k < i; k++) {
			printf("*");
		}
		for (int k = 0; k < n*2-i*2; k++) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = n-1; i > 0; i--) {
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		for (int k = 0; k < n * 2 - i * 2; k++) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
}
