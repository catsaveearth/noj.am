#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);

	while (t--) {
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);
		int a = n % h;
		if (a == 0)a = h;
		int b = ((n - a) / h)+1;
		if (b > 10) {
			printf("%d%d\n", a, b);
		}
		else {
			printf("%d%02d\n", a, b);
		}

	}

}