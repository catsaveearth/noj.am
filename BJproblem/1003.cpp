#include <stdio.h>

int fibocheck(int n);
int fibo(int n);
int fibonum[42] = { 0, 1, 1, 2 };

int one = 0, zero = 0;

int main(void) {

	int checknum = 0;
	scanf("%d", &checknum);


	while (checknum--) {
		int num = 0;
		scanf("%d", &num);

		fibocheck(num);

		printf("%d %d\n", zero, one);
		zero = 0;
		one = 0;
	}

}

int fibocheck(int n) {

	if (n == 0) {
		zero = 1;
		one = 0;
		return 0;
	}
	else if (n == 1) {
		zero = 0;
		one = 1;
		return 0;
	}
	else {
		zero = fibo(n-1);
		one = fibo(n);
	}

}


int fibo(int n) {

	if (n <= 2) return 1;
	else if (fibonum[n] == 0) {
		return fibonum[n] = fibo(n - 1) + fibo(n - 2);
	}
	else return fibonum[n];


}