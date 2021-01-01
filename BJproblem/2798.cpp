#include <stdio.h>

int main(void) {
	int N, M;
	int result = 0;
	int card[101] = { 0, };
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &card[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j+1; k < N; k++) {
				int number = card[i] + card[j] + card[k];
				if (number <= M && result < number) result = number;
			}
		}
	}
	printf("%d", result);

}