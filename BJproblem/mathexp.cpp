#include <stdio.h>

int main() {
	int i = 1, j = 1;
	for (int a = 1; a <= 100; a++) {
		if (i == 3 && j == 5) {
			printf("FizzBuzz");
			i = 0; j = 0;
		}
		else if (i == 3) {
			printf("Fizz");
			i = 0;
		}
		else if (j == 5) {
			printf("Buzz");
			j = 0;
		}
		else printf("%d", a);
		i++; j++;
	}
}