#include <stdio.h>

int main(void) {
	int a[2] = { 0, };
	int b[2] = { 0, };
	int c[2] = { 0, };
	int n, k, i=0;

	scanf("%d", &n);

	if (n < 10)
		a[1] = n;
	else {
		a[0] = n / 10;
		a[1] = n - a[0] * 10;
	}

	b[0] = a[0];
	b[1] = a[1];
	k = b[0] + b[1];

	while(1) {
		i++;

		if (k < 10)
			c[1] = k;
		else {
			c[0] = k / 10;
			c[1] = k - c[0] * 10;
		}


		if (a[0] == b[1] && a[1] == c[1]) {
			printf("%d\n", i);
			break;
		}

		k = b[1] + c[1];
		b[0] = c[0];
		b[1] = c[1];
	}


}