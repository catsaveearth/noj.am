#include <stdio.h>
#include <string.h>

int main(void) {
	char A[300] = { 0, };
	char B[300] = { 0, };

	char ope, inputing;
	scanf("%s", A);
	getchar();
	scanf("%c", &ope);
	getchar();
	scanf("%s", B);
	getchar();

	int a = strlen(A);
	int b = strlen(B);
	a--;
	b--;

	if (ope == '+') {
		if (a == b) {
			printf("2");
			for (int k = 0; k < a; k++) {
				printf("0");
			}
		}
		else if (a > b) {
			printf("1");
			for (int k = 0; k < a; k++) {
				if (k == a-(b+1)) {
					printf("1");
					continue;
				}
				printf("0");
			}
		}
		else {
			printf("1");
			for (int k = 0; k < b; k++) {
				if (k == b - (a + 1)) {
					printf("1");
					continue;
				}
				printf("0");
			}
		}

	}
	else {
		printf("1");
		for (int k = 0; k < a + b; k++) {
			printf("0");
		}


	}
}