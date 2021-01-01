#include <stdio.h>
void nextround(int* n, int* k, int* i);
int main(void) {
	int n, kim, im;
	scanf("%d %d %d", &n, &kim, &im);
	int round = 1;
	int nowhile = 1;
	//대결하는지 안하는지 판별
	while (nowhile) {
		if (kim > im) {
			if (kim - im == 1 && kim % 2 == 0) {
				printf("%d", round);
				nowhile = 0;
			}
			else {
				round++;
				nextround(&n, &kim, &im);			}
		}
		else {
			if (im - kim == 1 && im % 2 == 0) {
				printf("%d", round);
				nowhile = 0;
			}
			else {
				round++;
				nextround(&n, &kim, &im);
			}
		}
	}
}

void nextround(int* n, int* k, int* i) {
	int ck = 0, ci = 0;
	if (*n % 2 == 0) *n /= 2;
	else {
		int last_n = *n;
		*n = ((*n - 1) / 2)+ 1;
		//홀수라운드의 맨 끝이라면 자동결승
		if (last_n == *k) { *k = *n; ck = 1; }
		if (last_n == *i) { *i = *n; ci = 1; }
		
	}
	if (ck == 0){
		if (*k % 2 == 1) {
			*k = (*k + 1) / 2;
		}
		else *k /= 2;
	}
	if (ci == 0) {
		if (*i % 2 == 1) {
			*i = (*i + 1) / 2;
		}
		else *i /= 2;
	}
}