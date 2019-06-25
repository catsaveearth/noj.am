#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%.100f%", (double)a / b);

}