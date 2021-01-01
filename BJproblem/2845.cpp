#include <stdio.h>

int main(void) {
	int l, p;
	scanf("%d %d", &l, &p);

	int people = l * p;
	int paper[5] = { 0, };

	for (int i = 0; i < 5; i++) {
		scanf("%d", &paper[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", paper[i]-people);
	}
}