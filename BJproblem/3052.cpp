#include <stdio.h>

int main(void) {
	int num[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		num[i] %= 42;
	}
	int check[42] = { 0 };

	for (int i = 0; i < 10; i++) {
		check[num[i]]++;
	}
	int count = 0;
	for (int k = 0; k < 42; k++) {
		if (check[k] != 0)count++;
	}
	printf("%d", count);

}