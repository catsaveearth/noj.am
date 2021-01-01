#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);


	n = n % 5;
	if (n == 0 || n == 2)printf("CY");
	else printf("SK");
}