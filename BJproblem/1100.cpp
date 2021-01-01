#include <stdio.h>

int main(void) {
	char chessboard[8][8] = { NULL };
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%c", &chessboard[i][j]);
		}
		getchar();
	}
	int check = 0;
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 8; j += 2) {
				if (chessboard[i][j] == 'F')check++;
			}
		}
		else {
			for (int j = 1; j < 8; j += 2) {
				if (chessboard[i][j] == 'F')check++;
			}
		}
	}
	printf("%d", check);
}