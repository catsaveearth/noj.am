#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int count = 0;
	int *arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = n - 2; i >= 0; i--) {
		if (arr[i + 1] <= arr[i]) {
			int temp = arr[i] - arr[i + 1] + 1;
			arr[i] = arr[i + 1] - 1;
			count += temp;
		}
	}
	free(arr);
	printf("%d", count);
}
//첨에 틀린 요인 : 점수가 같은경우를 생각안함(같은경우도 다르게 해줘야함)