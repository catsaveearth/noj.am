#include <stdio.h>

int main(void) {

	//int sort
	/*
	int a[10] = { 2, 50, 6, 78, 1, 6, 45, 9, 0, -5 };

	for (int pass = 1; pass < 10; pass++) {
		int swap = 0;
		for (int i = 0; i < 10 - pass; i++) {
			if (a[i] > a[i + 1]) {
				swap = 1;
				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
		if (!swap) break;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d  ", a[i]);
	}
	*/

	//char sort
	char a[10] = "helloworl";

	for (int pass = 2; pass < 10; pass++) {
		int swap = 0;
		for (int i = 0; i < 10 - pass; i++) {
			if (a[i] > a[i + 1]) {
				swap = 1;
				char temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
		if (!swap) break;
	}

	for (int i = 0; i < 10; i++) {
		printf("%c  ", a[i]);
	}

}