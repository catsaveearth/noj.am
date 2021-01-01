#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b) {
		if (b == c) {
			printf("%d", 10000 + a * 1000);
		}
		else {
			printf("%d", 1000 + a * 100);
		}
	}
	else if (b == c) {
		printf("%d", 1000 + b * 100);
	}
	else if (a == c) {
		printf("%d", 1000 + c * 100);
	}
	else {
		printf("%d", max(a, max(b, c)) * 100);
	}
}