#include <bits/stdc++.h>
using namespace std;

int ans[9] = { 0, };
int n, m;
int num[9]; //real num
int ck[9] = { 0, };

void bt(int k) {
	if (k == m) {
		for (int j = 0; j < m; j++) {
			printf("%d ", ans[j]);
		}
		printf("\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			ans[k] = num[i];
			ck[i] = 1;
			bt(k + 1);
			ck[i] = 0;
		}
	}
}

int main(void) {
	scanf("%d %d", &n, &m);

	num[0] = -1;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
	}

	sort(num, num + n + 1);
	bt(0);
}