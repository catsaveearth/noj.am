#include <stdio.h>

int main(void) {
	int c = 0, n = 0;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		int score[1001];
		int sum = 0;
		double average = .0;

		for (int j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}

		average = (double)sum / n;
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (average < score[j])
				count++;
		}
		printf("%.3f%%\n", (double)count * 100 / n);
	}

}