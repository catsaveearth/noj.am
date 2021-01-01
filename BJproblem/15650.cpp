#include <stdio.h>

int arr[8] = { 0, };
int isused[9] = { 0, };
int n, m;

void dfs(int cnt);

int main(void) {

	scanf("%d %d", &n, &m);
	dfs(0);

}

void dfs(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = print[cnt - 1]; i < n; i++) {

		dfs(k + 1);
	}


}