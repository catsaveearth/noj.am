#include <stdio.h>

void backtracking(int k);

int arr[1000];
int isused[1000] = { 0, };
int n, m;

int main(void) {
	scanf("%d %d", &n, &m);
	backtracking(0);
}

void backtracking(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			printf("%d", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 0; i < n; i++) {
		if (isused[i] == 0) {
			isused[i] = 1;
			arr[k] = i + 1;
			backtracking(k + 1);
			isused[i] = 0;
		}
	}


	
}