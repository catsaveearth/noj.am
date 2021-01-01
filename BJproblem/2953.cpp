#include <stdio.h>

int main(void) {
	int score[5][4] = { 0, };
	int winner, winscore = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
		int other_score = 0;
		for (int j = 0; j < 4; j++) {
			other_score += score[i][j];
		}
		if (winscore < other_score) {
			winscore = other_score;
			winner = i + 1;
		}
	}
	printf("%d %d", winner, winscore);
}