#include <stdio.h>

int main(void) {
	int n[30] = { 0, };
	for (int i = 0; i < 28; i++) {
		int a;
		scanf("%d", &a);
		n[a - 1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		if (n[i] == 0)printf("%d\n", i + 1);
	}
}