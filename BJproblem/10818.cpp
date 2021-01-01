#include <stdio.h>

int main(void) {

	int num;
	scanf("%d", &num);
	int check;
	scanf("%d", &check);
	int max = check, min = check;

	while (--num) {
		scanf("%d", &check);
		if (max < check)max = check;
		if (min > check) min = check;
	}
	printf("%d %d", min, max);
}