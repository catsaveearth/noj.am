#include <stdio.h>

int main(void) {
	int N;
	float test[1000];
	float max = -1, all = 0;
	float average;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%f", &test[i]);
		if (max < test[i])
			max = test[i];
	}

	for (int i = 0; i < N; i++) {
		test[i] = test[i] / max * 100;
		all += test[i];
	}
	average = all / N;
	printf("%f", average);
}