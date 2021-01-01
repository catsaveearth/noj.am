#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int student[20001] = { 0, };
	int count = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &student[i]);
		if (i != student[i])count++;
	}
	printf("%d", count);
}