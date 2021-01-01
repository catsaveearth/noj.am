#include <stdio.h>
int main(void) {
	int l, result;
	scanf("%d", &l);
	if (l % 5 != 0) {
		result = l / 5 + 1;
	}
	else result = l / 5;
	printf("%d", result);
}