#include <iostream>
using namespace std;

int ans[9] = { 0, };
int n, m;

void bt(int k) {
	if (k == m) {
		for (int j = 0; j < m; j++) {
			printf("%d ", ans[j]);
		}
		printf("\n");
	}
	else {
		if (k == 0) {
			for (int i = 1; i <= n; i++) {
				ans[k] = i;
				bt(k + 1);
			}
		}
		else {
			for (int i = 1; i <= n; i++) {
				if (ans[k - 1] <= i) {
					ans[k] = i;
					bt(k + 1);
				}			
			}
		}
	}
}

int main(void) {
	scanf("%d %d", &n, &m);
	bt(0);
}