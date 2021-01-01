#include <stdio.h>
#include <math.h>

int zzz(int n, int r, int c);
int check = 0;

int main(void) {
	int N, r, c;
	scanf_s("%d %d %d", &N, &r, &c);

	int result = zzz(N, r, c);
	printf("%d", result-1);
}

int zzz(int n, int r, int c) {
	int line = (pow(2, n) - 1) / 2;
	int rest = pow(2, n - 1) ;
	int check = rest * rest;

	if (r <= line && c <= line) { //1사분면
		if (line == 0) {
			return 1;
		}
		else {
			return zzz(n - 1, r, c);
		}
	}
	else if (r <= line && c > line) { //2사분면
		if (line == 0) {
			return 2;
		}
		else {
			return check + zzz(n - 1, r, c-rest);
		}
	}
	else if (r > line && c <= line) { //3사분면
		if (line == 0) {
			return 3;
		}
		else {
			return check*2 + zzz(n - 1, r-rest, c);
		}
	}
	else if (r > line && c > line) { //4사분면
		if (line == 0) {
			return 4;
		}
		else {
			return check*3+ zzz(n - 1, r-rest, c-rest);
		}
	}

}