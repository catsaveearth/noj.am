#include <stdio.h>
#include <string.h>

int main() {
	char str[101];
	int k = 1;
	gets_s(str);
	for (int i = 0; i < 101; i++) {
		if (str[i] == NULL)
			break;

		printf("%c", str[i]);

		if (k % 10 == 0)
			printf("\n");
		k++;
	}
}