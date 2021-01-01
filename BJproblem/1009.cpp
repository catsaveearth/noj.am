#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);

		int result = 1;

		for (int i = 0; i < b; i++) {
			result *= a;
			while (result > 10) {
				result %= 10;
			}
		}
		if (result == 0)result = 10;
		printf("%d\n", result);
	}
}