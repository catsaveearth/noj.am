#include <stdio.h>

int main(void) {
	int a, b;

	while (scanf("%d", &a) != EOF) {
		scanf("%d", &b);
		printf("%d\n", a + b);
	}
}