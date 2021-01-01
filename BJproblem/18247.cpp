#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m;
		scanf("%d %d", &n, &m);
		if (n < 12 || m < 4) {
			printf("-1\n");
		}
		else {
			printf("%d\n", m * 11 + 4);
		}
	}
}