#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a*(b - (b / 10)*10));
	int b2 = b / 10 - (b / 100) * 10;
	printf("%d\n", a*b2);
	printf("%d\n", a*(b / 100));
	printf("%d", a*b);
}