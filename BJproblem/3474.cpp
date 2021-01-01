#include <stdio.h>
#include <math.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, five = 0;
		scanf("%d", &n);

		for (int i = 5; i <= n; i++) {
			int num = 5, k = 1;
			while (num < n) {
				k++;
				if (i >= num && i % num == 0)five++;
				num = pow(5, k);
			}
			
		}

		printf("%d\n", five);
	}
}