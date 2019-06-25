#include <stdio.h>
#include <math.h>
int hansu(int n);

int main(void) {
	
	int n;
	scanf("%d", &n);
	int result = hansu(n);
	printf("%d", result);

	return 0;
}

int hansu(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		int temp = i;
		if (i < 100) count++;
		else {
			int a, b, c;
			c = temp % 10;
			temp /= 10;
			b = temp % 10;
			temp /= 10;
			a = temp;

			if (a - b == b - c) { count++; 
			}
		}
	}

	return count;
}