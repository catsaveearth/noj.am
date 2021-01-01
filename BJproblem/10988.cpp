#include <stdio.h>
#include <string.h>

int main(void) {
	char check[101] = { NULL };
	scanf("%s", check);
	int len = strlen(check);
	int i = 0, result = 1;
	while (i < len / 2) {
		if (check[i] != check[len - 1 - i]) {
			result = 0;
			break;
		}
		i++;
	}
	printf("%d", result);
}