#include <stdio.h>

int fibo[100] = { 0, 1, };
void fibonacci(int);

void main() {
	int end;
	scanf("%d", &end);
	fibonacci(end);
}

void fibonacci(int n) {
	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 1; i <= n; i++) {
		printf("%d\n", fibo[i]);
	}


}