#include <stdio.h>

int main(void) {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)break;
		if (a == b) {
			if (a == c) {
				printf("Equilateral\n");
				continue;
			}
		}
		int max = 0;
		max = a > b ? (a > c ? a : c) : (b > c ? b : c);
		if (max + max >= a + b + c) {
			printf("Invalid\n");
		}
		else if (a == b || b == c || a == c) {
			printf("Isosceles\n");
		}
		else printf("Scalene\n");
	}
}