#include <stdio.h>

int main(void) {
	int n, sum = 0;
	int num[101] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%1d", &num[i]);
		sum += num[i];

	}
	printf("%d", sum);
}