#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	char expression[50];
	gets_s(expression);

	int sum = 0;
	int s = 0, e = 0;
	int k = 0;
	bool minus = false;
	int num[50] = { 0, };

	for (int i = 0; i < 50; i++) {
		printf("%d", expression[i]);
		if (expression[i] == '+' || '-') {
			e = i - 1;
			int expnum = e - s;
			for (int l = 0; l <= expnum; l++) {
				num[k] += exp(l)*atoi(&expression[e]);
				e--;
			}

			printf("%d\n", num[k]);
			s = i + 1;
			if (expression[i] == '+'&&minus==false) {
				sum += num[k];
			}
			else {
				sum -= num[k];
				if (minus == false)minus = true;
				else minus = true;
			}
			k++;
		}
	}
	printf("%d", sum);
}