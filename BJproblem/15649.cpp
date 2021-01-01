#include <stdio.h>

int ck[9] = { 0, };
int print[8] = { 0, };
int n, m;

void dfs(int cnt);

int main(void) {

	scanf("%d %d", &n, &m);
	dfs(0);

}

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", print[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!ck[i]) {
			ck[i] = 1;
			print[cnt] = i;
			dfs(cnt + 1);
			ck[i] = 0;
		}
	}


}