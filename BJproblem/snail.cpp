#include <stdio.h>

int arr[100][100];

int main(void) {
	int n;
	printf("\n원하는 크기를 입력하세요 : \n");
	scanf("%d", &n);
	int num = 1;
	while (num <= n * n) {
		int i, j;

		for (int j = 0; j < n; j++) {
			arr[i][j] = num;
			num++;
		}

		for (int i = 0; i < n; i++) {
		}



	}

}