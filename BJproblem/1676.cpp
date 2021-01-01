#include <stdio.h>


int main(void) {
	int N;
	scanf("%d", &N);
	
	int five = 0;

	for (int i = 2; i <= N; i++) {
		if (i >= 125 && i % 125 == 0)five++;
		if (i >= 25 && i % 25 == 0)five++;
		if (i >= 5 && i % 5 == 0)five++;
	}

	printf("%d", five);

}

