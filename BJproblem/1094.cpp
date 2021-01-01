#include <stdio.h>

int main(void) {

	int num = 64;
	int x;
	scanf("%d", &x);
	int count = 0;

	if (x % 2 == 1) {
		count++;
		x--;
		//1, 2, 4, 8, 16, 32°¡ ³²À½
		while (x != 0) {
			num /= 2;
			if (x >= num) {
				count++;
				x -= num;
			}
		}
	}
	else if (x == 64) count = 1;
	else {
		while (x != 0) {
			num /= 2;
			if (x >= num) {
				count++;
				x -= num;
			}
		}
	}
	printf("%d", count);
}
