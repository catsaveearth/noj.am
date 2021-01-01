#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	N = N % 7;

	if (N == 1 || N == 3)printf("CY");
	else printf("SK");

}