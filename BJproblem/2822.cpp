#include <stdio.h>

int main(void) {
	int score[8] = { 0, };
	int rescore[8] = { 0, };

	for (int i = 0; i < 8; i++) {
		scanf("%d", &score[i]);
		rescore[i] = score[i];
	}

	for (int k = 0; k < 7; k++) {
		for (int j = 1; j < 8 - k; j++) {
			if (rescore[j - 1] > rescore[j]) {
				int temp = rescore[j];
				rescore[j] = rescore[j - 1];
				rescore[j - 1] = temp;
			}
		}
	}
	int sum = 0;
	for (int i = 3; i < 8; i++) {
		sum += rescore[i];
	}
	printf("%d\n", sum);


	for (int i = 0; i < 8; i++) {
		for (int k = 3; k < 8; k++) {
			if (score[i] == rescore[k]) {
				printf("%d ", i+1);
				break;
			}
		}
			
	}

}