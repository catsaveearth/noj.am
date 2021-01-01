#include <stdio.h>

int main(void) {
	int n;
	int arr[1001] = { 0, };
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		sum += arr[i]*(n-i);
	}
	printf("%d", sum);
}