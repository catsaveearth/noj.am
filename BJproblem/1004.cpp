#include <stdio.h>


int main(void) {
	int t=0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {

		int start[2] = { 0, };
		int end[2] = { 0, };

		scanf("%d %d %d %d", &start[0], &start[1], &end[0], &end[1]);


		int circle, check = 0;
		int x, y, r;
		int d;
		scanf("%d", &circle);

		while (circle--) {

			scanf("%d %d %d", &x, &y, &r);
			int a, b;
			//두 점중 하나만 반지름보다 짧으면 +
			//둘다 짧으면 그대로
			d = (start[0] - x)*(start[0] - x) + (start[1] - y)*(start[1] - y);
			a = d > r*r ? 1:0;
			d = (end[0] - x)*(end[0] - x) + (end[1] - y)*(end[1] - y);
			b = d > r*r ? 1:0;
			if (a != b)check++;

		}
		printf("%d\n", check);
	}

	

}