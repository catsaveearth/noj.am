#include <iostream>
using namespace std;

int ans[8] = { 0, };
int n, m;


void bt(int k) { //cnt
	if (k == m) {
		for (int j = 0; j < m; j++) {
			printf("%d ", ans[j]);
		}
		printf("\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			ans[k] = i;
			bt(k + 1);
		}
	}
}


int main(void) {
	scanf("%d %d", &n, &m);
	bt(0);
}