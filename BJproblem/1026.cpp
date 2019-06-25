#include <stdio.h>

int main(void) {
	int num, i, j, box;
	int a[50], b[50];

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < num; i++) {
		scanf("%d", &b[i]);
	}


	for (i = 1; i < num; i++) {       //A를 오름차순 정렬
		for (j = 0; j < i; j++) {
			if (a[i] < a[j]) {
				box = a[i];
				a[i] = a[j];
				a[j] = box;
			}

		}
	}

	for (i = 1; i < num; i++) {       //B를 오름차순 정렬
		for (j = 0; j < i; j++) {
			if (b[i] < b[j]) {
				box = b[i];
				b[i] = b[j];
				b[j] = box;
			}

		}
	}

	int sum = 0;

	for (i = 0; i < num; i++) {
		sum += a[i]*b[num-i-1];
	}

	printf("%d", sum);


}