#include <stdio.h>

int min(int a, int b);

int arr[1001][3] = { 0, };
int rst[1001][3] = { 0, };

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	}
	rst[0][0] = arr[0][0];
	rst[0][1] = arr[0][1];
	rst[0][2] = arr[0][2];

	for (int i = 1; i < n; i++) {
		rst[i][0] = min(rst[i - 1][1], rst[i - 1][2]) + arr[i][0];
		rst[i][1] = min(rst[i - 1][0], rst[i - 1][2]) + arr[i][1];
		rst[i][2] = min(rst[i - 1][1], rst[i - 1][0]) + arr[i][2];
	}

	printf("%d", min(min(rst[n-1][0], rst[n-1][1]), rst[n-1][2]));
}

int min(int a, int b) {
	if (a > b)return b;
	else return a;
}