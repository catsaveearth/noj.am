#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 1;
	while (1) {
		scanf("%d", &n);
		if (n == 0)break;

		float sum = 0.0f, result = 0.0f;
		int isum = 0;
		float *cost;
		cost = (float*)malloc(sizeof(float)*n);
		for (int i = 0; i < n; i++) {
			scanf("%f", &cost[i]);
			sum += cost[i];
			isum += (int)cost[i];
		}
		isum = (int)(sum / n);
		int rest = sum - isum;


		for (int i = 0; i < n; i++) {
			if (cost[i] < sum) {
				result += (sum - cost[i]);
			}
		}
		printf("$%0.2f\n", result);
		free(cost);
	}
}