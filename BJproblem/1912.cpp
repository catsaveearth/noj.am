#include <stdio.h>
#include <math.h>
// idea : DP => ���� ū �� = ���� ���Ѱ� + ���ݱ��� ���ߴ� ��

int arr[100001] = { 0, };
int DP[100001] = { 0, };
int max;

int maxvalue(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			DP[0] = arr[0];
			max = arr[0];
		}
		else {
			DP[i] = maxvalue(arr[i], DP[i - 1] + arr[i]);
			max = maxvalue(max, DP[i]);
		}
	}
	printf("%d\n", max);
}