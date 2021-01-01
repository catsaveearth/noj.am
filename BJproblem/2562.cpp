#include <stdio.h>

int main(void) {
	int num[9] = { 0, };
	int max = 0;
	int maxi = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		if (max < num[i]) {
			max = num[i];
			maxi = i;
		}
	}
	printf("%d\n%d", max, maxi + 1);
}