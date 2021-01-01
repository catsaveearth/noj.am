#include <stdio.h>

int main(void) {

	int n, m;
	
	
	
	scanf("%d %d", &n, &m);
	int result = 1;

	if (n == m)printf("1\n");
	else {
		for (int k = 0; k <n; k++) {
			result *= m;
			m--;
		}
		printf("%d\n", result);
	}

}