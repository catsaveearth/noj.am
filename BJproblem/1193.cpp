#include <stdio.h>

int main(void) {

	int inputnum;
	int bm = 1, bj = 1;
	scanf("%d", &inputnum);

	int scannum = inputnum;
	int check = 0;
	int test = 1;

	while (scannum > 0) {
		scannum -= test;
		test++;
		check++;
	}
	
	test = 1;
	for (int i = 1; i < check; i++) {
		inputnum -= test;
		test++;
	}

	switch (check % 2) {
	case 0:
		bm = check;
		for (int i = 1; i < inputnum; i++) {
			bm--;
			bj++;
		}

		break;

	case 1:
		bj = check;
		for (int i = 1; i < inputnum; i++) {
			bm++;
			bj--;
		}
		break;
	}

	printf("%d/%d", bj, bm);


}

