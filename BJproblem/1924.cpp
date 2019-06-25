#include <stdio.h>

int main(void) {
	int m, d, sum=0, result;
	scanf("%d %d", &m, &d);

	for (int i = 1; i < m; i++) {
		
		if (i == 2)
			sum += 28;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			sum += 30;
		else
			sum += 31;

	}

	sum += d;

	result = sum % 7;

	switch (result) {
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	}

}