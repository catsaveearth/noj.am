#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int x, y, r, xx, yy, rr;
		scanf("%d %d %d %d %d %d", &x, &y, &r, &xx, &yy, &rr);
		int check;

		if (x == xx && y == yy) {
			if (r == rr)check = -1;
			else check = 0;
		}
		else {
			int d = (x - xx)*(x - xx) + (y - yy)*(y - yy);
			int k = r + rr;
			k = k * k;


			if (d == k)check = 1;
			else if (d > k)check = 0;
			else {
				if (d == (r-rr)*(r-rr)) check = 1;
				else if (d> (rr - r)*(rr - r)) check = 2;
				else check = 0;
			}


		}
		printf("%d\n", check);
	}

}