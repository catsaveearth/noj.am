#include <stdio.h>

int gcd(int, int);
void cains(int m, int n, int x, int y);

int main(void) {
	int num;
	int one = 0;
	int m, n, x, y;
	scanf("%d", &num);
	while (num--) {
		if (one != 0) printf("\n");
		one++;
		scanf("%d %d %d %d", &m, &n, &x, &y);
		if (m < x || n < y) {
			printf("-1");
			continue;
		}
		cains(m, n, x, y);
	}
}

void cains(int m, int n, int x, int y) {
	int y1, x1;
	int lcd = (m * n) / gcd(m, n);
	int count = 1;
	y1 = x;
	x1 = y;
	int but = 0;
	if (m < n) {
		count = x;
		while (count <= lcd) {
			if (y1 > n) y1 %= n;
			if (y1 == y) {
				printf("%d", count);
				but = 1;
				break;
			}
			y1 += m;
			count += m;
		}
		if (count > lcd&&but == 0) printf("-1");
	}
	else {
		count = y;
		while (count <= lcd) {
			if (x1 > m) x1 %= m;
			if (x1 == x) {
				printf("%d", count);
				but = 1;
				break;
			}
			x1 += n;
			count += n;
		}
		if (count > lcd&&but == 0) printf("-1");
	}
}

int gcd(int a, int b) {
	if (b > a) {
		int temp = b;
		b = a;
		a = temp;
	}
	int r = a % b;
	while (r != 0) {
		return gcd(b, r);
	}
	return b;
}