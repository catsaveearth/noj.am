#include <stdio.h>


int gcd(int a, int b) {
	int res = 0;

	if (!(a % b))
		return b;

	else {
		res = a % b;
		a = b;
		b = res;
		return gcd(a, b);
	}
}

int main() {
	int fnumerator, fdenominator;
	int snumerator, sdenominator;
	int lnumerator, ldenominator;
	int d;

	scanf("%d %d", &fnumerator, &fdenominator);
	scanf("%d %d", &snumerator, &sdenominator);

	lnumerator = fnumerator * sdenominator + snumerator * fdenominator;
	ldenominator = fdenominator * sdenominator;

	if (lnumerator > ldenominator) {
		d = gcd(lnumerator, ldenominator);
	}
	else
		d = gcd(ldenominator, lnumerator);

	lnumerator = lnumerator / d;
	ldenominator = ldenominator / d;

	printf("%d %d", lnumerator, ldenominator);

}