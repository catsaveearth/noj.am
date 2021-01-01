#include <stdio.h>

int arr[11] = { 0, 1, 2, 4, };

int main(void) {
	arr[1] = 1;
	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	int t;
	scanf("%d", &t);
	
	while (t--) {
		int k;
		scanf("%d", &k);
		printf("%d\n", arr[k]);
	}

}