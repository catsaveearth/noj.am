#include <stdio.h>

int arr[1005];

int main(void){

	int num;
	int box;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
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

	printf("%d", arr[num-1] - arr[0]);

}