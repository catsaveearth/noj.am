#include <stdio.h>
#include <string.h>

int check[51][51] = { 0, };
int field[51][51] = { 0, };
int m, n, k, x, y;

void DFS(int x, int y) {
	if (check[x][y] == 0)check[x][y] = 1;

	if (x<m && field[x+1][y] == 1 && check[x+1][y] == 0)DFS(x+1, y);
	if (x>0 && field[x-1][y] == 1 && check[x-1][y] == 0)DFS(x-1, y);
	if (y<n && field[x][y+1] == 1 && check[x][y+1] == 0)DFS(x, y+1);
	if (y>0 && field[x][y-1] == 1 && check[x][y-1] == 0)DFS(x, y-1);

}

int main(void) {
	int T;
	scanf("%d", &T);

	while (T--) {
		memset(field, 0, sizeof(field));
		memset(check, 0, sizeof(check));
		int cnt = 0;
		scanf("%d %d %d", &m, &n, &k);
		for (int i = 0; i < k; i++) {
			scanf("%d %d", &x, &y);
			field[x][y] = 1;
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (field[i][j] == 1 && check[i][j] == 0) { 
					cnt++;
					DFS(i, j); 
				}
			}
		}
		printf("%d\n", cnt);
	}

}