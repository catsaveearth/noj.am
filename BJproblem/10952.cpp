#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	
	do {
		printf("%d\n", a + b);
		scanf("%d %d", &a, &b);
	} while (!(a == b && a == 0));
}