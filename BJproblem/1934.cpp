#include <stdio.h>

int gcd(int a, int b) {
	int res = 0;

	if (!(a % b))
		return b;

	else {
		res = a % b;
		a = b;
		b = res;
		return gcd(a, b);
	}
}

int data[2000];

int main() {

	int t, k, L;
	scanf("%d", &t);

	for (int i = 0; i < t*2; i++) {
		scanf("%d", &k);
		data[i] = k;
	}

	for (int i = 0; i < t*2; i = i+2) {

		k = gcd(data[i], data[i + 1]);
		printf("%d\n", (data[i] * data[i + 1]) / k);
	}
	return 0;
}