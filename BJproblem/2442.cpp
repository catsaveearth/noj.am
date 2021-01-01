#include <stdio.h>

int main(void) {
	int zero = 0;
	int n;
	scanf("%d", &n);
	int num = 1;
	for (int i = n; i > 0; i--) {
		if(zero!=0)		printf("\n");
		zero = 1;
		for (int k = 0; k < i-1 ; k++) {
			printf(" ");
		}
		for (int j = 0; j <num; j++) {
			printf("*");
		}
		num = num + 2;

	}

}