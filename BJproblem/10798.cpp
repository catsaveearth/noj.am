#include <stdio.h>

int main(void) {
	char a[7][7] = { NULL };

	for (int i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}

	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			if (a[j][i] == NULL)continue;
			printf("%c", a[j][i]);
		}
	}
}