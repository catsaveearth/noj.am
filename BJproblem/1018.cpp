#include <stdio.h>

int main(void) {
	char Wchessboard[8][8] = { {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} , {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} , {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} };
	char Bchessboard[8][8] = { {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} , {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} , {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'} };

	char mnboard[51][51] = { NULL };

	int n, m;
	int small = 25000;
	scanf("%d %d", &n, &m);

	
	for (int i = 0; i < n; i++) {
		scanf("%s", mnboard[i]);
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int Wsmallcheck = 0;
			int Bsmallcheck = 0;

			for (int r = i; r < i + 8; r++) {
				for (int c = j; c < j + 8; c++) {
					if (mnboard[r][c] != Wchessboard[r - i][c - j])Wsmallcheck++;
					if (mnboard[r][c] != Bchessboard[r - i][c - j]) Bsmallcheck++;
				}
			}

			int result = (Wsmallcheck > Bsmallcheck) ? Bsmallcheck : Wsmallcheck;
			small = (result > small) ? small : result;
		}
	}
	printf("%d", small);
}