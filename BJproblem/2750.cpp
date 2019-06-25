#include <stdio.h>

int main(void) {
	int arr[1000];
	int num, i, box;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < num; j++) {
		for (int k = 0; k < j; k++) {
			if (arr[j] < arr[k]) {
				box = arr[j];
				arr[j] = arr[k];
				arr[k] = box;
			}
		}
	}

	for (i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}


}