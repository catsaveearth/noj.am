#include <stdio.h>


int factorial(int number) {
	long result = 1;
	for (int c = 1; c <= number; c++) {
		result = result * c;
	}
	return result;
}

int main(void) {
	int num, fac, count=0;
	scanf("%d", &num);
	if (num == 0)
		printf("%d", 1);

	else {
		fac = factorial(num);
		printf("%d\n", fac);
		while (1) {
			if (fac % 10 == 0) {
				count++;
				fac = fac / 10;
				printf("%d\n", fac);
			}
			else
				break;
		}
		printf("Fighting %d", count);
	}
	
}