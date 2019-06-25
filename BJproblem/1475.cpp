#include <stdio.h>
#include <stdlib.h>



int main(void) {
	int n;
	scanf("%d", &n);

	int num[100000][10] = { 0, };
	int i = 0;
	int y = 0;



	while (n > 0) {
		if (i < 100000) {
			num[i][y] = n % 10;
			n /= 10;
			i++;
		}

	}


	int arrnum[10] = { 0 };
	for (int j = 0; j < i; j++) {
		arrnum[num[j]]++;
	}




	int max = arrnum[0];
	int maxnum = 0;

	for (int i = 0; i < 9; i++) {
		if (arrnum[max] < arrnum[i + 1]) {
			max = arrnum[i + 1];
			maxnum = i + 1;
		}
	}
	int result = max;

	if (maxnum == 6 || maxnum == 9) {
		max = (arrnum[6] + arrnum[9]) / 2;
	}

	printf("%d", max);

}