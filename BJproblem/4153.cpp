#include <stdio.h>

int main(void) {

	int a, b, c;

	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)break;

		int check = 0; //wrong
		if (a > b) {
			if (a > c) { if (a*a == (c*c) + (b*b))check = 1; }
			else { if (c*c == (a*a) + (b*b))check = 1; }
		}
		else {
			if (b > c) { if (b*b == (c*c) + (a*a))check = 1; }
			else { if (c*c == (a*a) + (b*b))check = 1; }
		}
		if (check == 1)printf("right\n");
		else printf("wrong\n");
	}
}