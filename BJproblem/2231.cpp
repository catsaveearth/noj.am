#include <stdio.h>

int main(void) {
	int n;
	int nlist[1000] = { 0, };
	int count = -1;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		int hoxy = i;
		int cpy = i;
		while (cpy > 0) {
			hoxy += cpy % 10;
			cpy /= 10;
		}
		if (hoxy == n) {
			count++;
			nlist[count] = i;
		}
	}
	if (count == -1)printf("0");
	else printf("%d", nlist[count]);
}