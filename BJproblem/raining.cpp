#include <stdio.h>

int trap(int* height, int heightSize);
int main(void) {
	int n;
	int arr[20] = { 0, };
	for (int i = 0; i < 12; i++) {
		scanf("%d", &arr[i]);
	}
	int a = trap(arr, 12);
	printf("%d", a);
}

int trap(int* height, int heightSize) {
	int check = 0, remember = -1;
	for (int k = 0; k <= 3; k++) {
		for (int i = 1; i <= heightSize; i++) {
			if (height[i] > k) {
				if (remember==-1) remember = i;
				else {
					check += i - remember - 1;
					remember = i;
				}
			}
		}
	}

	return check;
}

