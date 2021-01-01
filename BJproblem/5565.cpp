#include <stdio.h>

int main(void) {
	int result = 0;
	scanf("%d", &result);
	int a;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a);
		result -= a;
	}
	printf("%d", result);
}