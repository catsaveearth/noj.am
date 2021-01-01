#include <stdio.h>
#include <math.h>
int checkp(int x);

int main(void) {

	int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		int answer[2] = { 10000, 0 };

		scanf("%d", &n);

		for (int i = 2; i < n; i++) {
			if (checkp(i)) {
				if (checkp(n-i)) {
					if (abs(answer[0] - answer[1]) > abs(n - 2 * i)) {
						answer[0] = i;
						answer[1] = n - i;
					}
				}
			}
		}
		if (answer[0] > answer[1]) {
			printf("%d %d\n", answer[1], answer[0]);
		}
		else {
			printf("%d %d\n", answer[0], answer[1]);
		}
		
	}
}

int checkp(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x%i == 0)return 0;
	}
	return 1;
}