#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	N = N % 7;

	if (N  == 0||N==2)printf("CY");
	else printf("SK");

}