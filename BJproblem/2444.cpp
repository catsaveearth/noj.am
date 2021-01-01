#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int k = 0; k <n-1-i; k++)printf(" ");
		for (int j = 0; j <i+1; j++)printf("*");
		for(int l=0;l<i;l++)printf("*");
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < i+1; k++)printf(" ");
		for (int j = 0; j < n-1-i; j++)printf("*");
		for (int l = 0; l < n-2-i; l++)printf("*");
		printf("\n");
	}

}