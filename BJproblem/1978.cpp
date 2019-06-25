#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int num[101] = { 0, };
	int count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		if (num[i] == 1) continue;
		int k = 0;
		for (int j = 2; j < num[i]; j++) {
			if (num[i] % j == 0) {
				k++;
			}
		}
		if (!k) count++;
	}


	printf("%d", count);
}