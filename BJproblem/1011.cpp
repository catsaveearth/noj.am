#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);

	while (t--) {
		double a, b;
		scanf("%lf, %lf");

		double check = b - a;
		int i = 1, s;

		while (check > s) {
			s = i * i;
			i++;
		}
		printf("%d", s);



	}
}