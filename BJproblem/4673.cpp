#include <stdio.h>
int arr[10000] = { 0, };
char num[3];

void self(int num);

int main(void) {
	

	for (int i = 0; i < 10000; i++) {
		self(i);
	}

	for (int i = 0; i < 10000; i++) {
		if (arr[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}

void self(int num) {
	int total = 0;
	total += num;
	while (num > 0) {
		total += num % 10;
		num /= 10;
	}
	arr[total] = 1;

}