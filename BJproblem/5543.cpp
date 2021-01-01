#include <stdio.h>
int main(void) {
	int a;
	int ham = 3000;
	int babe = 3000;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a);
		if (a < ham)ham = a;
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &a);
		if (a < babe)babe = a;
	}
	printf("%d", ham + babe - 50);
}