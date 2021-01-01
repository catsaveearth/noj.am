#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (b > c || b==c) {
		printf("-1");
	}
	else {
		int n = a / (c - b)+1;
		printf("%d", n);
	}
}