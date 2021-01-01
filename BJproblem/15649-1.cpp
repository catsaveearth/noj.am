#include <iostream>
using namespace std;

int ans[9] = { 0, }; //답을 저장할 배열
int checker[9] = { 0, }; //방문 체크 배열
int n, m;

int promising(int i) {
	if (!checker[i]) return 1;
	else return 0;
}

void bt(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", ans[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (promising(i)) {
			ans[k] = i;
			checker[i]++;
			bt(k + 1);
			checker[i]--;
		}
	}
}

int main(void) {
	scanf("%d %d", &n, &m);
	bt(0);
}