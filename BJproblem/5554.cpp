#include <stdio.h>

int main(void) {
	int second = 0;
	int n = 4, k;
	while (n--) {
		scanf("%d", &k);
		second += k;
	}
	printf("%d\n", second / 60);
	printf("%d", second % 60);
}