#include <stdio.h>
#include <math.h>

int main(void) {

	while (1) {
		int num, prime = 0;
		scanf("%d", &num);
		if (num == 0)break;
		for (int i = num + 1; i <= num * 2; i++) {
			if (i == 1) continue;
			int d = 1;
			int low = sqrt(i) + 1;
			for (int k = 2; k < low; k++) {
				if (i%k == 0) {
					d = 0; break;
				}
			}
			if (d)prime++;
		}
		printf("%d\n", prime);
	}
}