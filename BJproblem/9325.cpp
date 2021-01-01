#include <stdio.h>

int main(void) {
	int testcase , s, n, q, p;
	scanf("%d", &testcase);
	while (testcase--) {
		scanf("%d", &s);
		scanf("%d", &n);
		while (n--) {
			scanf("%d %d", &q, &p);
			s += q * p;
		}
		printf("%d\n", s);
	}

}