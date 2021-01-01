#include <stdio.h>

int main(void) {
	long long int n;
	scanf("%lld", &n);
	int ck = 1, k = 1;
	while (n > 1) {
		n -= (k*6);
		ck++;
		k++;
	}
	printf("%d", ck);
}