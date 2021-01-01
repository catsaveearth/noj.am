#include <stdio.h>

int main(void) {
	int dasoms;
	scanf("%d", &dasoms);
	int number[10] = { 0, };
	if (dasoms == 0)number[0]++;

	while (dasoms > 0) {
		number[dasoms % 10]++;
		dasoms /= 10;
	}

	int sum = number[6] + number[9];
	if (sum % 2 != 0)sum++;

	number[6] = sum / 2;
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		if (max < number[i]) {
			max = number[i];
		}
	}
	printf("%d", max);
}