#include <stdio.h>
#include <math.h>

int Rev(int a);

int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	x = Rev(x);
	y = Rev(y);
	int result = x + y;
	result = Rev(result);
	printf("%d", result);
}

int Rev(int a) {
	int cpy = a;
	int ck = 0;
	while (a > 0) {
		a /= 10;
		ck++;
	}
	while (cpy > 0) {
		a += pow(10, ck-1)*(cpy % 10);
		cpy /= 10;
		ck--;
	}
	return a;
}