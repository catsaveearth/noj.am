#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int *pi = (int*)malloc(n * sizeof(int));
	int max = 0;
	int first;

	for (int i = 0; i < n; i++) {
		scanf("%d", &pi[i]);

		if (i == 0) {
			first = pi[0];
			continue;
		}

		if (i + 1 == n) {
			if (pi[i] > pi[i - 1]) {
				if (max < pi[i] - first) max = pi[i] - first;
			}
			else {
				if (max < pi[i - 1] - first) max = pi[i - 1] - first;
			}		
		}
		else if (pi[i - 1] < pi[i]) {
			continue;
		}
		else {
			if (max < pi[i - 1] - first) max = pi[i - 1] - first;
			first = pi[i];
		}
	}
	free(pi);
	printf("%d", max);
}