#include <stdio.h>

int main(void) {
	char answer[8];
	gets_s(answer);

	int i = 6;
	while (i > 3) {
		if (answer[i] > answer[i - 4]) {
			printf("%c%c%c", answer[6], answer[5], answer[4]);
			break;
		}
		else if (answer[i] < answer[i - 4]) {
			printf("%c%c%c", answer[2], answer[1], answer[0]);
			break;
		}
		i--;
	}

}