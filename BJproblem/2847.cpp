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
//÷�� Ʋ�� ���� : ������ ������츦 ��������(������쵵 �ٸ��� �������)