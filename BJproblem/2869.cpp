#include <stdio.h>

int main(void) {
long long i;
	long long j;
	long long v,a,t=0;
	scanf("%lld", &i);
	scanf("%lld", &j);
	scanf("%lld", &v);

	a = i - j;
	v -= i;
	t++;

	if (v%a == 0) {
		t += v / a;
	}
	else t += v / a + 1;

	printf("%d", t);
	
}