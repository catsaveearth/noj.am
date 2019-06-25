#include <stdio.h>

int main(void) {

	for (int i = 1; i <= 100; i++) {
		int i3 = i;
		int i5 = i;
		int coin = 0;
		while (i3 > 0) {
			i3 -= 3;
			if (i3 == 0) { printf("Fizz"); coin++; }
		}
		while (i5 > 0) {
			i5 -= 5;
			if (i5 == 0) { printf("Buzz"); coin++; }
		}
		if (!coin) printf("%d", i);
		printf("\n");
	}

} 

