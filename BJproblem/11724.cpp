#include <stdio.h>

int arr[1002][1002] = { 0, };
int checklist[1001] = { 0, };
void DFS(int n, int v);
int main(void) {
	int N, M, count = 0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	for (int i = 1; i <= N; i++) {
		if (checklist[i] == 0) {
			DFS(N, i);
			count++;
		}
	}
	printf("%d", count);
}

void DFS(int n, int v) {
	if (checklist[v] != 1) {
		checklist[v] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (arr[v][i] == 1) {
			if (checklist[i] != 1) {
				DFS(n, i);
			}
		}
	}
}