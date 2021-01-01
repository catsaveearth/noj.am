#include <stdio.h>

int main(void) {
	int input[51] = { 0, };
	int n;
	scanf("%d", &n);
	int min, max;
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
		if (i == 0) {
			min = input[0];
			max = input[0];
		}
		else {
			if (min > input[i])min = input[i];
			if (max < input[i])max = input[i];
		}
	}
	printf("%d", max*min);
}