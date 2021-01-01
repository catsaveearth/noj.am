#include <stdio.h>
#include <queue>

using namespace std;

int BFS(int x, int y, int n, int m);

char miro[101][101] = { NULL };
int checklist[101][101] = { 0, };

struct VERTEX {
	int x;
	int y;
	int time;
};

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	getchar();
	
	int low;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &miro[i][j]);
		}
		getchar();
	}

	int result = BFS(1, 1, n, m);
	printf("%d", result);
}

int BFS(int x, int y, int n, int m) {
	queue<VERTEX> que;
	VERTEX a;
	que.push({ 0, 0, 1 });
	checklist[que.front().x][que.front().y] = 1;

	do {
		a = que.front();
		if (a.x == n - 1 && a.y == m - 1)return a.time;
		que.pop();

		if (a.x > 0 && checklist[a.x - 1][a.y] == 0&& miro[a.x - 1][a.y]=='1') {
			que.push({ a.x - 1, a.y, a.time+1 });
			checklist[a.x - 1][a.y] = 1;
		}
		if (a.x < n-1 && checklist[a.x + 1][a.y] == 0&&miro[a.x + 1][a.y]=='1') {
			que.push({ a.x + 1, a.y, a.time + 1 });
			checklist[a.x + 1][a.y] = 1;
		}
		if (a.y > 0 && checklist[a.x][a.y-1] == 0&&miro[a.x][a.y - 1]=='1') {
			que.push({ a.x, a.y-1, a.time + 1 });
			checklist[a.x][a.y-1] = 1;
		}
		if (a.y < m-1 && checklist[a.x][a.y+1] == 0&&miro[a.x][a.y + 1]=='1') {
			que.push({ a.x, a.y+1, a.time + 1 });
			checklist[a.x][a.y+1] = 1;
		}
	} while (!que.empty());
	return a.time;
}