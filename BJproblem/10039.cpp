#include <stdio.h>

int score[6] = { 0, };

int main(void) {
	int total = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		if (score[i] < 40)
			score[i] = 40;
		total += score[i];
	}
	printf("%d", total / 5);


}