#include <stdio.h>
#include <math.h>

int main(void) {

	int n, m, k;
	int button[10] = { 0, };
	int min = 0;
	int check = -1;

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		scanf("%d", &k);
		button[k]++;
	}

	min = abs(100 - n); //100에서 +-만 쓴거


	while (check <1000001) {
		check++;
		int checknum[10] = { 0, };
		int num = check, i=0;
		int ignore = 0;

		while (num > 0) {
			checknum[i] = num % 10;
			num /= 10;
			i++;
		}
		if (i == 0)i = 1;

		for (int k = 0; k < i; k++) {
			for (int j = 0; j < 10; j++) {
				if (button[j] != 0) {
					if (checknum[k] == j) {
						ignore++;
						break;
					}
				}
			}
			if (ignore != 0)break;
		}
		if (ignore != 0)continue; 

		int result = abs(check - n)+i;
		if (result < min)min = result;
	}

	printf("%d", min);
}