#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int d;
	scanf("%d", &d);
	c += d;
	
	while (a >= 24 || b >= 60 || c >= 60) {
		if (a >= 24) {
			a -= 24;
		}
		if (b >= 60) {
			b -= 60;
			a++;
		}
		if (c >= 60) {
			c -= 60;
			b++;
		}
	}
	printf("%d %d %d", a, b, c);
}