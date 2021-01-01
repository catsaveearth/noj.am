#include <stdio.h>

int main(void) {
	int k = 3;
	while (k--) {
		int n, result = 0;
		for (int i = 0; i < 4; i++) {
			scanf("%d", &n);
			result += n;
		}
		switch (result) {
		case 0:
			printf("D");
			break;
		case 1:
			printf("C");
			break;
		case 2:
			printf("B");
			break;
		case 3:
			printf("A");
			break;
		case 4:
			printf("E");
			break;
		}
		printf("\n");
	}
}