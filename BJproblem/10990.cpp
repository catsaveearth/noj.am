#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	scanf("%d", &n);
	int l = n, ck = 1;

	for (int i = 0; i < n; i++) {

		for (int k = 0; k < l; k++) {
			if (l - ck == k)
				printf("*");
			else if (k == l - 1)
				printf("*");
			else
				printf(" ");
		}
	ck += 2;
	l++;
	printf("\n");
	}
}